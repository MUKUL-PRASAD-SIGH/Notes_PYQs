__________________________________
Requirements



__________________________________
Installation




__________________________________
Known Limitations



__________________________________
General Usage

ARelDoctor (Assembly Relationship Doctor) is a tool, written in Visual Basic, to help diagnose 
problems in assembly relationships.

To use this tool, just run it with the assembly document open in Solid Edge. When it finishes, 
the relationship(s) causing the problem will be suppressed, and the assembly should solve successfully.
The result of the diagnosis will be written into a text file in c:\temp. The file name will be the
same as the assembly, with the ".txt" extension. Inside the text file, the troubled relationship and 
its parts will be listed.

The diagnosis requires solving the assembly many times. For large assembly having many failed relationships,
the process may be very long. When it finishes, a message box will be displayed saying
"Diagnosis completed. See the text file in c:\temp for result.".

If there are suppressed relationships in the model before running this tool, after running it, they may be
unsuppressed. In this case, the originally suppressed constraints will be written into the text file in
separate section, so the user can check to make sure they are in the desired state.

Depending on the nature of the problem, a failed relationship may appear multiple times in the text file.
For performance purpose, this tool does not check for this kind of duplicate.

There should be more than one way to fix a model. This tool just randomly choose one solution. The user
can take this as a hint and decide how to fix the problem.

____________________________________
Command workflow



__________________________________
Legal Notices

