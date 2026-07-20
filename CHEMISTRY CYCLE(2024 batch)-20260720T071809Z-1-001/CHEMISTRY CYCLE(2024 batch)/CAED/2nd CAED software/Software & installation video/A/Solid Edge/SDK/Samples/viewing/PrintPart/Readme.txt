Program Name : PrintPart.vbp (PrintPart.exe)
Last Modified: September 23, 1999 - Created sample in VB 6

Description
---------------
This VB sample demonstrates how to use the Automation interface on the SmartView SEPartX control
to print the Solid Edge Part files and assembly files. The sample shows how to copy the contents of the part
file into the system clipboard as an enhanced metafile. Thereafter it uses standard VB API to read the
metafile into a picture object and then print the picture such that it fits the paper size while maintaining the
aspect ratio (so that a circle does not get transformed to an ellipse). The sample displays a form which
contain the SEPartX control and one command button. The command prints the currently opened part file or assembly
file in the control.

Before trying to use the print command, a SE part file needs be opened by the control. This can be done by
either:

1) clicking the "Open Part" toolbar button on the control and entering a valid filename in the dialog box displayed

OR

2) programatically assigning a valid filename string to the controls "PartFile" property  (see note in the
    Form_Load  procedure on how to do this)
