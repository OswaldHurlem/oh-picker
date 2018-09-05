# TODO
# This stays in oh_picker project for now
# Make explicit NSEW, U/D, A/K vectors
# Usage: py -3 ./oh_generate_vectors.py [header filename] [header guard name]
#     eg py -3 ./oh_generate_vectors.py oh_generate_vectors.py.h OH_GENERATE_VECTORS_PY_H

# Contributors! DO NOT, FOR ANY REASON, reference a CRT function, especially math.h
# This library is BYOU (Bring Your Own Util.h)

# None of these apply to boolean vectors
# Bitwise operations (only on integer types)
# reflect (geometric reflect operation, floats only)
# Safe divide/norm (ie A/B OR some value C if B is zero anywhere)
# count bits (integer types only)
# ceil_pow2 (integer types only)
# dda stepping (this one is fuzzy... hmm skip it)

# ADD THESE FUNCS AND INTRODUCE TO OH_GENERATE_VECTORS.PY.H
# Quaternion:
#     LookAt
# 
# Matrix
#     Divide
#     Ortho
#     Perspective

# 16-bit floats
# SSE4 (Not high priority)

# Reject Ideas
#     Swizzly constructors

# Include/exclude functions using macros AmAP

from collections import namedtuple
from itertools import chain, product
from contextlib import contextmanager
import re
import sys

Prim = namedtuple('prim', 
    [        'name', 'min',       'max',       'is_float', 'is_bits', 'is_negated', 'is_bool', 'caps', 'fmt', 'pack_as'])
# NOTE: min and max are unused (not sure what I had in mind for them)
primitives = {prim.name : prim for prim in [
        Prim('u1t',  '0',         'UINT8_MAX', False,      True,      False,        False,     'U1t',  '%d',  'u4t'),
        Prim('i4t',  'INT32_MIN', 'INT32_MAX', False,      True,      True,         False,     'I4t',  '%d',  None),
        Prim('f4t',  '-INFINITY', 'INFINITY',  True,       False,     True,         False,     'F4t',  '%f',  None),
        Prim('f8t',  '-INFINITY', 'INFINITY',  True,       False,     True,         False,     'F8t',  '%f',  None),
        Prim('blt',  None,        None,        False,      False,     False,        True,      'Blt',  '%d',  None),
    ]}

def get_prims():
    return [v for (k,v) in primitives.items()]

def convert_func_name(pFrom, pTo):
    return f'Convert{pFrom.caps}_{pTo.caps}' if (pFrom != pTo) else ''

subscript_schemes = [
        [],
        [ ('x',            ), ('r',            ), ],
        [ ('x','y',        ), ('u','v',        ), ],
        [ ('x','y','z',    ), ('r','g','b',    ), ('h','s','v',           ), ('CIE_a','CIE_L','CIE_b',           ) ],
        [ ('x','y','z','w',), ('r','g','b','a',), ('h','s','v','__pun1_a',), ('CIE_a','CIE_L','CIE_b','__unused',) ],
    ]
int_prim = primitives['i4t']
bool_prim = primitives['blt']

ctor_combos = [
    [], [], [],
    [[2, 1], [1, 2]],
    [[2, 1, 1], [1, 2, 1], [1, 1, 2], [3, 1], [1, 3], [2, 2]],
    ]

def nljoin(l):
    return '\n'.join(l)

def cmjoin(l):
    return ', '.join(l)

def white_pfx(strings):
    strings = [s for s in strings if s.strip() != '']
    if not strings: return ''
    pat = r'\s*'
    prefix = re.match(pat, strings[0]).group(0)
    for s in strings:
        for i in range(len(prefix)):
            if prefix[i] != s[i]:
                prefix = prefix[:i]
                break
    return prefix

def reindent_txt(txt, newIndent=''):
    lines = deindent_txt_to_lines(txt)
    builder = []
    for l in lines:
        builder.append(newIndent + l)
    return nljoin(builder)

def deindent_txt_to_lines(txt):
    lines = txt.split('\n')
    oldIndent = white_pfx(lines)
    lines_out = []
    for l in lines:
        if oldIndent:
            l = l.replace(oldIndent, '', 1)
        lines_out.append(l)
    return lines_out

