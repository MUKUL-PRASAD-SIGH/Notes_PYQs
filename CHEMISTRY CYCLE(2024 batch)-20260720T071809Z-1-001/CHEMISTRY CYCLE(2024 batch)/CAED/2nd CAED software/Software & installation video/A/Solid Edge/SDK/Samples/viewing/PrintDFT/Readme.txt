Program Name : PrintDFT.vbp (PrintDFT.exe)
Last Modified: April 23, 1999 - Created sample in VB 6

Description
---------------
This VB sample demonstrates how to use the Automation interface on the SmartView SEDraftX control
to print the drawing sheets in a Solid Edge Draft file (.DFT). The sample shows how to copy a drawing sheet's
contents into the system clipboard as an enhanced metafile. Thereafter it uses standard VB API to read the
metafile into a picture object and then print the picture such that it fits the paper size while maintaining the
aspect ratio (so that a circle does not get transformed to an ellipse). The sample displays a form which
containe the SEDraftX control and two commands buttons. The first command prints the drawing sheet that
is currently displayed on the control and the second command prints all the drawing sheets in the file. 

Before trying to use the print command, a SE draft file needs be opened by the control. This can be done by
either:

1) clicking the "Open Draft" toolbar button on the control and entering a valid filename in the dialog box displayed

OR

2) programatically assigning a valid filename string to the controls "DraftFile" property  (see note in the
    Form_Load  procedure on how to do this)
