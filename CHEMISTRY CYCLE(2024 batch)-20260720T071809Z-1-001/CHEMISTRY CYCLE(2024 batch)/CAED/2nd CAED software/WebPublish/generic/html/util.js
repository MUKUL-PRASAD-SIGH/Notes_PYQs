<!--

if ( typeof(parent.top_level) != "undefined" && typeof( top_level) == "undefined" ) {
	top_level = parent.top_level;
}

function check_webview()
{
	var installed;
	if ( top_level && typeof(top_level.IPAControl) != 'undefined' && typeof(top_level.IPAControl.Fixed) != 'undefined' ) {
		installed = 1;
	}
	else {
		alert("Please wait until IPA WebView has finished being installed.")
		installed = 0;
	}
	return installed
}

function Show() { if ( check_webview() ) { top_level.IPAControl.Show() } }
function Hide() { if ( check_webview() ) { top_level.IPAControl.Hide() } }
function ShowAll() { if ( check_webview() ) { top_level.IPAControl.ShowAll() } }
function ZoomAll() { if ( check_webview() ) { top_level.IPAControl.ZoomAll() } }
function ZoomArea() { if ( check_webview() ) { top_level.IPAControl.ZoomArea() } }
function ZoomObject() { if ( check_webview() ) { top_level.IPAControl.ZoomObject() } }

var current="none"
function hl(name,foot) { if (current!=name) document[name].src="obj_o.gif"; status=foot;}
function dhl(name) { if (current!=name) document[name].src="obj.gif"; status=defaultStatus; }
function chosen(name) { if (current!="none") document[current].src="obj.gif"; current=name; document[current].src="obj_s.gif"; }
function playit (step, start, end) {
  if ( check_webview() ) {
	unplayit()
	top_level.instrList[step].sel=1
	top_level.instr['x'+step].style.fontWeight='bold'
	top_level.IPAControl.PlaySegment (start, end);
	//chosen ("step"+step);
  }
}
function unplayit() {
  if ( check_webview() ) {
	var i
	for (i = 1; i<top_level.instrList.length; ++i) {
		if (top_level.instrList[i].sel) {
			top_level.instrList[i].sel=0
			top_level.instr['x'+i].style.fontWeight='normal'
		}
	}
  }
}
function selectit() { // takes multiple ids
  if ( check_webview() ) {
	deselectall();
	var i
	for (i = 0; i < arguments.length; i++) {
 	 top_level.IPAControl.Select(arguments[i]);
	}
	top_level.IPAControl.Highlight(1);
  }
}
function deselectall() {
  if ( check_webview() ) {
	top_level.IPAControl.Highlight(0);
	top_level.IPAControl.DeselectAll();
	if ( current != "none" ) {
		document[current].src="obj.gif";
	}
	current="none";
  }
}

function findit( name ) {
if ( check_webview() ) {
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

showonly_up = new Image();
showonly_down = new Image();
showonly_up.src = '../icons/showonly.gif';
showonly_down.src = '../icons/showonly-d.gif';
var showonly_state = 0;
function ToggleShowOnly() {
  if ( check_webview() ) {
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
	
up = new Image();
down = new Image();
up.src = '../icons/autohide.gif';
down.src = '../icons/autohide-d.gif';
var autohide_state = 0;
function AutoHideAgain() {
  if ( check_webview() ) {
	top_level.IPAControl.AutoHide = !top_level.IPAControl.AutoHide;
	document['autoh'].src=top_level.IPAControl.AutoHide ? down.src : up.src;
  }
}

lock_up = new Image();
lock_down = new Image();
lock_up.src = '../icons/lock.gif';
lock_down.src = '../icons/lock-d.gif';
var lock_state = 1;
function LockAgain() {
  if ( check_webview() ) {
	top_level.IPAControl.Fixed = !top_level.IPAControl.Fixed;
	document['lock'].src=top_level.IPAControl.Fixed ? lock_down.src : lock_up.src;
  }
}

mouse = new Array;
mouse[0] = new Image(); // normal
mouse[1] = new Image(); // left button
mouse[2] = new Image(); // right button
mouse[3] = new Image(); // both buttons
mouse[0].src = '../icons/mouse_n.gif';
mouse[1].src = '../icons/mouse_l.gif';
mouse[2].src = '../icons/mouse_r.gif';
mouse[3].src = '../icons/mouse_b.gif';
function MouseMode() {
  if ( check_webview() ) {
	top_level.IPAControl.MouseMode++;
	if ( top_level.IPAControl.MouseMode == 4 ) {
		top_level.IPAControl.MouseMode = 1;
	}
	document['mouse'].src=mouse[top_level.IPAControl.MouseMode].src;
  }
}
function openNewWindow(URLName, windowName, features) {
	window.open(URLName, windowName, features);
}
//-->