VERSION 5.00
Object = "{C9A6C580-3817-11D0-BE4E-080036E87B02}#2.0#0"; "secctl.ocx"
Object = "{C9A6C583-3817-11D0-BE4E-080036E87B02}#2.0#0"; "semctl.ocx"
Begin VB.Form frmCopyDimStyle 
   ClientHeight    =   1110
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   1635
   LinkTopic       =   "Form1"
   ScaleHeight     =   1110
   ScaleWidth      =   1635
   StartUpPosition =   3  'Windows Default
   Visible         =   0   'False
   Begin SEMseLib.igMouse igMouse1 
      Left            =   180
      Top             =   120
      _Version        =   262144
      _ExtentX        =   741
      _ExtentY        =   741
      _StockProps     =   64
      LocateMode      =   2
   End
   Begin SeCmdLib.igCommand igCommand1 
      Left            =   660
      Top             =   120
      _Version        =   131072
      _ExtentX        =   741
      _ExtentY        =   741
      _StockProps     =   0
   End
End
Attribute VB_Name = "frmCopyDimStyle"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit

' Declaration for a type that contains the style information that's
' defined by DimStyle object.
Private Type udtDimStyle
    AboveGap As Double
    AngularDecimalRoundOff As DimDecimalRoundOffTypeConstants
    AngularDMSRoundOff As DimDMSRoundOffTypeConstants
    AngularFractionRoundOff As DimFractionRoundOffTypeConstants
    AngularRoundOffType As DimFractionRoundOffTypeConstants
    AngularUnits As DimAngularUnitConstants
    ApplyBreakLineGap As Boolean
    AutoCenterProjectionLine As Boolean
    Autophase As Boolean
    AutoSuppressDiameter As Boolean
    CenterLineType As String
    CenterMarkExtension As Double
    CenterMarkSize As Double
    ChamferUse45DegreeCharacter As Boolean
    CommonOrigin As DimCommonOriginTypeConstants
    CoordinateAutoJog As Boolean
    CoordinateStackPitch As Double
    CoordinateTextPosition As DimCoordTextPositionConstants
    DatumFrameDashes As Boolean
    DatumTerminatorType As DimDatumTermTypeConstants
    Delimiter As DimDelimiterTypeConstants
    DimensionScale As Double
    DimensionScaleMode As DimScaleModeConstants
    DrivenColor As Long
    DrivingColor As Long
    DualDisplay As Boolean
    DualModeVerticalGap As Double
    ErrorColor As Long
    Font As String
    FontStyle As DimTextFontStyleConstants
    FreeSpaceTerminatorType As DimTermTypeConstants
    Height As Double
    HoleCalloutCounterbore As String
    HoleCalloutCounterboreThreaded As String
    HoleCalloutCountersink As String
    HoleCalloutCountersinkThreaded As String
    HoleCalloutSimple As String
    HoleCalloutSimpleThreaded As String
    HorizontalBoxGap As Double
    HorizontalToleranceGap As Double
    LeaderLineLength As Double
    LimitTextArrangement As DimLimitTextArrangmentConstants
    LineConnect As Boolean
    LineSpacing As Double
    LineWidth As Double
    LowerCaseMultiplicationSymbol As Boolean
    MaximumSubunits As Long
    MaximumViewAngle As Double
    Name As String
    NTSSymbol As DimNTSTypeConstants
    OffsetLeaderType As DimOffsetLeaderTypeConstants
    OriginTerminatorType As DimTermTypeConstants
    PrefixSuffixGap As Double
    PrimaryDecimalRoundOff As DimDecimalRoundOffTypeConstants
    PrimaryFractionRoundOff As DimFractionRoundOffTypeConstants
    PrimaryLeadingZeros As Boolean
    PrimarySubunitsLabel As String
    PrimaryTrailingZeros As Boolean
    PrimaryUnitLabel As String
    PrimaryUnits As DimLinearUnitConstants
    ProjectionAngle As Double
    ProjectionExtensionGap As Double
    ProjectionLineDisplay As DimProjDisplayTypeConstants
    ProjectionOffsetGap As Double
    ProjectionOffsetGapAlignment As Boolean
    ProjectionToleranceZonePosition As DimProjTolZonePositionConstants
    Ratio As Double
    RoundOffType As DimRoundOffTypeConstants
    RoundUp As DimRoundUpTypeConstants
    SecondaryDecimalRoundOff As DimDecimalRoundOffTypeConstants
    SecondaryFractionRoundOff As DimFractionRoundOffTypeConstants
    SecondaryLeadingZeros As Boolean
    SecondaryLinearRoundOffType As DimRoundOffTypeConstants
    SecondarySubunitsLabel As String
    SecondaryToleranceEquivalent As Boolean
    SecondaryTrailingZeros As Boolean
    SecondaryUnitLabel As String
    SecondaryUnitRoundOff As DimRoundOffTypeConstants
    SecondaryUnits As DimLinearUnitConstants
    SmartDepthHoleFinite As String
    SmartDepthHoleThru As String
    SmartDepthThreadFinite As String
    SmartDepthThreadThru As String
    StackPitch As Double
    SymbolGap As Double
    SymbolPosition As DimSymbolPositionConstants
    TerminatorDisplay As DimTermDisplayTypeConstants
    TerminatorInsideLimit As Double
    TerminatorSize As Double
    TerminatorType As DimTermTypeConstants
    TextAutoFillBackground As Boolean
    TextClearanceGap As Double
    TextOrientation As DimTextOrientationConstants
    TextPosition As DimTextPositionConstants
    TextWeight As Double
    ToleranceHeightRatio As Double
    ToleranceWeight As Double
    VerticalBoxGap As Double
    VerticalLimitsGap As Double
    VerticalToleranceGap As Double
    ViewCuttingPlaneLineDisplay As DimViewCuttingPlaneDisplayTypeConstants
    ViewLineType As String
    ViewLineWidth As Double
    ViewPlaneLineDisplay As DimViewPlaneDisplayTypeConstants
    ViewTerminatorRatio As Double
    ViewTextRatio As Double
