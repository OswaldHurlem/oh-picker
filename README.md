# OH Picker
OH Picker is an experimental program for applying [affine transformations](https://en.wikipedia.org/wiki/Affine_transformation) to colors in [L\*a\*b\* (aka CIELAB) space](https://en.wikipedia.org/wiki/CIELAB_color_space) using a [scene graph](https://en.wikipedia.org/wiki/Scene_graph). OH Picker was made as a personal exercise in working with both L\*a\*b\* and the [Dear ImGui](https://github.com/ocornut/imgui) library.

OH Picker presently lacks a known market or user base, and so is **unlikely to undergo further development**. If you find this program useful or worth improving in any way, please star it and/or provide feedback via an Issue.

## Intro video
[![OH Picker video](https://i.gyazo.com/01c0705b4e53fb36cdedf6bd65abce3e.png)](https://www.youtube.com/watch?v=NmqDyEO2bVo)
(Click to view)

This video explains what OH Picker is, how to use it, and why someone might want to. The most essential information is conveyed from 9:14 and 15:48. It's preceeded by some context for the project (including an explainer on L\*a\*b\*), and followed by an examination of the program's real-world utility.
Some bullet points for the most important parts of the video are repeated below for accessibility.

## Video Summary
- OH Picker uses the L\*a\*b\* color space, and was designed with it in mind.
    - Like RGB or HSV, L\*a\*b\* associates colors with triplets of numbers.
    - Unique to L\*a\*b\* is that the relative perceptual difference between a pair of colors can be estimated using the Euclidean distance formula ([See code](#deltaEFormula)) This metric is called ΔE\*.
![Delta E Example](https://i.imgur.com/g5nC18g.png)
- OH Picker takes advantage of the fact that, because L\*a\*b\* has perceptual uniformity, it can be treated as a Euclidean space.
    - Colors are treated as points. Sets of them can be translated, rotated, and flipped while preserving the distances between any two of those points.
        - Translation becomes tinting, lightening, or darkening.
        - Reflection becomes inversion of a particular color component
        - Rotation becomes hue shifting, as well as several operations without analogues.
    - Affine transformations like scaling and skewing can also be applied.
        - Scaling operations typically affect the saturation or contrast of a set of colors.
- OH Picker uses a Scene Graph (called the "Palette Tree"), a traditional interface for users to apply affine transformations to sets of objects.
    - Each color in an image’s palette has a corresponding Color Node.
        - These color nodes can be assigned to be children of Transform Nodes
    - Transform Nodes hold children as well as an affine transformation.
    - Affine transformations are expressed as a combination of:
        - Displacement (Translation)
        - Rotation (presented as Euler Angles)
        - Scale (including Reflection)
    - OH Picker uses an left-handed coordinate system with Y = up. L\*/a\*/b\* correspond to y/x/z, Up/East/North, and Yaw/Pitch/Roll.
        - This means that changing a Transform Node’s Yaw rotation causes its child colors to rotate on the a\*b\* plane. This makes them shift in hue but not Lightness.
- The structure of the Scene Graph can be changed via a drag-and-drop interface. 
    - Multiple nodes can be selected by control-clicking, and dragged and dropped as a group.
    - Dragging and dropping individual Color Nodes into the "Assignments" pane changes which palette slots they correspond to.
    - Other operations can be performed on the nodes via buttons at the top, or by right-clicking.
    - The values held by a color or transform node can be modified directly using Dear ImGui Dragger controls.
- OH Picker also displays all nodes, as well as a "Spectrum" of displayable L\*a\*b\* colors, in a triplet of orthagonal cutaway views
    - These views are:
        - First: Top-down view, showing nodes' a\* and b\* values.
        - Second: Northward view, showing nodes' L\* and a\* values.
        - Third: Westward view, showing nodes' L\* and b\* values.
    - These views can be zoomed and panned using the mouse wheel and middle mouse button.
    - To change where each view’s cutaway slice happens, you can drag a slider below the view.
        - You can also scroll the mouse wheel to change the size of the slice.
    - Color nodes are displayed as lifesavers filled with their color in the middle.
    - Transform nodes are represented by hands which perform the “left-hand-rule gesture.”
        - The thumb points in the direction of the transformed a\* axis, the index finger along the transformed L\* axis, and the middle finger along the transformed b\* axis.
        - The fingertips are colored as a reminder.
    - Nodes can be selected here and moved around, though this can be a little finnicky.
        - Multiple nodes may be selected by ctrl-clicking
    - Right clicking and dragging will change the rotation of a sole selected transform node.
- When an image is saved in this program, the scene graph is saved along with it, as metadata in a PNG file.

# Running
The Windows executable can be found in oh_picker.zip. Run `build/oh_picker_bgfx.exe`. Make sure `user_data\test.png` is present. Many errors which ought to produce error messages will instead cause the program to hard-crash.

# Building
This program is Windows-only for the forseeable future. Requires MSVC and Python 3. Inside the root directory, run:

`py -3 build_tools\build.py /opt=2`

# TODO
- Move revision history to Git
- Saving with alternative extension
- Nicely show if colors are out-of-range
- Better controls in Spectrum view
- Remove obvious perf waste
- Use HW cursor
- State for no file opened
- Error msg for invalid files
- Sync with git
- Replace sider with simple clicky box
- Copy/pasting
- Undo
- Code cleanup
- Analysis (voronoi)
- Colorblind preview
- Name colors using provided naming set (eg Pantone, XKCD)
- Export as palette file
- Other platforms
- Cut down on dependencies e.g. SDL2

# Libraries used
- [BGFX](https://github.com/bkaradzic/bgfx)
- [Dear ImGui](https://github.com/ocornut/imgui)
- [SDL2 (for input)](https://www.libsdl.org/)
- [tinyfiledialogs](https://sourceforge.net/projects/tinyfiledialogs/)
- [lodepng](https://github.com/lvandeve/lodepng)
- ["Polar Matrix Decomposition" sample code by Ken Shoemake](https://github.com/erich666/GraphicsGems/tree/master/gemsiv/polar_decomp)
- [tinystl](https://github.com/mendsley/tinystl)
- [Cog (for build)](https://nedbatchelder.com/code/cog/)

# Etc
### <a name="deltaEFormula">Footnote: Delta E Formula (1976) in C</a>
```
struct lab_color { float L, a, b; };

float DeltaE(lab_color Color1, lab_color Color2)
{
    float LDiff = Color1.L - Color2.L;
    float ADiff = Color1.a - Color2.a;
    float BDiff = Color1.b - Color2.b;

    return sqrtf(
              (LDiff*LDiff)
            + (ADiff*ADiff)
            + (BDiff*BDiff)
        );
}
```