class CFmtr(object):
    def __init__(self):
        self._indc = 0
        self._builder = []
        return

    @property
    def _indstr(self):
        return ' ' * 4 * self._indc

    def line(self, s=''):
        self._builder.append(self._indstr + s)

    def triple(self, txt):
        lines = deindent_txt_to_lines(txt)
        self.lines(lines)


    def lines(self, l):
        for line in l:
            self.line(line)

    @contextmanager
    def document(self, s):
        self._builder.append(self._indstr + '// ' + s)
        yield

    @contextmanager
    def indent(self, txt=None, i=1):
        if txt:
            self.line(txt)
        self._indc += i
        yield
        self._indc -= i

    @contextmanager
    def scope(self, txt='', knr=True, sc=False):
        if knr:
            self.line(txt + ' {')
        else:
            self.line(txt)
            self.line('{')
        with self.indent(None):
            yield
        self.line('}' + (';' if sc else ''))

    @property
    def text(self):
        return nljoin(self._builder)

    @property
    def oneliner(self):
        return ' '.join(' '.join(l.split()) for l in self._builder)

class Vector(object):
    def __init__(self, T, n):
        self.T = T
        self.n = n

    def __eq__(self, other):
        return (self.T == other.T) and (self.n == other.n)

    @property
    def sub_schemes(self):
        return subscript_schemes[self.n]

    @property
    def subs(self):
        return self.sub_schemes[0]

    def __str__(self):
        return f"{self.T.name}_{self.n}"

    @property
    def caps(self):
        return f"{self.T.caps}_{self.n}"

    @property
    def ctor_name(self):
        return 'Mk'+self.caps
    

    def struct_for_subs(self, subs, fmtr=None):
        fmtr = fmtr or CFmtr()
        elements = ' '.join(f'{self.T.name} {ss};' for ss in subs)
        fmtr.line(f'struct {{ {elements} }};')
        return fmtr.text

    #to get this
    def union_def(self, fmtr=None):
        fmtr = fmtr or CFmtr()
        with fmtr.scope(f'union {self}', sc=True):
            for subs in self.sub_schemes:
                self.struct_for_subs(subs, fmtr)
            fmtr.line(f'{self.T.name} E[{self.n}];')
            if (self.T.pack_as):
                fmtr.line(f'{self.T.pack_as} Packed;')
        return fmtr.text

    def ctor_n_prims(self, prim, fmtr=None):
        fmtr = fmtr or CFmtr()
        param_str = ', '.join(f'{prim.name} {ss.upper()}' for ss in self.subs)
        with fmtr.scope(f'inline {self} {self.ctor_name}({param_str})'):
            fmtr.line(f'{self} V;')
            fmtr.lines([f'V.{ss} = {convert_func_name(prim, self.T)}({ss.upper()});'
                for ss in self.subs])
            fmtr.line('return V;')
        return fmtr.text

    def ctor_single_prim(self, prim, fmtr=None):
        fmtr = fmtr or CFmtr()
        if False: # Multi-line
            with fmtr.scope(f'inline {self} {self.ctor_name}({prim.name} A)'):
                fmtr.line(f'{self} V;')
                fmtr.lines([f'V.{ss} = {convert_func_name(prim, self.T)}(A);'
                    for ss in self.subs])
                fmtr.line('return V;')
            return fmtr.text
        else:
            with fmtr.scope(f'inline {self} {self.ctor_name}({prim.name} A)'):
                terms = ', '.join(f'{convert_func_name(prim, self.T)}(A)' for ss in self.subs)
                fmtr.line(f'return {self.ctor_name}({terms});')
            return fmtr.oneliner

    def ctor_other_vec(self, vec, fmtr=None):
        fmtr = fmtr or CFmtr()
        if self.n != vec.n:
            raise AssertionError("Can't construct from vector of different length")
        if False: # Multi-line
            with fmtr.scope(f'inline {self} {self.ctor_name}({vec} A)'):
                fmtr.line(f'{self} V;')
                fmtr.lines([f'V.{ss} = {convert_func_name(vec.T, self.T)}(A.{ss});'
                    for ss in self.subs])
                fmtr.line('return V;')
        else:
            with fmtr.scope(f'inline {self} {self.ctor_name}({vec} A)'):
                terms = ', '.join(f'A.{ss}' for ss in self.subs)
                fmtr.line(f'return {self.ctor_name}({terms});')
            return fmtr.oneliner

    def ctor_direction(self, fmtr=None):
        fmtr = fmtr or CFmtr()
        with fmtr.document(f'Construct from card_dir'):
            with fmtr.scope(f'inline {self} {self.ctor_name}(card_dir D)'):
                fmtr.line(f'{self} V = {{}};')
                fmtr.line(f'V.E[D/2] = {convert_func_name(int_prim, self.T)}(D%2 ? 1 : -1);')
                fmtr.line('return V;')
        return fmtr.text

    def ctor_pack(self, fmtr=None):
        fmtr = fmtr or CFmtr()
        with fmtr.document(f'Construct from packed bits'):
            with fmtr.scope(f'inline {self} {self.ctor_name}_FromBits({self.T.pack_as} Bits)'):
                fmtr.line(f'{self} V = {{}};')
                fmtr.line(f'V.Packed = Bits;')
                fmtr.line('return V;')
        return fmtr.text

    def unary_el_op(self, name, op, fmtr=None):
        fmtr = fmtr or CFmtr()
        with fmtr.scope(f'inline {self} {name}({self} A)'):
            with fmtr.indent(f'return {self.ctor_name}('):
                fmtr.lines([op(f'A.{ss}') + (',' if ss != self.subs[-1] else ');')
                    for ss in self.subs])
        return fmtr.oneliner

    def bin_el_op(self, name, op, rVec=None, fmtr=None):
        rVec = rVec or self
        fmtr = fmtr or CFmtr()
        with fmtr.scope(f'inline {rVec} {name}({self} A, {self} B)'):
            with fmtr.indent(f'return {rVec.ctor_name}('):
                fmtr.lines([op(f'A.{ss}', f'B.{ss}') + (',' if ss != self.subs[-1] else ');') 
                    for ss in self.subs])
        return fmtr.oneliner

    def ternary(self, name, fmtr=None):
        fmtr = fmtr or CFmtr()
        bool_vector = Vector(bool_prim, self.n)
        with fmtr.scope(f'inline {self} {name}({bool_vector} Q, {self} A, {self} B)'):
            with fmtr.indent(f'return {self.ctor_name}('):
                fmtr.lines([f'Q.{ss} ? A.{ss} : B.{ss}' + (',' if ss != self.subs[-1] else ');') 
                    for ss in self.subs])
        return fmtr.oneliner

    def ternary_scalar(self, name, fmtr=None):
        fmtr = fmtr or CFmtr()
        bool_vector = Vector(bool_prim, self.n)
        with fmtr.scope(f'inline {self} {name}({bool_vector} Q, {self.T.name} A, {self.T.name} B)'):
            with fmtr.indent(f'return {self.ctor_name}('):
                fmtr.lines([f'Q.{ss} ? A : B' + (',' if ss != self.subs[-1] else ');') 
                    for ss in self.subs])
        return fmtr.oneliner

    def scal_op_r(self, name, op, rVec=None, fmtr=None):
        rVec = rVec or self
        fmtr = fmtr or CFmtr()
        with fmtr.scope(f'inline {rVec} {name}({self} V, {self.T.name} A)'):
            with fmtr.indent(f'return {rVec.ctor_name}('):
                fmtr.lines([op(f'V.{ss}', 'A') + (',' if ss != self.subs[-1] else ');')
                    for ss in self.subs])
        return fmtr.oneliner

    def scal_op_l(self, name, op, rVec=None, fmtr=None):
        rVec = rVec or self
        fmtr = fmtr or CFmtr()
        with fmtr.scope(f'inline {rVec} {name}({self.T.name} A, {self} V)'):
            with fmtr.indent(f'return {rVec.ctor_name}('):
                fmtr.lines([op('A', f'V.{ss}') + (',' if ss != self.subs[-1] else ');')
                    for ss in self.subs])
        return fmtr.oneliner

    def bin_and_scalars(self, name, op, rVec=None):
        rVec = rVec or self
        return '\n'.join([
            self.bin_el_op(name, op, rVec),
            self.scal_op_r(name, op, rVec),
            self.scal_op_l(name, op, rVec),
        ])

    def compound(self, s):
        return '\n'.join([
            f'inline {self}& operator{s}=({self}& Me, {self} A) {{ return (Me = Me {s} A); }}',
            f'inline {self}& operator{s}=({self}& Me, {self.T.name} A) {{ return (Me = Me {s} A); }}'
            ])

    def horiz_op(self, name, op, rtype=None, fmtr=None):
        rtype = rtype or str(self.T.name)
        fmtr = fmtr or CFmtr()
        with fmtr.scope(f'inline {rtype} {name}({self} V)'):
            fmtr.line('return ' + op([f'V.{ss}' for ss in self.subs]) + ';')
        return fmtr.oneliner

    def diagonal(self, name, fmtr=None):
        fmtr = fmtr or CFmtr()
        param_str = ', '.join(f'{self} V{ss}' for ss in self.subs)
        with fmtr.scope(f'inline {self} Diagonal({param_str})'):
            fmtr.line(f'{self} V;')
            fmtr.lines([f'V.{ss} = V{ss}.{ss};'
                for ss in self.subs])
            fmtr.line('return V;')
        return fmtr.text

    # NOTE there's so many of these it's better to just have it format a block of one-liners *shrug*
    def swizzles(self, fmtr=None):
        fmtr = fmtr or CFmtr()
        for nTo in range(2,5):
            vTo = Vector(self.T, nTo)
            for ssCombo in product(list(self.subs) + ['0'], repeat=vTo.n):
                if (ssCombo.count('0') != len(ssCombo)):
                    params = ', '.join((f'({vTo.T.name})0' if (ss == '0') else f'V.{ss}') for ss in ssCombo)
                    name = 'Swizz' + ''.join(ssCombo).upper()
                    fmtr.line(f'inline {vTo} {name}({self} V) {{ return {vTo.ctor_name}({params}); }}')
        return fmtr.text

    # Gives blank line if no concats... that's OK
    def concats(self, fmtr=None):
        fmtr = fmtr or CFmtr()
        for ctor_combo in ctor_combos[self.n]:
            ss_idx = 0
            params = []
            ctor_args = []
            for param_n in ctor_combo:
                if param_n == 1:
                    params.append( (self.T.name, self.subs[ss_idx].upper()) )
                    ctor_args.append(self.subs[ss_idx].upper())
                else:
                    param_name = ''.join(self.subs[ss_idx:ss_idx+param_n]).upper()
                    params.append( (
                        str(Vector(self.T, param_n)),
                        param_name
                        ) )
                    ctor_args.extend(
                        f'{param_name}.{ss}'
                        for ss in self.subs[0:param_n]
                        )
                ss_idx += param_n
            f_argstr = ', '.join(f'{t} {n}' for (t, n) in params)
            ctor_argstr = ', '.join(ctor_args)
            fmtr.line(f'inline {self} VConcat({f_argstr}) {{ return {self.ctor_name}({ctor_argstr}); }}')
        return fmtr.text

    def debug_macro(self, fmtr=None):
        fmtr = fmtr or CFmtr()
        mSfx = f'{self}'.upper()
        fSpecs = ', '.join([self.T.fmt for ss in self.subs])
        fmtr.line(f'#define OH_DBG_{mSfx}(_var) OH_DBG("{self} "' + 
            f' OH_STRINGIZE(_var,) " = {{ {fSpecs} }}", OH_VA{self.n}(_var))')
        return fmtr.text

