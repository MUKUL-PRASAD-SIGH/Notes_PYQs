__________________________________
Requirements
This application is developed in Microsoft Visual Studio .NET as a Visual Basic project.


__________________________________
Installation
The compiled executable, nSidePolygon.exe, is dependent on several interop assemblies:
- Interop.SolidEdgeConstants.dll
- Interop.SolidEdgeFramework.dll
- Interop.SolidEdgeFrameworkSupport.dll
- Interop.SolidEdgeGeometry.dll
- Interop.SolidEdgePart.dll

These files are delivered in the bin folder of the nSidePolygon folder.  If you copy nSidePolygon.exe to a new location, copy the interop assembly files to the same location.

__________________________________
Known Limitations


__________________________________
General Usage

nSidePolygon.exe is a tool, written in Visual Basic, to construct equilateral polygon profiles with 3 to 360 sides.

Use this tool in the Sketch or Profile environment in Solid Edge.  Behavior is the same, whether you start the debugger in Visual Studio, directly run the executable outside Solid Edge, or run the executable through the Tools > Macro command within Solid Edge.

When the program runs, a dialog box is displayed, providing options for how the polygon is constructed.  A group box control contains three radio button controls for the size of the polygon, measured in one of three ways: the radius from its center point to the center of a side (Radius from flat), the radius from its center point to a vertex (Radius from point), or the length of each side (Flat length).  A textbox control accepts this measurement, in the distance units of the open document.  A second textbox control accepts the number of sides in the polygon.  A checkbox control determines whether relationships are applied to the lines that comprise the polygon.

The program uses the Command and Mouse objects (as opposed to the Command and Mouse controls illustrated in other sample programs) to create a Solid Edge command that accepts mouse input.  A single left-button mouse click defines the center of the polygon.

The program uses trigonometric functions to construct the polygon from equal-length line segments.  If the Automatically Constrain option is set, the lines are endpoint connected and equal relationships are defined between them.

The command runs until the program is terminated by the user or until another Solid Edge command is started.