End Type

' Declaration for a type that contains the style information that's
' defined by properties directly on the dimension object.
Private Type udtDimParams
    DisplayType As DimDispTypeConstants
    OverrideString As String
    PrefixInside As Boolean
    PrefixString As String
    PrimaryLowerTolerance As String
    PrimaryToleranceSymbol As String
    PrimaryUpperTolerance As String
    SecondaryLowerTolerance As String
    SecondaryToleranceSymbol As String
    SecondaryUpperTolerance As String
    SubfixString As String
    SuffixString As String
    SuperfixString As String
    Style As udtDimStyle
End Type

' Declare variable to hold the style information of the selected dimension.
Private TempDimStyle As udtDimParams

' Declare variable used to specify the current state of the command;
' whether the user is selecting the first or the second dimension.
Private SelectingFirstDim As Boolean


Private Sub GetDimStyle(objFromDim As Object)
    ' Get all of the style information from the selected dimension and save in
    ' the global variable.  The variable is a user defined type.
    With objFromDim
        TempDimStyle.DisplayType = .DisplayType
        TempDimStyle.OverrideString = .OverrideString
        TempDimStyle.PrefixInside = .PrefixInside
        TempDimStyle.PrefixString = .PrefixString
        TempDimStyle.PrimaryLowerTolerance = .PrimaryLowerTolerance
        TempDimStyle.PrimaryToleranceSymbol = .PrimaryToleranceSymbol
        TempDimStyle.PrimaryUpperTolerance = .PrimaryUpperTolerance
        TempDimStyle.SecondaryLowerTolerance = .SecondaryLowerTolerance
        TempDimStyle.SecondaryToleranceSymbol = .SecondaryToleranceSymbol
        TempDimStyle.SecondaryUpperTolerance = .SecondaryUpperTolerance
        TempDimStyle.SubfixString = .SubfixString
        TempDimStyle.SuffixString = .SuffixString
        TempDimStyle.SuperfixString = .SuperfixString
        With .Style
            TempDimStyle.Style.AboveGap = .AboveGap
            TempDimStyle.Style.AngularDecimalRoundOff = .AngularDecimalRoundOff
            TempDimStyle.Style.AngularDMSRoundOff = .AngularDMSRoundOff
            TempDimStyle.Style.AngularFractionRoundOff = .AngularFractionRoundOff
            TempDimStyle.Style.AngularRoundOffType = .AngularRoundOffType           'Added 3/10/05 - jd
            TempDimStyle.Style.AngularUnits = .AngularUnits
            TempDimStyle.Style.ApplyBreakLineGap = .ApplyBreakLineGap               'Added 3/10/05 - jd
            TempDimStyle.Style.AutoCenterProjectionLine = .AutoCenterProjectionLine
            TempDimStyle.Style.Autophase = .Autophase
            TempDimStyle.Style.AutoSuppressDiameter = .AutoSuppressDiameter
            TempDimStyle.Style.CenterLineType = .CenterLineType
            TempDimStyle.Style.CenterMarkExtension = .CenterMarkExtension           'Added 3/10/05 - jd
            TempDimStyle.Style.CenterMarkSize = .CenterMarkSize
            TempDimStyle.Style.ChamferUse45DegreeCharacter = .ChamferUse45DegreeCharacter  'Added 3/10/05 - jd
            TempDimStyle.Style.CommonOrigin = .CommonOrigin
            TempDimStyle.Style.CoordinateAutoJog = .CoordinateAutoJog
            TempDimStyle.Style.CoordinateStackPitch = .CoordinateStackPitch
            TempDimStyle.Style.CoordinateTextPosition = .CoordinateTextPosition
            TempDimStyle.Style.DatumFrameDashes = .DatumFrameDashes
            TempDimStyle.Style.DatumTerminatorType = .DatumTerminatorType
            TempDimStyle.Style.Delimiter = .Delimiter
            TempDimStyle.Style.DimensionScale = .DimensionScale
            TempDimStyle.Style.DimensionScaleMode = .DimensionScaleMode
            TempDimStyle.Style.DrivenColor = .DrivenColor
            TempDimStyle.Style.DrivingColor = .DrivingColor
            TempDimStyle.Style.DualDisplay = .DualDisplay
            TempDimStyle.Style.DualModeVerticalGap = .DualModeVerticalGap
            TempDimStyle.Style.ErrorColor = .ErrorColor
            TempDimStyle.Style.Font = .Font
            TempDimStyle.Style.FontStyle = .FontStyle
            TempDimStyle.Style.FreeSpaceTerminatorType = .FreeSpaceTerminatorType
            TempDimStyle.Style.Height = .Height
            TempDimStyle.Style.HoleCalloutCounterbore = .HoleCalloutCounterbore                 'Added 3/10/05 - jd
            TempDimStyle.Style.HoleCalloutCounterboreThreaded = .HoleCalloutCounterboreThreaded 'Added 3/10/05 - jd
            TempDimStyle.Style.HoleCalloutCountersink = .HoleCalloutCountersink                 'Added 3/10/05 - jd
            TempDimStyle.Style.HoleCalloutCountersinkThreaded = .HoleCalloutCountersinkThreaded 'Added 3/10/05 - jd
            TempDimStyle.Style.HoleCalloutSimple = .HoleCalloutSimple                           'Added 3/10/05 - jd
            TempDimStyle.Style.HoleCalloutSimpleThreaded = .HoleCalloutSimpleThreaded           'Added 3/10/05 - jd
            TempDimStyle.Style.HorizontalBoxGap = .HorizontalBoxGap
            TempDimStyle.Style.HorizontalToleranceGap = .HorizontalToleranceGap
            TempDimStyle.Style.LeaderLineLength = .LeaderLineLength
            TempDimStyle.Style.LimitTextArrangement = .LimitTextArrangement
            TempDimStyle.Style.LineConnect = .LineConnect
            TempDimStyle.Style.LineSpacing = .LineSpacing
            TempDimStyle.Style.LineWidth = .LineWidth
            TempDimStyle.Style.LowerCaseMultiplicationSymbol = .LowerCaseMultiplicationSymbol   'Added 3/10/05 - jd
            TempDimStyle.Style.MaximumSubunits = .MaximumSubunits
            TempDimStyle.Style.MaximumViewAngle = .MaximumViewAngle
            TempDimStyle.Style.Name = .Name
            TempDimStyle.Style.NTSSymbol = .NTSSymbol
            TempDimStyle.Style.OffsetLeaderType = .OffsetLeaderType
            TempDimStyle.Style.OriginTerminatorType = .OriginTerminatorType
            TempDimStyle.Style.PrefixSuffixGap = .PrefixSuffixGap
            TempDimStyle.Style.PrimaryDecimalRoundOff = .PrimaryDecimalRoundOff
            TempDimStyle.Style.PrimaryFractionRoundOff = .PrimaryFractionRoundOff
            TempDimStyle.Style.PrimaryLeadingZeros = .PrimaryLeadingZeros
            TempDimStyle.Style.PrimarySubunitsLabel = .PrimarySubunitsLabel
            TempDimStyle.Style.PrimaryTrailingZeros = .PrimaryTrailingZeros
            TempDimStyle.Style.PrimaryUnitLabel = .PrimaryUnitLabel
            TempDimStyle.Style.PrimaryUnits = .PrimaryUnits
            TempDimStyle.Style.ProjectionAngle = .ProjectionAngle
            TempDimStyle.Style.ProjectionExtensionGap = .ProjectionExtensionGap
            TempDimStyle.Style.ProjectionLineDisplay = .ProjectionLineDisplay
            TempDimStyle.Style.ProjectionOffsetGap = .ProjectionOffsetGap
            TempDimStyle.Style.ProjectionOffsetGapAlignment = .ProjectionOffsetGapAlignment
            TempDimStyle.Style.ProjectionToleranceZonePosition = .ProjectionToleranceZonePosition
            TempDimStyle.Style.Ratio = .Ratio
            TempDimStyle.Style.RoundOffType = .RoundOffType
            TempDimStyle.Style.RoundUp = .RoundUp                                               'Added 3/10/05 - jd
            TempDimStyle.Style.SecondaryDecimalRoundOff = .SecondaryDecimalRoundOff
            TempDimStyle.Style.SecondaryFractionRoundOff = .SecondaryFractionRoundOff
            TempDimStyle.Style.SecondaryLeadingZeros = .SecondaryLeadingZeros
            TempDimStyle.Style.SecondaryLinearRoundOffType = .SecondaryLinearRoundOffType       'Added 3/10/05 - jd
            TempDimStyle.Style.SecondarySubunitsLabel = .SecondarySubunitsLabel
            TempDimStyle.Style.SecondaryToleranceEquivalent = .SecondaryToleranceEquivalent
            TempDimStyle.Style.SecondaryTrailingZeros = .SecondaryTrailingZeros
            TempDimStyle.Style.SecondaryUnitLabel = .SecondaryUnitLabel
            TempDimStyle.Style.SecondaryUnitRoundOff = .SecondaryUnitRoundOff
            TempDimStyle.Style.SecondaryUnits = .SecondaryUnits
            TempDimStyle.Style.SmartDepthHoleFinite = .SmartDepthHoleFinite                     'Added 3/10/05 - jd
            TempDimStyle.Style.SmartDepthHoleThru = .SmartDepthHoleThru                         'Added 3/10/05 - jd
            TempDimStyle.Style.SmartDepthThreadFinite = .SmartDepthThreadFinite                 'Added 3/10/05 - jd
            TempDimStyle.Style.SmartDepthThreadThru = .SmartDepthThreadThru                     'Added 3/10/05 - jd
            TempDimStyle.Style.StackPitch = .StackPitch
            TempDimStyle.Style.SymbolGap = .SymbolGap
            TempDimStyle.Style.SymbolPosition = .SymbolPosition
            TempDimStyle.Style.TerminatorDisplay = .TerminatorDisplay
            TempDimStyle.Style.TerminatorInsideLimit = .TerminatorInsideLimit
            TempDimStyle.Style.TerminatorSize = .TerminatorSize
            TempDimStyle.Style.TerminatorType = .TerminatorType
            TempDimStyle.Style.TextAutoFillBackground = .TextAutoFillBackground                 'Added 3/10/05 - jd
            TempDimStyle.Style.TextClearanceGap = .TextClearanceGap
            TempDimStyle.Style.TextOrientation = .TextOrientation
            TempDimStyle.Style.TextPosition = .TextPosition
            TempDimStyle.Style.TextWeight = .TextWeight
            TempDimStyle.Style.ToleranceHeightRatio = .ToleranceHeightRatio
            TempDimStyle.Style.ToleranceWeight = .ToleranceWeight
            TempDimStyle.Style.VerticalBoxGap = .VerticalBoxGap
            TempDimStyle.Style.VerticalLimitsGap = .VerticalLimitsGap
            TempDimStyle.Style.VerticalToleranceGap = .VerticalToleranceGap
            TempDimStyle.Style.ViewCuttingPlaneLineDisplay = .ViewCuttingPlaneLineDisplay
            TempDimStyle.Style.ViewLineType = .ViewLineType
            TempDimStyle.Style.ViewLineWidth = .ViewLineWidth
            TempDimStyle.Style.ViewPlaneLineDisplay = .ViewPlaneLineDisplay
            TempDimStyle.Style.ViewTerminatorRatio = .ViewTerminatorRatio
            TempDimStyle.Style.ViewTextRatio = .ViewTextRatio
        End With
    End With
