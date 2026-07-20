Overview
__________________________________________________

The sheet metal files delivered are intended to be use to help users model sheet metal transitions when a transition between round to round, square to round, or square to square is needed. These models are fully parametric and critical dimensions are available for quick easy edits to obtain the correct size.

These files can be flattened and have a flat pattern already included. The bends for the round to round, and the square to round have been divided into multiple bends so the part can be manufactured on a typical straight press brake. The number of bend divisions can easily be modified to suite the manufacturing requirements.


Included Files
__________________________________________________

SE_Transition_RR.psm: round to round transition
SE_Transition_SR.psm: square to round transition
SE_Transition_SS.psm: square to square transition

How to Use The Files
__________________________________________________

WARNING: Copy the desired transition type to an appropriate location. Do not use the files directly, as they will get deleted upon an uninstall of Solid Edge.

After the copy, open the appropriate file and edit the dimensions to the size required. The dimensions can be seen from the Variable Table  
(See Tools | Variables), or by editing the Sketch feature dimensions. Select one or more of the Sketch features from EdgeBar and choose Dynamic Edit from the Ribbon Toolbar. The dimensions of the selected features will become visible and be ready for edit. To modify the number of bend divisions, select the Transition feature (Lofted Flange feature) and select Edit Definition from the Ribbon Toolbar. Select the options button and modify the settings on the Divide Bend tab.

The flat pattern will automatically update upon Save of the model, or the flat pattern can be updated by right click on the Flat Pattern node in the Pathfinder and choose Update. If the flat pattern size exceeds the specified flat blank size, an icon will appear next to the Flat Pattern node. The default flat blank size can be adjusted from inside the Flat pattern Feature, or by selecting Tools | Options, Flat Pattern Treatments.