def write_vector_h(filename, namespace):
    macro_prefix = f'{namespace.upper()}_'
    file_chunks = []
    vector_types = [Vector(p, n) for p in get_prims() for n in range(2,5)]
    nonbool_vector_types = [v for v in vector_types if not v.T.is_bool]
    bool_vector_types =    [v for v in vector_types if v.T.is_bool]
    negated_vector_types = [v for v in vector_types if v.T.is_negated]
    float_vector_types =   [v for v in vector_types if v.T.is_float]
    int_vector_types =     [v for v in vector_types if v.T == int_prim]
    nonbool_prims = [p for p in get_prims() if not p.is_bool]
    
    for v in vector_types:
        file_chunks.append(v.union_def() + '\n')

    for v in vector_types:
        file_chunks.append(v.debug_macro())
    file_chunks.append('')
    
    for v in nonbool_vector_types:
        for p in nonbool_prims:
            file_chunks.append(v.ctor_n_prims(p) + '\n')
    
    for v in bool_vector_types:
        file_chunks.append(v.ctor_n_prims(bool_prim) + '\n')
    
    for v in negated_vector_types:
        file_chunks.append(v.ctor_direction() + '\n')

    for v in vector_types:
        if v.T.pack_as:
            file_chunks.append(v.ctor_pack() + '\n')
    
    for v in nonbool_vector_types:
        for p in nonbool_prims:
            file_chunks.append(v.ctor_single_prim(p))
            file_chunks.append(v.ctor_other_vec(Vector(p,v.n)))
            file_chunks.append('')
    
    for v in bool_vector_types:
        file_chunks.append(v.ctor_single_prim(bool_prim))
        file_chunks.append('')

    for v in negated_vector_types:
        file_chunks.append(v.unary_el_op('Abs', lambda a: f'Abs({a})'))
        file_chunks.append('')
    
    for v in vector_types:
        file_chunks.append(v.bin_and_scalars('operator!=', lambda a,b: f'{a} != {b}', Vector(bool_prim, v.n)))
        file_chunks.append(v.bin_and_scalars('operator==', lambda a,b: f'{a} == {b}', Vector(bool_prim, v.n)))
        file_chunks.append(v.diagonal('Diagonal'))
        file_chunks.append('')
    
    for v in bool_vector_types:
        file_chunks.append(v.unary_el_op('operator!', lambda a:   f'!{a}' ))
        file_chunks.append(v.bin_and_scalars('operator&&', lambda a,b: f'{a} && {b}'))
        file_chunks.append(v.bin_and_scalars('operator||', lambda a,b: f'{a} || {b}'))
        file_chunks.append(v.horiz_op('HzAnd', lambda l: '&&'.join(l)))
        file_chunks.append(v.horiz_op('HzOr',  lambda l: '||'.join(l)))
        file_chunks.append('')
    
    for v in nonbool_vector_types:
        file_chunks.append(v.unary_el_op('operator-', lambda a:   f'-{a}' ))
        file_chunks.append(v.bin_and_scalars('operator+',  lambda a,b: f'{a} + {b}'))
        file_chunks.append(v.bin_and_scalars('operator-',  lambda a,b: f'{a} - {b}'))
        file_chunks.append(v.bin_and_scalars('operator*',  lambda a,b: f'{a} * {b}'))
        file_chunks.append(v.bin_and_scalars('operator/',  lambda a,b: f'Div({a},{b})'))
        file_chunks.append(v.bin_and_scalars('operator<',  lambda a,b: f'{a} < {b}',  Vector(bool_prim, v.n)))
        file_chunks.append(v.bin_and_scalars('operator<=', lambda a,b: f'{a} <= {b}', Vector(bool_prim, v.n)))
        file_chunks.append(v.bin_and_scalars('operator>',  lambda a,b: f'{a} > {b}',  Vector(bool_prim, v.n)))
        file_chunks.append(v.bin_and_scalars('operator>=', lambda a,b: f'{a} >= {b}', Vector(bool_prim, v.n)))
        file_chunks.append(v.bin_and_scalars('VtMin',      lambda a,b: f'Min({a},{b})'))
        file_chunks.append(v.bin_and_scalars('VtMax',      lambda a,b: f'Max({a},{b})'))
        file_chunks.append('')
    
    for v in nonbool_vector_types:
        file_chunks.append(v.compound('+'))
        file_chunks.append(v.compound('-'))
        file_chunks.append(v.compound('*'))
        file_chunks.append(v.compound('/'))
        file_chunks.append(v.horiz_op('HzAdd', lambda l: '+'.join(l)))
        file_chunks.append(v.horiz_op('HzMul', lambda l: '*'.join(l)))
        file_chunks.append(v.horiz_op('HzMin', lambda l: f'{macro_prefix}VARF_{v.n}(Min, {cmjoin(l)});'))
        file_chunks.append(v.horiz_op('HzMax', lambda l: f'{macro_prefix}VARF_{v.n}(Max, {cmjoin(l)});'))
        file_chunks.append('')
    
    for v in int_vector_types:
        file_chunks.append(v.bin_and_scalars('VtCeilDiv',  lambda a,b: f'CeilDiv({a},{b})'))
        file_chunks.append(v.bin_and_scalars('VtPow2CDiv', lambda a,b: f'Pow2CDiv({a},{b})'))
        file_chunks.append(v.bin_and_scalars('VtPow2Div',  lambda a,b: f'Pow2Div({a},{b})'))
        file_chunks.append(v.bin_and_scalars('VtPow2Mul',  lambda a,b: f'Pow2Mul({a},{b})'))
        file_chunks.append(v.bin_and_scalars('VtPow2Rem',  lambda a,b: f'Pow2Rem({a},{b})'))
        file_chunks.append(v.bin_and_scalars('VtRem',      lambda a,b: f'Rem({a},{b})'))
        file_chunks.append('')
    
    for v in float_vector_types:
        file_chunks.append(v.unary_el_op('Ceil',      lambda a: f'Ceil({a})'     ))
        file_chunks.append(v.unary_el_op('Sin',       lambda a: f'Sin({a})'      ))
        file_chunks.append(v.unary_el_op('Cos',       lambda a: f'Cos({a})'      ))
        file_chunks.append(v.unary_el_op('Tan',       lambda a: f'Tan({a})'      ))
        file_chunks.append(v.unary_el_op('InvSin',    lambda a: f'InvSin({a})'   ))
        file_chunks.append(v.unary_el_op('InvCos',    lambda a: f'InvCos({a})'   ))
        file_chunks.append(v.unary_el_op('InvTan',    lambda a: f'InvTan({a})'   ))
        file_chunks.append(v.unary_el_op('ToRadians', lambda a: f'ToRadians({a})'))
        file_chunks.append(v.unary_el_op('ToDegrees', lambda a: f'ToDegrees({a})'))
        file_chunks.append(v.unary_el_op('Round',     lambda a: f'Round({a})'    ))
        file_chunks.append(v.unary_el_op('Recip',     lambda a: f'Recip({a})'    ))
        file_chunks.append(v.unary_el_op('Sign',      lambda a: f'Sign({a})'     ))
        file_chunks.append(v.unary_el_op('Exp',       lambda a: f'Exp({a})'      ))
        file_chunks.append(v.unary_el_op('Log',       lambda a: f'Log({a})'      ))
        file_chunks.append(v.unary_el_op('Sqrt',      lambda a: f'Sqrt({a})'     ))
        file_chunks.append(v.unary_el_op('RSqrt',     lambda a: f'RSqrt({a})'    ))
        file_chunks.append(v.unary_el_op('Fract',     lambda a: f'Fract({a})'    ))
        file_chunks.append(f'inline {v.T.name} Len({v} V) {{ return Sqrt(HzAdd(V*V)); }}')
        file_chunks.append(f'inline {v} Norm({v} V) {{ return V/Len(V); }}')
        file_chunks.append(f'inline {v} VtLerp({v} MinVec, {v} Lerp, {v} MaxVec) {{ return ({v.ctor_name}(1)-Lerp)*MinVec + Lerp*MaxVec; }}')
        file_chunks.append(f'inline {v} VtDeLerp({v} MinVec, {v} Vec, {v} MaxVec) {{ return (Vec - MinVec)/(MaxVec - MinVec); }}')
        file_chunks.append(v.bin_and_scalars('VtRem',      lambda a,b: f'Rem({a},{b})'))
    
    for v in vector_types:
        file_chunks.append(f'inline {bool_prim.name} AllEq({v} A, {v} B)  {{ return HzAnd(A == B); }}')
        file_chunks.append(f'inline {bool_prim.name} AllNeq({v} A, {v} B)  {{ return HzAnd(A != B); }}')
        file_chunks.append(f'inline {bool_prim.name} AnyEq({v} A, {v} B)  {{ return HzOr(A == B); }}')
        file_chunks.append(f'inline {bool_prim.name} AnyNeq({v} A, {v} B)  {{ return HzOr(A != B); }}')
        file_chunks.append(v.ternary('VtIfElse'))
        file_chunks.append(v.ternary_scalar('VtIfElse'))
        file_chunks.append('')

    for v in nonbool_vector_types:
        file_chunks.append(f'inline {bool_prim.name} AllLt({v} A, {v} B)  {{ return HzAnd(A < B); }}')
        file_chunks.append(f'inline {bool_prim.name} AllLte({v} A, {v} B) {{ return HzAnd(A <= B); }}')
        file_chunks.append(f'inline {bool_prim.name} AllGt({v} A, {v} B)  {{ return HzAnd(A > B); }}')
        file_chunks.append(f'inline {bool_prim.name} AllGte({v} A, {v} B) {{ return HzAnd(A >= B); }}')
        file_chunks.append(f'inline {bool_prim.name} AnyLt({v} A, {v} B)  {{ return HzOr(A < B); }}')
        file_chunks.append(f'inline {bool_prim.name} AnyLte({v} A, {v} B) {{ return HzOr(A <= B); }}')
        file_chunks.append(f'inline {bool_prim.name} AnyGt({v} A, {v} B)  {{ return HzOr(A > B); }}')
        file_chunks.append(f'inline {bool_prim.name} AnyGte({v} A, {v} B) {{ return HzOr(A >= B); }}')
        file_chunks.append(f'inline {v.T.name} DotP({v} A, {v} B) {{ return HzAdd(A * B); }}')
        file_chunks.append(f'inline {v.T.name} SqLen({v} V) {{ return HzAdd(V*V); }}')
        file_chunks.append(f'inline {v} MAdd({v} A,{v} B,{v} C) {{ return (A*B) + C; }}')
        file_chunks.append(f'inline {v} VtClamp({v} MinVal, {v} V, {v} MaxVal) {{ return VtMin(VtMax(V, MinVal), MaxVal); }}')
        file_chunks.append('')

    for v in float_vector_types:
        file_chunks.append(f'inline {v} VtClamp01({v} V) {{ return VtClamp({v.ctor_name}(0), V, {v.ctor_name}(1)); }}')
        file_chunks.append('')
    
    for v in nonbool_vector_types:
        if v.n == 3:
            file_chunks.append(f'inline {v} CrossP({v} A, {v} B)  {{ return {v.ctor_name}' \
                + '( (A.y * B.z) - (A.z * B.y), -(A.x * B.z) + (A.z * B.x), (A.x * B.y) - (A.y * B.x) )' \
                + '; }')
    file_chunks.append('')
    # for v in vector_types:
    #     file_chunks.append(f'inline {v.T.name}* Ptr({v}& VecRef) {{ return &VecRef.{v.subs[0]}; }}')
    file_chunks.append('')
    for v in vector_types:
        if v.n >= 3:
            file_chunks.append(v.concats())
            file_chunks.append('')
    file_chunks.append('')
    for v in vector_types:
        file_chunks.append(v.swizzles())

    with open(filename, 'w') as file:
        file.write(f'#pragma once\n')
        file.write('#pragma warning(push)\n')
        file.write('#pragma warning(disable: 4201)\n')
        file.write(f'namespace {namespace} {{\n')
        code = '\n'.join(file_chunks)
        file.write(code + '\n')
        file.write(f'}} // {namespace}\n')
        file.write('#pragma warning(pop)\n')

if __name__ == "__main__":
   write_vector_h(sys.argv[1], sys.argv[2])