End Sub

Private Sub SetDimStyle(objToDim As Object)
    ' Turn off screen updating so each change isn't shown to the user.
    Me.igCommand1.Application.ScreenUpdating = False
    
    ' Set the style properties of the dimension to the previous values
    ' saved from the previously selected dimension.
    With objToDim
        If .DisplayType <> TempDimStyle.DisplayType Then
            .DisplayType = TempDimStyle.DisplayType
        End If
        
        ' Don't copy the override.  Usually you won't want to copy
        ' the override text, just the style information.
'        If .OverrideString <> TempDimStyle.OverrideString Then
'            If TempDimStyle.OverrideString = "" Then
'                .OverrideString = ""
'            Else
'                .OverrideString = TempDimStyle.OverrideString
'            End If
'        End If
        
        If .PrefixInside <> TempDimStyle.PrefixInside Then
            .PrefixInside = TempDimStyle.PrefixInside
        End If
        
        If .PrefixString <> TempDimStyle.PrefixString Then
            ' Special case for an empty string.  If I don't explicitly
            ' set to an empty string it's interpreted as no change.
            If TempDimStyle.PrefixString = "" Then
                .PrefixString = ""
            Else
                .PrefixString = TempDimStyle.PrefixString
            End If
        End If
        
        If .PrimaryLowerTolerance <> TempDimStyle.PrimaryLowerTolerance Then
            .PrimaryLowerTolerance = TempDimStyle.PrimaryLowerTolerance
        End If
        
        If .PrimaryToleranceSymbol <> TempDimStyle.PrimaryToleranceSymbol Then
            .PrimaryToleranceSymbol = TempDimStyle.PrimaryToleranceSymbol
        End If
        
        If .PrimaryUpperTolerance <> TempDimStyle.PrimaryUpperTolerance Then
            .PrimaryUpperTolerance = TempDimStyle.PrimaryUpperTolerance
        End If
        
        If .SecondaryLowerTolerance <> TempDimStyle.SecondaryLowerTolerance Then
            .SecondaryLowerTolerance = TempDimStyle.SecondaryLowerTolerance
        End If
        
        If .SecondaryToleranceSymbol <> TempDimStyle.SecondaryToleranceSymbol Then
            .SecondaryToleranceSymbol = TempDimStyle.SecondaryToleranceSymbol
        End If
        
        If .SecondaryUpperTolerance <> TempDimStyle.SecondaryUpperTolerance Then
            .SecondaryUpperTolerance = TempDimStyle.SecondaryUpperTolerance
        End If
        
        If .SubfixString <> TempDimStyle.SubfixString Then
            ' Special case for an empty string.  If I don't explicitly
            ' set to an empty string it's interpreted as no change.
            If TempDimStyle.SubfixString = "" Then
                .SubfixString = ""
            Else
                .SubfixString = TempDimStyle.SubfixString
            End If
        End If
        
        If .SuffixString <> TempDimStyle.SuffixString Then
            ' Special case for an empty string.  If I don't explicitly
            ' set to an empty string it's interpreted as no change.
            If TempDimStyle.SuffixString = "" Then
                .SuffixString = ""
            Else
                .SuffixString = TempDimStyle.SuffixString
            End If
        End If
        
        If .SuperfixString <> TempDimStyle.SuperfixString Then
            ' Special case for an empty string.  If I don't explicitly
            ' set to an empty string it's interpreted as no change.
            If TempDimStyle.SuperfixString = "" Then
                .SuperfixString = ""
            Else
                .SuperfixString = TempDimStyle.SuperfixString
            End If
        End If
        
        With .Style
            
            'Set NAME first to reassign whole style, then check for specific overrides after (3/11/05 - jd)
            If .Name <> TempDimStyle.Style.Name Then
                .Name = TempDimStyle.Style.Name
            End If
            
            
            'Now check for specific overrides (3/11/05 - jd)
            If .AboveGap <> TempDimStyle.Style.AboveGap Then
                .AboveGap = TempDimStyle.Style.AboveGap
            End If
            
            If .AngularDecimalRoundOff <> TempDimStyle.Style.AngularDecimalRoundOff Then
                .AngularDecimalRoundOff = TempDimStyle.Style.AngularDecimalRoundOff
            End If
                
            If .AngularDecimalRoundOff <> TempDimStyle.Style.AngularDMSRoundOff Then
                .AngularDecimalRoundOff = TempDimStyle.Style.AngularDMSRoundOff
            End If

            If .AngularDMSRoundOff <> TempDimStyle.Style.AngularFractionRoundOff Then
                .AngularDMSRoundOff = TempDimStyle.Style.AngularFractionRoundOff
            End If
            
            If .AngularFractionRoundOff <> TempDimStyle.Style.AngularUnits Then
                .AngularFractionRoundOff = TempDimStyle.Style.AngularUnits
            End If
    
            If .AngularRoundOffType <> TempDimStyle.Style.AngularRoundOffType Then  'Added 3/10/05 - jd
                .AngularRoundOffType = TempDimStyle.Style.AngularRoundOffType
            End If
    
            If .AngularUnits <> TempDimStyle.Style.AngularUnits Then                'Added 3/10/05 - jd
                .AngularUnits = TempDimStyle.Style.AngularUnits
            End If
            
            If .ApplyBreakLineGap <> TempDimStyle.Style.ApplyBreakLineGap Then      'Added 3/10/05 - jd
                .ApplyBreakLineGap = TempDimStyle.Style.ApplyBreakLineGap
            End If
            
            If .AutoCenterProjectionLine <> TempDimStyle.Style.AutoCenterProjectionLine Then
                .AutoCenterProjectionLine = TempDimStyle.Style.AutoCenterProjectionLine
            End If
            
            If .Autophase <> TempDimStyle.Style.Autophase Then
                .Autophase = TempDimStyle.Style.Autophase
            End If
            
            If .AutoSuppressDiameter <> TempDimStyle.Style.AutoSuppressDiameter Then
                .AutoSuppressDiameter = TempDimStyle.Style.AutoSuppressDiameter
            End If
            
            If .CenterLineType <> TempDimStyle.Style.CenterLineType Then
                .CenterLineType = TempDimStyle.Style.CenterLineType
            End If
            
            If .CenterMarkExtension <> TempDimStyle.Style.CenterMarkExtension Then  'Added 3/10/05 - jd
                .CenterMarkExtension = TempDimStyle.Style.CenterMarkExtension
            End If
            
            If .ChamferUse45DegreeCharacter <> TempDimStyle.Style.ChamferUse45DegreeCharacter Then  'Added 3/10/05 - jd
                .ChamferUse45DegreeCharacter = TempDimStyle.Style.ChamferUse45DegreeCharacter
            End If
            
            If .CenterMarkSize <> TempDimStyle.Style.CenterMarkSize Then
                .CenterMarkSize = TempDimStyle.Style.CenterMarkSize
            End If
            
            If .CommonOrigin <> TempDimStyle.Style.CommonOrigin Then
                .CommonOrigin = TempDimStyle.Style.CommonOrigin
            End If
            
            If .CoordinateAutoJog <> TempDimStyle.Style.CoordinateAutoJog Then
                .CoordinateAutoJog = TempDimStyle.Style.CoordinateAutoJog
            End If
            
            If .CoordinateStackPitch <> TempDimStyle.Style.CoordinateStackPitch Then
                .CoordinateStackPitch = TempDimStyle.Style.CoordinateStackPitch
            End If
            
            If .CoordinateTextPosition <> TempDimStyle.Style.CoordinateTextPosition Then
                .CoordinateTextPosition = TempDimStyle.Style.CoordinateTextPosition
            End If
            
            If .DatumFrameDashes <> TempDimStyle.Style.DatumFrameDashes Then
                .DatumFrameDashes = TempDimStyle.Style.DatumFrameDashes
            End If
            
            If .DatumTerminatorType <> TempDimStyle.Style.DatumTerminatorType Then
                .DatumTerminatorType = TempDimStyle.Style.DatumTerminatorType
            End If
            
            If .Delimiter <> TempDimStyle.Style.Delimiter Then
                .Delimiter = TempDimStyle.Style.Delimiter
            End If
            
            If .DimensionScale <> TempDimStyle.Style.DimensionScale Then
                .DimensionScale = TempDimStyle.Style.DimensionScale
            End If
            
            If .DimensionScaleMode <> TempDimStyle.Style.DimensionScaleMode Then
                .DimensionScaleMode = TempDimStyle.Style.DimensionScaleMode
            End If
            
            If .DrivenColor <> TempDimStyle.Style.DrivenColor Then
                .DrivenColor = TempDimStyle.Style.DrivenColor
            End If
            
            If .DrivingColor <> TempDimStyle.Style.DrivingColor Then
                .DrivingColor = TempDimStyle.Style.DrivingColor
            End If
            
            If .DualDisplay <> TempDimStyle.Style.DualDisplay Then
                .DualDisplay = TempDimStyle.Style.DualDisplay
            End If
            
            If .DualModeVerticalGap <> TempDimStyle.Style.DualModeVerticalGap Then
                .DualModeVerticalGap = TempDimStyle.Style.DualModeVerticalGap
            End If
            
            If .ErrorColor <> TempDimStyle.Style.ErrorColor Then
                .ErrorColor = TempDimStyle.Style.ErrorColor
            End If
            
            If .Font <> TempDimStyle.Style.Font Then
                .Font = TempDimStyle.Style.Font
            End If
            
            If .FontStyle <> TempDimStyle.Style.FontStyle Then
                .FontStyle = TempDimStyle.Style.FontStyle
            End If
            
            If .FreeSpaceTerminatorType <> TempDimStyle.Style.FreeSpaceTerminatorType Then
                .FreeSpaceTerminatorType = TempDimStyle.Style.FreeSpaceTerminatorType
            End If
            
            If .Height <> TempDimStyle.Style.Height Then
                .Height = TempDimStyle.Style.Height
            End If
            
            If .HoleCalloutCounterbore <> TempDimStyle.Style.HoleCalloutCounterbore Then        'Added 3/10/05 - jd
                .HoleCalloutCounterbore = TempDimStyle.Style.HoleCalloutCounterbore
            End If
            
            If .HoleCalloutCounterboreThreaded <> TempDimStyle.Style.HoleCalloutCounterboreThreaded Then  'Added 3/10/05 - jd
                .HoleCalloutCounterboreThreaded = TempDimStyle.Style.HoleCalloutCounterboreThreaded
            End If
            
            If .HoleCalloutCountersink <> TempDimStyle.Style.HoleCalloutCountersink Then        'Added 3/10/05 - jd
                .HoleCalloutCountersink = TempDimStyle.Style.HoleCalloutCountersink
            End If
            
            If .HoleCalloutCountersinkThreaded <> TempDimStyle.Style.HoleCalloutCountersinkThreaded Then  'Added 3/10/05 - jd
                .HoleCalloutCountersinkThreaded = TempDimStyle.Style.HoleCalloutCountersinkThreaded
            End If
            
            If .HoleCalloutSimple <> TempDimStyle.Style.HoleCalloutSimple Then                  'Added 3/10/05 - jd
                .HoleCalloutSimple = TempDimStyle.Style.HoleCalloutSimple
            End If
            
            If .HoleCalloutSimpleThreaded <> TempDimStyle.Style.HoleCalloutSimpleThreaded Then  'Added 3/10/05 - jd
                .HoleCalloutSimpleThreaded = TempDimStyle.Style.HoleCalloutSimpleThreaded
            End If
            
            If .HorizontalBoxGap <> TempDimStyle.Style.HorizontalBoxGap Then
                .HorizontalBoxGap = TempDimStyle.Style.HorizontalBoxGap
            End If
            
            If .HorizontalToleranceGap <> TempDimStyle.Style.HorizontalToleranceGap Then
                .HorizontalToleranceGap = TempDimStyle.Style.HorizontalToleranceGap
            End If
            
            If .LeaderLineLength <> TempDimStyle.Style.LeaderLineLength Then
                .LeaderLineLength = TempDimStyle.Style.LeaderLineLength
            End If
            
            If .LimitTextArrangement <> TempDimStyle.Style.LimitTextArrangement Then
                .LimitTextArrangement = TempDimStyle.Style.LimitTextArrangement
            End If
            
            If .LineConnect <> TempDimStyle.Style.LineConnect Then
                .LineConnect = TempDimStyle.Style.LineConnect
            End If
            
            If .LineSpacing <> TempDimStyle.Style.LineSpacing Then
                .LineSpacing = TempDimStyle.Style.LineSpacing
            End If
            
            If .LineWidth <> TempDimStyle.Style.LineWidth Then
                .LineWidth = TempDimStyle.Style.LineWidth
            End If
            
            If .LowerCaseMultiplicationSymbol <> TempDimStyle.Style.LowerCaseMultiplicationSymbol Then  'Added 3/10/05 - jd
                .LowerCaseMultiplicationSymbol = TempDimStyle.Style.LowerCaseMultiplicationSymbol
            End If
            
            If .MaximumSubunits <> TempDimStyle.Style.MaximumSubunits Then
                .MaximumSubunits = TempDimStyle.Style.MaximumSubunits
            End If
            
            If .MaximumViewAngle <> TempDimStyle.Style.MaximumViewAngle Then
                .MaximumViewAngle = TempDimStyle.Style.MaximumViewAngle
            End If
            
            If .NTSSymbol <> TempDimStyle.Style.NTSSymbol Then
                .NTSSymbol = TempDimStyle.Style.NTSSymbol
            End If
            
            If .OffsetLeaderType <> TempDimStyle.Style.OffsetLeaderType Then
                .OffsetLeaderType = TempDimStyle.Style.OffsetLeaderType
            End If
            
            If .OriginTerminatorType <> TempDimStyle.Style.OriginTerminatorType Then
                 .OriginTerminatorType = TempDimStyle.Style.OriginTerminatorType
            End If
            
            If .PrefixSuffixGap <> TempDimStyle.Style.PrefixSuffixGap Then
                 .PrefixSuffixGap = TempDimStyle.Style.PrefixSuffixGap
            End If
            
            If .PrimaryDecimalRoundOff <> TempDimStyle.Style.PrimaryDecimalRoundOff Then
               .PrimaryDecimalRoundOff = TempDimStyle.Style.PrimaryDecimalRoundOff
            End If
            
            If .PrimaryFractionRoundOff <> TempDimStyle.Style.PrimaryFractionRoundOff Then
                .PrimaryFractionRoundOff = TempDimStyle.Style.PrimaryFractionRoundOff
            End If
            
            If .PrimaryLeadingZeros <> TempDimStyle.Style.PrimaryLeadingZeros Then
                .PrimaryLeadingZeros = TempDimStyle.Style.PrimaryLeadingZeros
            End If
    
            ' There's a bug setting this property.
