VERSION 1.0 CLASS
BEGIN
  MultiUse = -1  'True
END
Attribute VB_Name = "CPoint"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = True
Attribute VB_PredeclaredId = False
Attribute VB_Exposed = False
Option Explicit


Public x As Double
Public y As Double
Public ID As Byte       'This is the ID form Solid Edge that designates the
                        'type of point ( endpoint, startpoint, centerpoint)


