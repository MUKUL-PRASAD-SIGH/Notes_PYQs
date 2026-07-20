<!--
var lock_state = 1;
lock_up = new Image();
lock_down = new Image();
lock_up.src = '../icons/lock.gif';
lock_down.src = '../icons/lock-d.gif';

mouse = new Array;
mouse[0] = new Image(); // normal
mouse[1] = new Image(); // left button
mouse[2] = new Image(); // right button
mouse[3] = new Image(); // both buttons
mouse[0].src = '../icons/mouse_n.gif';
mouse[1].src = '../icons/mouse_l.gif';
mouse[2].src = '../icons/mouse_r.gif';
mouse[3].src = '../icons/mouse_b.gif';

up = new Image();
down = new Image();
up.src = '../icons/autohide.gif';
down.src = '../icons/autohide-d.gif';
var autohide_state = 0;

showonly_up = new Image();
showonly_down = new Image();
showonly_up.src = '../icons/showonly.gif';
showonly_down.src = '../icons/showonly-d.gif';
var showonly_state = 0;

shadow_up = new Image();
shadow_down = new Image();
shadow_up.src = '../icons/shadow.gif';
shadow_down.src = '../icons/shadow-d.gif';

cs_up = new Image();
cs_down = new Image();
cs_up.src = '../icons/cs.gif';
cs_down.src = '../icons/cs-d.gif';

mcs_up = new Image();
mcs_down = new Image();
mcs_up.src = '../icons/mcs.gif';
mcs_down.src = '../icons/mcs-d.gif';

function initialize_states()
{
	autohide_state = 0;
	showonly_state = 0;
}

if ( typeof(parent.top_level) != "undefined" && typeof( top_level) == "undefined" ) {
	top_level = parent.top_level;
}

function CheckWebView( show_alert )
{
	var installed;
	if ( top_level && typeof(top_level.IPAControl) != 'undefined' && typeof(top_level.IPAControl.Fixed) != 'undefined' ) {
		installed = 1;
	}
	else {
		if ( !show_alert ) alert("Please wait until IPA WebView has finished being installed.")
		installed = 0;
	}
	return installed
}

// IPAControl functions with CheckWebView wrappers

function Show() { if ( CheckWebView() ) { top_level.IPAControl.Show() } }
function Hide() { if ( CheckWebView() ) { top_level.IPAControl.Hide() } }
function ShowAll() { if ( CheckWebView() ) { top_level.IPAControl.ShowAll() } }
function ZoomAll() { if ( CheckWebView() ) { top_level.IPAControl.ZoomAll() } }
function ZoomArea() { if ( CheckWebView() ) { top_level.IPAControl.ZoomArea() } }
function ZoomObject() { if ( CheckWebView() ) { top_level.IPAControl.ZoomObject() } }
function Shadow() { 
	if ( CheckWebView() ) { 
		var shadow_state = !top_level.IPAControl.Shadow
		top_level.IPAControl.Shadow = shadow_state;
		document['shadow_icon'].src=shadow_state ? shadow_down.src : shadow_up.src;
	}
}
function CrossSection() { 
	if ( CheckWebView() ) { 
		var cs_state = !top_level.IPAControl.CrossSectionActive 
		top_level.IPAControl.CrossSectionActive = cs_state
		document['cs'].src=cs_state ? cs_down.src : cs_up.src;
		if ( !cs_state ) {
			DeselectAll(); 
			top_level.IPAControl.Fixed = 1
			document['mcs'].src = mcs_up.src;
			if ( typeof( top_level.instr ) != "undefined" ) {
				top_level.instr.location = "toc.html"
			}
		}
	} 
}
function MoveCrossSection() { 
	if ( CheckWebView() ) { 
		var cross_section_state = top_level.IPAControl.CrossSectionActive && !top_level.IPAControl.Fixed
		if ( cross_section_state ) {
			DeselectAll(); 
			top_level.IPAControl.Fixed = 1
			document['mcs'].src = mcs_up.src;
		} else {
			DeselectAll();
			top_level.IPAControl.CrossSectionActive = 1
			document['cs'].src=cs_state = cs_down.src
			top_level.IPAControl.SelectCrossSection() 
			top_level.IPAControl.Fixed = 0
			document['mcs'].src = mcs_down.src;
		}
		if ( typeof( top_level.instr ) != "undefined" ) {
			top_level.instr.location = cross_section_state ? "toc.html" : "section.html";
		}
	}
}

function ResetObject() { if ( CheckWebView() ) { top_level.IPAControl.SetBookMark("_initial") } }