'            .PrimarySubunitsLabel = TempDimStyle.Style.PrimarySubunitsLabel   Error
            
            If .PrimaryTrailingZeros <> TempDimStyle.Style.PrimaryTrailingZeros Then
                .PrimaryTrailingZeros = TempDimStyle.Style.PrimaryTrailingZeros
            End If

            ' There's a bug setting this property.
'            .PrimaryUnitLabel = TempDimStyle.Style.PrimaryUnitLabel   Error
            
            If .PrimaryUnits <> TempDimStyle.Style.PrimaryUnits Then
                .PrimaryUnits = TempDimStyle.Style.PrimaryUnits
            End If
            
            If .ProjectionAngle <> TempDimStyle.Style.ProjectionAngle Then
                .ProjectionAngle = TempDimStyle.Style.ProjectionAngle
            End If
            
            If .ProjectionExtensionGap <> TempDimStyle.Style.ProjectionExtensionGap Then
                .ProjectionExtensionGap = TempDimStyle.Style.ProjectionExtensionGap
            End If
            
            If .ProjectionLineDisplay <> TempDimStyle.Style.ProjectionLineDisplay Then
                .ProjectionLineDisplay = TempDimStyle.Style.ProjectionLineDisplay
            End If
            
            If .ProjectionOffsetGap <> TempDimStyle.Style.ProjectionOffsetGap Then
                .ProjectionOffsetGap = TempDimStyle.Style.ProjectionOffsetGap
            End If
            
            If .ProjectionOffsetGapAlignment <> TempDimStyle.Style.ProjectionOffsetGapAlignment Then
                .ProjectionOffsetGapAlignment = TempDimStyle.Style.ProjectionOffsetGapAlignment
            End If
            
            If .ProjectionToleranceZonePosition <> TempDimStyle.Style.ProjectionToleranceZonePosition Then
                .ProjectionToleranceZonePosition = TempDimStyle.Style.ProjectionToleranceZonePosition
            End If
            
            If .Ratio <> TempDimStyle.Style.Ratio Then
                .Ratio = TempDimStyle.Style.Ratio
            End If
            
            If .RoundOffType <> TempDimStyle.Style.RoundOffType Then
                .RoundOffType = TempDimStyle.Style.RoundOffType
            End If
            
            If .RoundUp <> TempDimStyle.Style.RoundUp Then                                      'Added 3/10/05 - jd
                .RoundUp = TempDimStyle.Style.RoundUp
            End If
            
            If .SecondaryDecimalRoundOff <> TempDimStyle.Style.SecondaryDecimalRoundOff Then
                .SecondaryDecimalRoundOff = TempDimStyle.Style.SecondaryDecimalRoundOff
            End If
            
            If .SecondaryFractionRoundOff <> TempDimStyle.Style.SecondaryFractionRoundOff Then
                .SecondaryFractionRoundOff = TempDimStyle.Style.SecondaryFractionRoundOff
            End If
            
            If .SecondaryLeadingZeros <> TempDimStyle.Style.SecondaryLeadingZeros Then
                .SecondaryLeadingZeros = TempDimStyle.Style.SecondaryLeadingZeros
            End If
    
            ' There's a bug setting this property.
