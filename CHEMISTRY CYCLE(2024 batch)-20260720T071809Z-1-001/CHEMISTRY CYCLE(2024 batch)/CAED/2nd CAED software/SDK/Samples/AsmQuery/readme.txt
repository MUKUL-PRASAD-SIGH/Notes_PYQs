  DESCRIPTION

  Sample C++ program to query the assembly structure of a Solid Edge assembly file using
  Geometry and Structure (G&S) COM interfaces. This sample demonstrates how to :

  1. Launch the Solid Edge server to load a Solid Edge Assembly (.asm) file.
  2. Traverse the assembly structure that consists of sub-assembly and part occurrence objects.
  3. Obtain the surface body from a part occurrence's definition and traverse its Brep G&T structure.
  4. Create an element-proxy object that uniquely identifies a topological element (face/edge/vertex)
     occuring anywhere in the assembly.
  5. Obtain a persistent identifier (reference key) to any object in the assembly.
  6. Bind back to the object in the assembly given its reference key.
  7. Get other useful information from these objects like transformation matrix, definition document etc.

  This sample was originally written to test and validate the results returned by the Solid Edge server.
  So at several places you see the sample using some interface methods as a means to check the sanity of the
  the results obtained from some other methods. This is not someting a typical client would be interested
  in doing but it does illustrate the usage of these interfaces.

  This sample outputs the assembly tree as indented ascii text on the console window. It also
  outputs the count of surface bodies and faces in each part occurrence.


  IMPORTANT NOTES:

  1. This sample was developed and tested on Visual Studio 6.

  2. To successfully compile this sample you must add the path of the "include" sub-directory
     under your Solid Edge SDK directory as an additional include directory. To do this :
	 - Select the "Settings..." item under the "Project" menu.
	 - In the "Project Settings" dialog box select the C++ tab.
	 - Select "Preprocessor" item from the "Category" pull-down list.
	 - Key-in the Solid Edge include directory path in the "Additional include drectories:
	   text-box.