function SetBGColor( color ) { if ( CheckWebView() ) { top_level.IPAControl.SetBGColor( color ) } }
function SetTextColor( color ) { if ( CheckWebView() ) { top_level.IPAControl.SetTextColor( color ) } }
function SetColor( color ) { if ( CheckWebView() ) { top_level.IPAControl.SetColor( color ) } }
function SetTransparency( level ) { if ( CheckWebView() ) { top_level.IPAControl.SetTransparency( level ) } }
function SetPrintDoc( flag ) { if ( CheckWebView() ) { top_level.IPAControl.SetPrintDoc(flag) } }
function SetViewByName( name ) { if ( CheckWebView() ) { top_level.IPAControl.SetViewByName( name ) } }

function move( x, y, z ) { 
	if ( check_webview() ) { 
		top_level.IPAControl.Move( x, y, z );
	} 
}

function rotate( x, y, z ) { 
	if ( check_webview() ) { 
		top_level.IPAControl.Rotate( x, y, z )	
	} 
}

function orientation( x, y, z, f ) { 
	if ( check_webview() ) { 
		top_level.IPAControl.Orientation( x, y, z, f )	
	} 
}

// Animation Functions

var current="none"
function hl(name,foot) { if (current!=name) document[name].src="obj_o.gif"; status=foot;}
function dhl(name) { if (current!=name) document[name].src="obj.gif"; status=defaultStatus; }
function chosen(name) { if (current!="none") document[current].src="obj.gif"; current=name; document[current].src="obj_s.gif"; }

// Play the animation segment and hilight the instruction text in bold face
function PlayAnimationSegment (step, start, end) {
  if ( CheckWebView() ) {
	StopAnimation()
	top_level.instrList[step].sel=1
	top_level.instr['x'+step].style.fontWeight='bold'
	top_level.IPAControl.PlaySegment (start, end);
  }
}

// Stop playing the animation and set all instruction text to normal style
function StopAnimation() {
  if ( CheckWebView() ) {
	var i
	for (i = 1; i<top_level.instrList.length; ++i) {
		if (top_level.instrList[i].sel) {
			top_level.instrList[i].sel=0
			top_level.instr['x'+i].style.fontWeight='normal'
		}
	}
  }
}

function playit( a, b, c ) { PlayAnimationSegment( a, b, c ) } // old syntax
function unplayit() { StopAnimation() } // old style syntax
function selectit() { SelectObject.apply (top_level, arguments) }
function check_webview() { return CheckWebView() }

// Selection Functions

function SelectObject() { // takes multiple ids
  if ( CheckWebView() ) {
	DeselectAll();
	var i
	for (i = 0; i < arguments.length; i++) {
 	 top_level.IPAControl.Select(arguments[i]);
	}
	top_level.IPAControl.Highlight(1);
  }
}


function DeselectAll() {
  if ( CheckWebView() ) {
	top_level.IPAControl.Highlight(0);
	top_level.IPAControl.DeselectAll();
	if ( current != "none" ) {
		document[current].src="obj.gif";
	}
	current="none";
  }
}


// Select the object with the name supplied
function SelectObjectByName( name ) {
  if ( CheckWebView() ) {
	deselectall()
	top_level.busy = 1
	findit2( top_level.objectTree, name.toLowerCase() )
	top_level.busy = 0
  }
}

function findit2( treeNode, name ) {
	var i = 0;
	if (treeNode.nodeArray.length > 0 ) {
		for (i=0; i<treeNode.nodeArray.length;i++) {
			var id = treeNode.nodeArray[i].nodeId
			if ( top_level.objectList[id].name.toLowerCase().indexOf( name ) != -1 ) {
				top_level.IPAControl.Select( id )
				top_level.IPAControl.Highlight(1)
			}
			if (treeNode.nodeArray[i].nodeLeaf) {
			} else {
				findit2(treeNode.nodeArray[i], name )
			}
		}
	}
}

// Select all parts of property label that have the given property value
function SelectObjectByProperty( label, name ) {
	if ( CheckWebView() ) {
		DeselectAll()
		findprop2( label, top_level.objectTree, name.toLowerCase() )
	}
}


function findprop2( label, treeNode, name ) {
	var i = 0;
	if (treeNode.nodeArray.length > 0 ) {
		for (i=0; i<treeNode.nodeArray.length;i++) {
			var id = treeNode.nodeArray[i].nodeId
			if ( top_level.objectList[id][label].toLowerCase().indexOf( name ) != -1 ) {
				top_level.IPAControl.Select( id )
				top_level.IPAControl.Highlight(1)
			}
			if (treeNode.nodeArray[i].nodeLeaf) {
			} else {
				findprop2( label, treeNode.nodeArray[i], name )
			}
		}
	}
}


function GetSelectedObject() {
	return ( get_select2( top_level.objectTree ) )
}