'            .SecondarySubunitsLabel = TempDimStyle.Style.SecondarySubunitsLabel   Error
            
            If .SecondaryToleranceEquivalent <> TempDimStyle.Style.SecondaryToleranceEquivalent Then
                .SecondaryToleranceEquivalent = TempDimStyle.Style.SecondaryToleranceEquivalent
            End If
            
            If .SecondaryTrailingZeros <> TempDimStyle.Style.SecondaryTrailingZeros Then
                .SecondaryTrailingZeros = TempDimStyle.Style.SecondaryTrailingZeros
            End If
    
            ' There's a bug setting this property.
'            .SecondaryUnitLabel = TempDimStyle.Style.SecondaryUnitLabel
            
            If .SecondaryUnitRoundOff <> TempDimStyle.Style.SecondaryUnitRoundOff Then
                .SecondaryUnitRoundOff = TempDimStyle.Style.SecondaryUnitRoundOff
            End If
            
            If .SecondaryUnits <> TempDimStyle.Style.SecondaryUnits Then
                .SecondaryUnits = TempDimStyle.Style.SecondaryUnits
            End If
            
            If .SmartDepthHoleFinite <> TempDimStyle.Style.SmartDepthHoleFinite Then            'Added 3/10/05 - jd
                .SmartDepthHoleFinite = TempDimStyle.Style.SmartDepthHoleFinite
            End If
            
            If .SmartDepthHoleThru <> TempDimStyle.Style.SmartDepthHoleThru Then                'Added 3/10/05 - jd
                .SmartDepthHoleThru = TempDimStyle.Style.SmartDepthHoleThru
            End If
            
            If .SmartDepthThreadFinite <> TempDimStyle.Style.SmartDepthThreadFinite Then        'Added 3/10/05 - jd
                .SmartDepthThreadFinite = TempDimStyle.Style.SmartDepthThreadFinite
            End If
            
            If .SmartDepthThreadThru <> TempDimStyle.Style.SmartDepthThreadThru Then            'Added 3/10/05 - jd
                .SmartDepthThreadThru = TempDimStyle.Style.SmartDepthThreadThru
            End If
            
            If .StackPitch <> TempDimStyle.Style.StackPitch Then
                .StackPitch = TempDimStyle.Style.StackPitch
            End If
            
            If .SymbolGap <> TempDimStyle.Style.SymbolGap Then
                .SymbolGap = TempDimStyle.Style.SymbolGap
            End If
            
            If .SymbolPosition <> TempDimStyle.Style.SymbolPosition Then
                .SymbolPosition = TempDimStyle.Style.SymbolPosition
            End If
            
            If .TerminatorDisplay <> TempDimStyle.Style.TerminatorDisplay Then
                .TerminatorDisplay = TempDimStyle.Style.TerminatorDisplay
            End If
            
            If .TerminatorInsideLimit <> TempDimStyle.Style.TerminatorInsideLimit Then
                .TerminatorInsideLimit = TempDimStyle.Style.TerminatorInsideLimit
            End If
            
            If .TerminatorSize <> TempDimStyle.Style.TerminatorSize Then
                .TerminatorSize = TempDimStyle.Style.TerminatorSize
            End If
            
            If .TerminatorType <> TempDimStyle.Style.TerminatorType Then
                .TerminatorType = TempDimStyle.Style.TerminatorType
            End If
            
            If .TextAutoFillBackground <> TempDimStyle.Style.TextAutoFillBackground Then        'Added 3/10/05 - jd
                .TextAutoFillBackground = TempDimStyle.Style.TextAutoFillBackground
            End If
            
            If .TextClearanceGap <> TempDimStyle.Style.TextClearanceGap Then
                .TextClearanceGap = TempDimStyle.Style.TextClearanceGap
            End If
            
            If .TextOrientation <> TempDimStyle.Style.TextOrientation Then
                .TextOrientation = TempDimStyle.Style.TextOrientation
            End If
            
            If .TextPosition <> TempDimStyle.Style.TextPosition Then
                .TextPosition = TempDimStyle.Style.TextPosition
            End If
            
            If .TextWeight <> TempDimStyle.Style.TextWeight Then
                .TextWeight = TempDimStyle.Style.TextWeight
            End If
            
            If .ToleranceHeightRatio <> TempDimStyle.Style.ToleranceHeightRatio Then
                .ToleranceHeightRatio = TempDimStyle.Style.ToleranceHeightRatio
            End If
            
            If .ToleranceWeight <> TempDimStyle.Style.ToleranceWeight Then
                .ToleranceWeight = TempDimStyle.Style.ToleranceWeight
            End If
            
            If .VerticalBoxGap <> TempDimStyle.Style.VerticalBoxGap Then
                .VerticalBoxGap = TempDimStyle.Style.VerticalBoxGap
            End If
            
            If .VerticalLimitsGap <> TempDimStyle.Style.VerticalLimitsGap Then
                .VerticalLimitsGap = TempDimStyle.Style.VerticalLimitsGap
            End If
            
            If .VerticalToleranceGap <> TempDimStyle.Style.VerticalToleranceGap Then
                .VerticalToleranceGap = TempDimStyle.Style.VerticalToleranceGap
            End If
            
            If .ViewCuttingPlaneLineDisplay <> TempDimStyle.Style.ViewCuttingPlaneLineDisplay Then
                .ViewCuttingPlaneLineDisplay = TempDimStyle.Style.ViewCuttingPlaneLineDisplay
            End If
            
            If .ViewLineType <> TempDimStyle.Style.ViewLineType Then
                .ViewLineType = TempDimStyle.Style.ViewLineType
            End If
            
            If .ViewLineWidth <> TempDimStyle.Style.ViewLineWidth Then
                .ViewLineWidth = TempDimStyle.Style.ViewLineWidth
            End If
            
            If .ViewPlaneLineDisplay <> TempDimStyle.Style.ViewPlaneLineDisplay Then
                .ViewPlaneLineDisplay = TempDimStyle.Style.ViewPlaneLineDisplay
            End If
            
            If .ViewTerminatorRatio <> TempDimStyle.Style.ViewTerminatorRatio Then
                .ViewTerminatorRatio = TempDimStyle.Style.ViewTerminatorRatio
            End If
            
            If .ViewTextRatio <> TempDimStyle.Style.ViewTextRatio Then
                .ViewTextRatio = TempDimStyle.Style.ViewTextRatio
            End If
            
            ' Turn on screen updating.
            ' This is wrapped with the On Error because of a bug.  Even though
            ' the ScreenUpdating property returns an error, it still works so
            ' the error can be ignored.
            On Error Resume Next
                Me.igCommand1.Application.ScreenUpdating = True
                Err.Clear
            On Error GoTo 0
            
            ' Change a parameter on the dimension to force it to redisplay.  Because
            ' the screen updating was turned off, the old state of the dimension is
            ' still being displayed.  This will cause the new state to display.
            .TextAutoFillBackground = Not .TextAutoFillBackground
            .TextAutoFillBackground = Not .TextAutoFillBackground
            
        End With
    End With
End Sub

Private Sub Form_Load()
    ' Set the initial state to select the first dimension.
    SelectingFirstDim = True
End Sub

Private Sub igCommand1_Terminate()

    frmCopyDimStyle.igCommand1.Application.StatusBar = ""

End Sub


Private Sub igMouse1_MouseClick(ByVal Button As Integer, ByVal Shift As Integer, ByVal x As Double, ByVal y As Double, ByVal z As Double, ByVal Window As Object, ByVal KeyPointType As Long, ByVal Graphic As Object)
    ' Check to see if a dimension was located.  Since the filter was set to
    ' dimensions they'll be the only type of graphic being located.
    If Not Graphic Is Nothing Then
        ' Do the proper thing depending on whether the first or second dimension was selected.
        If SelectingFirstDim Then
            ' Save the style information from the selected dimension.
            Call GetDimStyle(Graphic)
            
            ' Set the state to select the second dimension.
            SelectingFirstDim = False
            
            ' Change the prompt in the status bar.
            Me.igCommand1.Application.StatusBar = "Click on the dimension to copy the style to."
        Else
            ' Set the style information for the selected dimension.
            Call SetDimStyle(Graphic)
            
            ' Set the state to select the first dimension.
            SelectingFirstDim = True
            
            ' Change the prompt in the status bar.
            Me.igCommand1.Application.StatusBar = "Click on the dimension to copy the style from."
        End If
    End If
End Sub