function get_select2( treeNode ) {
	var i = 0;
	for (i=0; i<treeNode.nodeArray.length;i++) {
		var id = treeNode.nodeArray[i].nodeId
		if ( top_level.objectList[id].sel ) {
			return id
		}
		if (!treeNode.nodeArray[i].nodeLeaf) {
			id = get_select2(treeNode.nodeArray[i])
			if (id != -1) return id
		}
	}
	return -1
}


// UI Tree and Button Utility Functions
function ToggleShowOnly() {
  if ( CheckWebView() ) {
	showonly_state = !showonly_state;
	if ( showonly_state ) {
		top_level.IPAControl.ShowOnly();
	}
	else {
		top_level.IPAControl.ShowAll();
	}
	document['showonly'].src=showonly_state ? showonly_down.src : showonly_up.src;
  }	
}
	
function AutoHideAgain() {
  if ( CheckWebView() ) {
	top_level.IPAControl.AutoHide = !top_level.IPAControl.AutoHide;
	document['autoh'].src=top_level.IPAControl.AutoHide ? down.src : up.src;
  }
}

function LockAgain() {
  if ( CheckWebView() ) {
	top_level.IPAControl.Fixed = !top_level.IPAControl.Fixed;
	document['lock'].src=top_level.IPAControl.Fixed ? lock_down.src : lock_up.src;
  }
}

function MouseMode() {
  if ( CheckWebView() ) {
	top_level.IPAControl.MouseMode++;
	if ( top_level.IPAControl.MouseMode == 4 ) {
		top_level.IPAControl.MouseMode = 1;
	}
	document['mouse'].src=mouse[top_level.IPAControl.MouseMode].src;
  }
}

function bullseye_parent( id ) {
	if ( id > 0 ) {
		bullseye_parent( top_level.objectList[id].parent );
		top_level.bullseyeOpenBranch( top_level.objectList[id].parent )
	}
}
function bullseye( id ) {
	if ( id > 0 && typeof( top_level.instr.treebody ) != "undefined" && top_level.instr.treebody ) {
		bullseye_parent( top_level.objectList[id].parent );
		top_level.bullseyeOpenBranch( top_level.objectList[id].parent )
		top_level.center_tree(id);
		top_level.redrawTree();
	}
}

function fillSearchProps( doc ) {
	if ( top_level.objectTemplate.length == 0 ) {
		doc.write("<OPTION value='name'>Name</OPTION>")
	}
	else {
		doc.write("<OPTION value='name'>Name</OPTION>")
		for (var i = 0; i < top_level.objectTemplate.length; ++i) {
			var node = top_level.objectTemplate[i]
			doc.write("<OPTION value='",node.field,"'>",node.label,"</OPTION>")
		}
	}
	
}

function fillBOMProps( doc ) {
	var node;
	if ( top_level.objectTemplate.length == 0 ) {
		doc.write("<OPTION value='name'>Name</OPTION>")
	}
	else {
		for (var i = 0; i < top_level.objectTemplate.length; ++i) {
			node = top_level.objectTemplate[i]
			if ( node.BOMVis ) {
				doc.write("<INPUT type=checkbox checked name=list value='",node.field,"'  onClick='getOneBOMProp(document.BOMOptions.list, ",i,")'> ",node.label,"</INPUT><br>")
			}
			else {
				doc.write("<INPUT type=checkbox name=list value='",node.field,"' onClick='getOneBOMProp(document.BOMOptions.list, ",i,")'> ",node.label,"</INPUT><br>")
			}			
		}
	}
}

function fillPropertyProps( doc ) {
	var node;
	if ( top_level.objectTemplate.length == 0 ) {
		doc.write("<OPTION value='name'>Name</OPTION>")
	}
	else {
		for (var i = 0; i < top_level.objectTemplate.length; ++i) {
			node = top_level.objectTemplate[i]
			if ( node.PropVis ) {
				doc.write("<INPUT type=checkbox checked name=list value='",node.field,"'  onClick='getOnePropertyProp(document.PropertyOptions.list, ",i,")'> ",node.label,"</INPUT><br>")
			}
			else {
				doc.write("<INPUT type=checkbox name=list value='",node.field,"' onClick='getOnePropertyProp(document.PropertyOptions.list, ",i,")'> ",node.label,"</INPUT><br>")
			}			
		}
	}
}

function getOnePropertyProp(field, value) {
	var node = top_level.objectTemplate[value]
	node.PropVis = field[value].checked
	if ( typeof(top_level.props) != "undefined" ) {
		top_level.redrawProps ( top_level.GetSelectedObject() );
	}
}

function getOneBOMProp(field, value) {
	var node = top_level.objectTemplate[value]
	node.BOMVis = field[value].checked
}


function setPage( i ) { top_level.actPage = i }
function getPage() { return top_level.actPage }

function openNewWindow(URLName, windowName, features) {
	window.open(URLName, windowName, features);
}
//-->