<!--

//
// Part List Code
//
function listNode(pn,fn)
{
	var node = new Object
	node.name = pn
	node.filename = fn
	node.attribs = new Array
	var i
	for (i = 2; i < arguments.length; ++i) {
		node.attribs[i-2] = arguments[i]
		node[objectTemplate[i-2].field]=arguments[i]
	}
	return node
}

function appendField(aTmplt,field,label)
{
	var node = new Object
	aTmplt[aTmplt.length] = node
	if (field != "Note" && field != "Link") {
		field = field.toLowerCase()
	}
	node.field = node.label = field
	if (arguments.length > 2 && label != "") {
		node.label = label
	}
	node.BOMVis = false
	node.PropVis = true
}

function redrawTOC() {
 if ( typeof( top_level.instr ) != "undefined" ) {
  var doc = top_level.instr.document
  with (doc) {
	clear()
	writeln("<HTML>")
	writeln("<head>")
	writeln("<STYLE type='text/css'>@import url('styles.css');</STYLE>")
	writeln("<script language='javascript' src='util.js'></script>")
	writeln("<script language='javascript'>top_level.instr = window;</script>")
	writeln("</head>")
	//writeln("<body class='instr' onload=\"javascript:top_level.initializeTree()\">")
	writeln("<body class='instr' onload=\"javascript:top_level.instr.location = 'toc.html'\">")
	writeln("</body>")
	writeln("</HTML>")
  }
 }
}

function redrawPropsLinkField(doc,v)
{
	var i = v.indexOf(";")
	var hot = v
	var lnk = v
	if (i >= 0) {
		hot = hot.substr (i+1)
		lnk = lnk.substr (0, i)
	}
	if (!/:/.test(lnk)) lnk = "../" + lnk
	lnk = hot.link (lnk)
	lnk = lnk.replace(/href/i,"target='proplink' href")
	doc.writeln("<td class='instr'>",lnk,"</td></tr>")
}

function redrawPropsField(doc,id,f,lbl)
{
	if (objectList[id][f]) {
		doc.writeln("<tr><td class='instr' width=120>",lbl,"</td>")
		var v = objectList[id][f]
		if (/^link:/i.test(v)) {
			v = v.replace (/^link:/i,"")
			redrawPropsLinkField (doc,v)
		} else if (/^http:/i.test(v) || /^file:/i.test(v)) {
			redrawPropsLinkField (doc,v)
		} else {
			doc.writeln("<td class='instr'>",v,"</td></tr>")
		}
	}
}


function outputHead(doc,w)
{
	with (doc) {
		clear()
		writeln("<HTML>")
		writeln("<head>")
		writeln("<STYLE type='text/css'>@import url('styles.css');</STYLE>")
		writeln("<SCRIPT language='javascript'>")
		writeln("top_level = parent.top_level")
		writeln("top_level."+w+"=this")
		writeln("function playit(a,b,c) { top_level.PlayAnimationSegment (a,b,c) }")
		writeln("function unplayit() { top_level.StopAnimation () }")
		writeln("function selectit() { top_level.SelectObject.apply (top_level, arguments) }")
		writeln("</script>")
		writeln("</head>")
	}
}

function outputTail(doc)
{
	with (doc) {
		writeln("</table>")
		writeln("</body>")
		writeln("</HTML>")
		close()
	}
}

function redrawProps(id)
{
	if (typeof(top_level.props) != "undefined") {
		var doc = top_level.props.document
		outputHead(doc,"props")
		with (doc) {
			writeln("<body class='props'>")
			writeln("<div class='comment'>Properties</div>")
			writeln("<table border=0 cellspacing=0 width=300>")

			if (id >= 0) {
				for (var i = 0; i < objectTemplate.length; ++i) {
					var node = objectTemplate[i]
					if (node.PropVis) {
						redrawPropsField(doc,id,node.field,node.label)
					}
				}
			}
		}
		outputTail(doc)
	}
}

function redrawPropsInit() {
	if (typeof(top_level.props) != "undefined") {
		var doc = top_level.props.document
		outputHead(doc,"props")
		doc.writeln("<body class='props'>")
		outputTail(doc)
	}
	top_level.redrawProps(-1);
}


//
// Instruction code
//

function outputInstructionHead(doc,w)
{
	with (doc) {
		clear()
		writeln("<HTML>")
		writeln("<head>")
		writeln("<STYLE type='text/css'>@import url('styles.css');</STYLE>")
		writeln("<SCRIPT language='javascript'>")
		writeln("top_level = parent.top_level")

		writeln("var busy = 0; ")

		writeln("var endframe = 0")
		writeln("var startframe = 0")
		writeln("var currentframe = 0")

		writeln("stop_up = new Image();")
		writeln("stop_down = new Image();")
		writeln("stop_up.src = '../icons/stop.gif';")
		writeln("stop_down.src = '../icons/stop-d.gif';")

		writeln("play_up = new Image();")
		writeln("play_down = new Image();")
		writeln("play_up.src = '../icons/play.gif';")
		writeln("play_down.src = '../icons/play-d.gif';")

		writeln("function animstop() {")
		writeln("	top_level.instr['Stop_icon'].src=stop_down.src;")
		writeln("	top_level.instr['Play_icon'].src=play_up.src;")
		writeln("}")

		writeln("function playit(a,b,c) { ")
		writeln("	busy = 1")
		writeln("	top_level.instr['Stop_icon'].src=stop_up.src;")
		writeln("	top_level.instr['Play_icon'].src=play_down.src;")
		writeln("	top_level.PlayAnimationSegment (a,b,c) ")
		writeln("}")

		writeln("function unplayit() { top_level.StopAnimation () }")
		writeln("function selectit() { top_level.SelectObject.apply (top_level, arguments) }")

		writeln("function Stop() { ")
		writeln("	top_level.IPAControl.Stop();")
		writeln("	endframe = top_level.IPAControl.EndFrame;")
		writeln("	startframe = top_level.IPAControl.StartFrame;")
		writeln("	currentframe = top_level.IPAControl.CurrentFrame;")
		writeln("	top_level.instr['Stop_icon'].src=stop_down.src;")
		writeln("	top_level.instr['Play_icon'].src=play_up.src;")
		writeln("	busy = 0")
		writeln("}")

		writeln("function Play() {")
		writeln("	top_level.IPAControl.playsegment( currentframe, endframe );")
		writeln("	top_level.IPAControl.StartFrame = startframe;")
		writeln("	top_level.instr['Stop_icon'].src=stop_up.src;")
		writeln("	top_level.instr['Play_icon'].src=play_down.src;")
		writeln("	busy = 0")
		writeln("}")

		writeln("function First() {")
		writeln("	top_level.IPAControl.First();")
		writeln("	startframe = endframe = currentframe = 0;")
		writeln("	busy = 0")
		writeln("}")

		writeln("function Last() {")
		writeln("	top_level.IPAControl.Last();")
		writeln("	startframe = endframe = currentframe = 0;")
		writeln("	busy = 0")
		writeln("}")

		writeln("function setStep( frame ) {")
		writeln("  if ( !busy ) {")
		writeln("	busy = 1")
		writeln("	for (i = 1; i < top_level.instrList.length; i++) {")
		writeln("		var startfr = top_level.instrList[i].link.split(',')")
		writeln("		var endfr = startfr[2].split(')')")
		writeln("		if ( frame > startfr[1] && frame < endfr[0] ) {")
		writeln("			top_level.instrList[i].sel=1")
		writeln("			top_level.instr['x'+i].style.fontWeight='bold'")
		writeln("		} else {")
		writeln("			if ( top_level.instrList[i].sel ) {")
		writeln("				top_level.instrList[i].sel=0")
		writeln("				top_level.instr['x'+i].style.fontWeight='normal'")
		writeln("			}")
		writeln("		}")
		writeln("	}")
		writeln("	busy = 0")
		writeln("  }")
		writeln("}")
		writeln("</script>")
		writeln("</head>")
	}
}

function instrNode (name, instr, start, end)
{
	var node = new Object
	node.name = name
	node.text = instr
	node.start = start
	node.end = end
	node.attribs = new Array
	var i
	for (i = 4; i < arguments.length-1; ++i) {
		node.attribs[i-4] = arguments[i]
		node[instrTemplate[i-4].field]=arguments[i]
	}
	node.link = arguments[i]
	return node
}

// redraws the instruction list
function redrawInstructions()
{
  if ( top_level.CheckWebView() ) {
	var st = 0
	if (typeof(top_level.instr.instrbody) != "undefined") st = top_level.instr.instrbody.scrollTop
	var doc = top_level.instr.document
	outputInstructionHead(doc,"instr")
	with (doc) {
		writeln("<body class='instr' id='instrbody' onclick='if(window.event.srcElement.tagName==\"BODY\" || window.event.srcElement.tagName==\"TD\" ) top_level.StopAnimation()' >")
		if ( top_level.get_comments() ) {
			writeln("<span class='comment'>")
			write("<script LANGUAGE='JavaScript'>")
			write("document.write(top_level.print_comments());")
			writeln("</script>")
			writeln("</span><br>")
		}

		writeln("<span class='instr'>")
		writeln("<a href='toc.html'>Return to Table of Contents</a>")
		writeln("</span>")

		write("<br><br><center><a onmouseover=\"status='First frame';return true\" onmouseout=\"status=defaultStatus\" href=\"javascript:First()\"><img src=\"../icons/first.gif\" alt=\"First Frame\" border=0></a><a onmouseover=\"status='Previous frame';return true\" onmouseout=\"status=defaultStatus\" href=\"javascript:top_level.IPAControl.Previous(1)\"><img src=\"../icons/prev.gif\" alt=\"Previous Frame\" border=0></a><a onmouseover=\"status='Stop';return true\" onmouseout=\"status=defaultStatus\" href=\"javascript:Stop()\"><img src=\"../icons/stop-d.gif\" id=\"Stop_icon\" alt=\"Stop\" border=0></a><a onmouseover=\"status='Play';return true\" onmouseout=\"status=defaultStatus\" href=\"javascript:Play()\"><img src=\"../icons/play.gif\" id=\"Play_icon\" alt=\"Play\" border=0></a><a onmouseover=\"status='Next frame';return true\" onmouseout=\"status=defaultStatus\" href=\"javascript:top_level.IPAControl.Next(1)\"><img src=\"../icons/next.gif\" alt=\"Next Frame\" border=0></a><a onmouseover=\"status='Last frame';return true\" onmouseout=\"status=defaultStatus\" href=\"javascript:Last()\"><img src=\"../icons/last.gif\" alt=\"Last Frame\" border=0></a></center>")

		writeln("<br>")
		writeln("<table border=0 cellspacing=0 cellpadding=0>")
		redrawInstr(instrList, doc)
	}
	outputTail(doc)
	top_level.instr.instrbody.scrollTop = st
  }
}

function redrawInstr(ilist, doc)
{
	var i

	for (i = 1; i < ilist.length; i++) {
		doc.write("<tr class='instr'><td>")
		var sel = ilist[i].sel
		doc.write ("<b>")
		doc.writeln(ilist[i].name)
		doc.write ("</b>")
		if (sel) doc.write ("<b>")
		doc.writeln("<a href='", ilist[i].link, "' id='x", i, "'>", ilist[i].text, "</a>")
		if (sel) doc.write ("</b>")

		var note=ilist[i]["Note"]
		if (note) { // check to see if a note exists
			var notelink = ilist[i]["Link"]
			if (notelink) { // check for hyperlink on note
				if (notelink.search (/:/) == -1) {
					notelink = "../" + notelink	// adjust relative links
				}
				doc.writeln('<br><br><div class="instrnote"><a href="'+notelink+'" target="_blank">'+note+'</a></div>')

			} else {
				doc.writeln( '<br><br><div class="instrnote">'+note+'</div>' );
			}
		} else {
			doc.write("<br>")
		}

		doc.writeln("<br></td></tr>")
	}
}

var instrTemplate = 0
var instrList = 0
if (typeof (generateInstructions) != "undefined") generateInstructions ()

//
// Tree Code
//
//each tree node is an Object
// nodeOpen is 0/1 when the node is closed/open
// nodeLeaf is 1 if the node is not a folder
// nodeName is the name of the component
// nodeLink is the javascript href
// nodeId is the unique id
// nodeArray...nodeArray[0..n-1] are the n children nodes

// Aux func to build the node
function oNode(id,link,leaf)
{
	var o = new Object
	o.nodeOpen=0
	o.nodeLeaf=leaf
	o.nodeLink=generateDocEntry(id,objectList[id].name,link)
	o.nodeId=id
	o.nodeArray = new Array

	return o
}

function folderNode(id, link)
{
	return oNode(id,link,0)
}

function leafNode(id, link)
{
	return oNode(id,link,1)
}

function appendChild(parent, child)
{
	parent.nodeArray[parent.nodeArray.length] = child
	objectList[child.nodeId].parent = parent.nodeId
	return child
}

function generateDocEntry(id, docDescription, link)
{
	escDocDesc = docDescription.replace(/'/g, "\\'").replace(/&quot;/g, "\\$&")
	var retString = "<A href='"+link+"' target=visuals_frame id='n" + id + "' onMouseOver=\"window.status=\'Select "+escDocDesc+"\'; return true\" onMouseOut=\'window.status=\"\"; return true\' >"
	retString = retString + "<span class='compname'>" + docDescription + "</span></a>"
	return retString
}

// redraws the assembly tree
function redrawTree()
{
  if ( top_level.CheckWebView() ) {
	var st = 0
	if (typeof(top_level.instr.treebody) != "undefined") st = top_level.instr.treebody.scrollTop
	var doc = top_level.instr.document
	outputHead(doc,"instr")
	with (doc) {
		writeln("<body class='instr' id='treebody' onclick='if(window.event.srcElement.tagName==\"BODY\" || window.event.srcElement.tagName==\"TD\" ) top_level.DeselectAll()' oncontextmenu='return false;' >")
		if ( top_level.get_comments() ) {
			writeln("<span class='comment'>")
			write("<script LANGUAGE='JavaScript'>")
			write("document.write(top_level.print_comments());")
			writeln("</script>")
			writeln("</span><br>")
		}
		writeln("<span class='instr'>")
		writeln("<a href='toc.html'>Return to Table of Contents</a>")
		writeln("</span><br><br>")
		writeln("<table border=0 cellspacing=0 cellpadding=0 width=100>")
		redrawNode(objectTree, doc, 0, 1, "")
	}
	outputTail(doc)
	top_level.instr.treebody.scrollTop = st
  }
}

// recursive
function redrawNode(treeNode, doc, level, lastNode, leftSide)
{
	var j=0
	var i=0

	doc.write("<tr><td valign=middle nowrap class='instr' >")
	doc.write(leftSide)
	if (level>0) {
		if (lastNode) { //the last 'brother' in the children array
			doc.write("<img src='../icons/lastnode.gif' align=top>")
			leftSide = leftSide + "<img src='../icons/blank.gif' align=top>"
		} else {
			doc.write("<img src='../icons/node.gif' align=top>")
			leftSide = leftSide + "<img src='../icons/vertline.gif' align=top>"
		}
	}
	displayIconAndLabel(treeNode, doc)
	doc.writeln("</td></tr>")

	if (treeNode.nodeArray.length > 0 && treeNode.nodeOpen) {//there are sub-nodes and the node is open
		level++
		for (i=0; i<treeNode.nodeArray.length;i++) {
			if (treeNode.nodeArray[i].nodeLeaf) {
				doc.write("<tr><td nowrap class='instr'  >")
				doc.write(leftSide)
				if (i==treeNode.nodeArray.length - 1) {
					doc.write("<img src='../icons/lastnode.gif' align=top>")
				} else {
					doc.write("<img src='../icons/node.gif' align=top>")
				}
				var id = treeNode.nodeArray[i].nodeId
				var sel = objectList[id].sel
				var hid = objectList[id].hid
				doc.write ("<img id='i"+id+"' src='../icons/part"+(hid?"_hide":"")+".gif' alt='Select component' align=top border=0>")
				if (sel) doc.write ("<b>")
				doc.write(treeNode.nodeArray[i].nodeLink)
				if (sel) doc.write ("</b>")
				doc.writeln("</td></tr>")
			} else {
				redrawNode(treeNode.nodeArray[i], doc, level, i==(treeNode.nodeArray.length-1), leftSide)
			}
		}
	}
}

function displayIconAndLabel(treeNode, doc)
{
	with (doc) {
		write("<A href='javascript:top_level.openBranch(" + treeNode.nodeId + ")' ")
		if (treeNode.nodeOpen) {
			write("><img src='../icons/open.gif'")
		} else {
			write("><img src='../icons/closed.gif'")
		}
		write (" align=top border=0>")
		var sel = objectList[treeNode.nodeId].sel
		var hid = objectList[treeNode.nodeId].hid
		var icon = (objectList[treeNode.nodeId].filename == "") ? "subasm" : "part";
		write ("<img id='i"+treeNode.nodeId+"' src='../icons/"+icon+(hid?"_hide":"")+".gif' align=top border=0>")
		write ("</a>")
		if (sel) write ("<b>")
		write(treeNode.nodeLink)
		if (sel) write ("</b>")
	}
}

// recursive
function clickOnTreeRec(treeNode, componentId)
{
	var i=0
	if (treeNode.nodeId == componentId) {
		treeNode.nodeOpen = !treeNode.nodeOpen
	} else if (!treeNode.nodeLeaf) {
		for (i=0; i< treeNode.nodeArray.length; i++) {
			clickOnTreeRec(treeNode.nodeArray[i], componentId)
		}
	}
}

// Event handler
// called when the user clicks on a tree node
function openBranch(branchId)
{
	clickOnTreeRec(objectTree, branchId)
	top_level.redrawTree()
}

function TreeDepth(treeNode, componentId)
{
	var found = 0
	var i=0
	if (treeNode.nodeId == componentId) {
		return 1;
	} else if (!treeNode.nodeLeaf) {
		if ( treeNode.nodeOpen ) {
			for (i=0; i< treeNode.nodeArray.length && !found; i++) {
				found = TreeDepth(treeNode.nodeArray[i], componentId)
			}
			if ( found || treeNode.nodeOpen ) {
				tree_depth += (i+1);
			}
		}
	}
	tree_depth++;
	return found;
}

function openTreeRec(treeNode, componentId)
{
	var i=0
	if (treeNode.nodeId == componentId) {
		treeNode.nodeOpen = 1;
	} else if (!treeNode.nodeLeaf) {
		for (i=0; i< treeNode.nodeArray.length; i++) {
			openTreeRec(treeNode.nodeArray[i], componentId)
		}
	}
}
function bullseyeOpenBranch(branchId)
{
	if ( typeof( top_level.instr.treebody ) != "undefined" && top_level.instr.treebody ) {
		openTreeRec(objectTree, branchId)
	}
}

var tree_depth = 0
function center_tree( branchId ) {
	if ( typeof( top_level.instr.treebody ) != "undefined" && top_level.instr.treebody ) {
		tree_depth = 0;
		if ( branchId > 0 ) {
			TreeDepth(objectTree, branchId )
			top_level.instr.treebody.scrollTop = tree_depth*8
		}
	}
}

// called after this html file is loaded
function initializeTree()
{
	if ( typeof( top_level.page ) == "undefined" ) top_level.page = 9999; // toc.html
	top_level.redrawProps(-1)
	if (top_level.instr && CheckWebView(1)) {
		objectTree.nodeOpen = 1
		if ( top_level.page == 1 ) { 
			top_level.redrawTree()
		} else {
			if ( top_level.page == 2 ) {
				top_level.redrawBOM()
			} else { 
				if ( top_level.page == 3 ) {
					top_level.redrawInstructions()
				} else { 
					top_level.instr.location = './html/toc.html'
				}
			} 
		}
	} else {
		setTimeout( "initializeTree()", 1000 )
	}
}

var objectTemplate = 0
top_level.objectTemplate = objectTemplate
var objectList = 0
var objectTree = 0
generateList()
generateTree()

//
// BOM Code
//

// Aux func to build the node
function BOMNode(quant)
{
	var o = new Object
	o.quant=quant
	o.vis=1
	o.pur_quant = 0
	o.nodeIds=new Array
	var i
	for (i = 1; i < arguments.length - 1; i++) {
		o.nodeIds[i-1]=arguments[i]
		idToBOMid[arguments[i]]=arguments[1] // reverse map
	}
	o.BOMid = o.nodeIds[0]
	o.name=objectList[o.BOMid].name
	o.nodeLink=generateBOMEntry(o.BOMid,o.name,arguments[i])
	o.nodeCATLink=generateCATEntry(o.BOMid,o.name,arguments[i])
	objectList[o.BOMid].BOMids = o.nodeIds

	return o
}

function appendToBOM(parent, child)
{
	parent[parent.length] = child
	return child
}

function generateBOMEntry(id, docDescription, link)
{
	var retString

	// functions in onclick are different than in href - different context
	link = link.replace (/^javascript:/, "top_level.")
	retString = "onclick='"+link+";top_level.redrawBOM();' target=visuals_frame id='b"+id+"'"
	return retString
}

function redrawBOM()
{
  if ( top_level.CheckWebView() ) {
	var st = 0
	var sel = 0
	if (typeof(top_level.instr.bombody) != "undefined") st = top_level.instr.bombody.scrollTop
	var doc = top_level.instr.document
	outputHead(doc,"instr")
	with (doc) {
writeln("<body class='instr' id='bombody' >")
		if ( top_level.get_comments() ) {
			writeln("<span class='comment'>")
			write("<script LANGUAGE='JavaScript'>")
			write("document.write(top_level.print_comments());")
			writeln("</script>")
			writeln("</span><br>")
		}

		writeln("<span class='instr'>")
		writeln("<a href='toc.html'>Return to Table of Contents</a>")
		writeln("</span><br><br>")

		writeln("<table border=0 cellspacing=0 cellpadding=0 >")
		
		sel = redrawBOMNodes(objectBOM, doc, BOMsortfield, BOMdir)
	}
	outputTail(doc)
	if ( sel > -1 ) st = sel * 10
	top_level.instr.bombody.scrollTop = st
  }
}

// get value from BOM if present - else from object
function getBOMvalue(BOM, field, index)
{
	if (typeof(BOM[index][field]) == "undefined") {
		return objectList[BOM[index].BOMid][field]
	}
	return BOM[index][field]
}

// dumb sort for now
// sort numerically if possible - otherwise, sort alphabetically
function sortBOM(BOM, field, dir)
{
	var len = BOM.length
	var i
	while (len > 1) {
		var index = 0
		for (i = 1; i < len; i++) {
			var vi = getBOMvalue (BOM, field, i)
			var vindex = getBOMvalue (BOM, field, index)
			var fi = vi - 0
			var findex = vindex - 0
			var p = dir ? (vi > vindex) : (vi < vindex)
			if (!isNaN(fi) && !isNaN(findex)) {
				p = dir ? (fi > findex) : (fi < findex)
			}
			if (!p) {
				index = i
			}
		}
		// exchange with last element
		len--
		var temp = BOM[len]
		BOM[len] = BOM[index]
		BOM[index] = temp
	}
}

// iterative
function redrawBOMNodes(BOM, doc, sortfield, dir)
{
	var i=0
	var selected=-1
	var bg=0

	sortBOM (BOM, sortfield, dir)

	displayBOMheadings (doc, sortfield, dir)
	doc.writeln("")

	for (i = 0; i < BOM.length; i++) {
		var sel = objectList[BOM[i].BOMid].sel
		if ( sel ) selected = i

		if (sel) doc.write("<tr bgcolor='gold' onMouseOver='style.color=\"red\"' onMouseOut='style.color=\"black\"' ",BOM[i].nodeLink," >")
		if ( bg == 0 ) {
			if (!sel) doc.write("<tr bgcolor='#c0c0c0' onMouseOver='style.color=\"red\"' onMouseOut='style.color=\"black\"' ",BOM[i].nodeLink," >")
			bg = 1
		} else {
			if (!sel) doc.write("<tr onMouseOver='style.color=\"red\"' onMouseOut='style.color=\"black\"' ",BOM[i].nodeLink," >")
			bg = 0
		}

		// quantity
		writeSelectBOM( doc, BOM[i].quant, BOM[i].nodeLink )
		// part number
		writeSelectBOM( doc, BOM[i].name, BOM[i].nodeLink )
		// all visible part attributes
		var node
		for (var j = 0; j < objectTemplate.length; ++j) {
			node = objectTemplate[j]
			if ( node.BOMVis ) {
				writeSelectBOM( doc, objectList[BOM[i].BOMid][node.field], BOM[i].nodeLink )
			}
		}
		doc.writeln("</tr>")
	}
	return selected
}

function writeSelectBOM( doc, lbl, link )
{
	//doc.writeln("<td align=center nowrap ",link," >",lbl,"</td>")
	doc.writeln("<td align=center nowrap >",lbl,"</td>")
}

function displayFieldHeading (doc, field, title, sf, sd, func)
{
	var s = field==sf
	var d = s?!sd:sd
	var c = s?" class='sortcol'":""
	var a = s?(sd?"&nbsp;&uarr;":"&nbsp;&darr;"):""

	doc.write("<th class='BOMName' nowrap><A href='javascript:top_level.",func,"(\"", field, "\",", d ,")'", c, ">", title, "</a>", a ,"</th>")
}
function displayBOMFieldHeading (doc, field, title, sf, sd)
{
	displayFieldHeading (doc, field, title, sf, sd, "changeSort")
}

function displayCATFieldHeading (doc, field, title, sf, sd)
{
	displayFieldHeading (doc, field, title, sf, sd, "changeCATSort")
}

function displayBOMheadings(doc, sfield, sdir)
{
	var node
	doc.write("<thead><tr class='BOMHeading'>")
	displayBOMFieldHeading (doc, "quant", "Quantity", sfield, sdir)
	displayBOMFieldHeading (doc, "name", "Part No.", sfield, sdir)
	for (var i = 0; i < objectTemplate.length; ++i) {
		node = objectTemplate[i]
		if ( node.BOMVis ) displayBOMFieldHeading (doc, node.field, node.label, sfield, sdir)
	}
	doc.write("</tr></thead>")
}


// Event handlers
//called when the user clicks on a heading
function changeSort(sortfield, sortdir)
{
	BOMsortfield = sortfield
	BOMdir = sortdir
	top_level.redrawBOM()
}

var theBOMField = "serviceable"
var theBOMAltPart = "partname"

// constructor for BOM filters
function BOMFilter ()
{
	this.includeTest = gtv ("includeInBOM")
	if (this.includeTest == "") {
		this.includeTest = "obj.filename || obj[theBOMAltPart]"
		for (var i = 0; i < objectTemplate.length; ++i) {
			var node = objectTemplate[i]
			if (node.field == theBOMField) {
				this.includeTest = "/^yes/i.test(obj[theBOMField])"
				break
			}
		}	

	}
	this.includeInBOM = includeInBOM
}

function includeInBOM (obj)
{
	return eval (this.includeTest)
}

function generateUserBOM (objList)
{
	// first find all parts and build id lists
	var BOM = new Array
	var objs = new Array		   
	var i
	var filter = new BOMFilter

	for (i in objList) {
		if (filter.includeInBOM (objList[i])) {
			// get the part number of this part
			var n = objList[i].filename
			if (n == "") {
				n = objList[i][theBOMAltPart]
			}
			var p = objs[n]
			if (typeof (p) == "undefined") {
				p = objs[n] = new Array
			}
			// append id to list of ids with this part number
			p[p.length] = i
		}
	}

	// now fill up the BOM, collapsing identical parts
	for (i in objs) {
		var p = objs[i]
		// build a BOMNode with all of the ids that map to this part number
		var e = "BOMNode (" + p.length + ","
		for (t in p) {
			e += p[t] + ","
		}
		c = ""
		e += '"javascript:selectit('
		for (t in p) {
			e += c + p[t]
			c = ","
		}
		e += ')")'
		// this eval handles the tricky "unknown number of arguments" problem
		var node = eval (e)
		appendToBOM (BOM, node)
	}

	return BOM
}



var objectBOM = 0
var BOMsortfield = "name"
var BOMdir = 0
var idToBOMid = new Array

objectBOM = generateUserBOM(objectList)

// Catalog Stuff

// For purchasing, find and uncomment the cost lines

function changeCATSort(sortfield, sortdir)
{
	BOMsortfield = sortfield
	BOMdir = sortdir
	top_level.redrawCAT()
}

function generateCATEntry(id, docDescription, link)
{
	var retString
	retString = "onclick='"+link+";top_level.redrawCAT();' target=visuals_frame id='c"+id+"'"
	return retString
}

function redrawCAT()
{
  if ( top_level.CheckWebView() ) {

	var st = 0
	var sel = 0
	if (top_level.instr.bombody) st = top_level.instr.bombody.scrollTop
	var doc = top_level.instr.document
	outputHead(doc,"instr")
	with (doc) {
		
writeln("<span class='instr'><center>")
writeln("<body class='instr' id='bombody' >")
writeln("</span>")
			
		if ( top_level.get_comments() ) {
			writeln("<span class='comment'>")
			write("<script LANGUAGE='JavaScript'>")
			write("document.write(top_level.print_comments());")
			writeln("</script>")
			writeln("</span><br>")
		}

		writeln("<span class='instr'>")
		writeln("<a href='toc.html'>Return to Table of Contents</a>")
		writeln("</span><br><br>")

		writeln("<span class='instr'>")
		writeln("Click on the part in the graphics window, click on the part name in the list below, or type in the quantity")
		writeln("</span><br><br>")

		writeln("<table border=0 cellspacing=0 cellpadding=0 >")
		sel = redrawCATNodes(objectBOM, doc, BOMsortfield, BOMdir)
	}
	outputTail(doc)
	if ( sel > -1 ) st = sel * 10
	top_level.instr.bombody.scrollTop = st
  }
}

function redrawCATNodes(BOM, doc, sortfield, dir)
{
	var i=0
	var selected=-1
	var bg=0
	var purTotal=0

	sortBOM (BOM, sortfield, dir)

	displayCATheadings (doc, sortfield, dir)
	doc.writeln("")

	for (i = 0; i < BOM.length; i++) {

		var sel = objectList[BOM[i].BOMid].sel
		if ( sel ) selected = i

		if (sel) doc.write("<tr bgcolor='gold' onMouseOver='style.color=\"red\"' onMouseOut='style.color=\"black\"' ",BOM[i].nodeCATLink," >")
		if ( bg == 0 ) {
			if (!sel) doc.write("<tr bgcolor='lightgrey' onMouseOver='style.color=\"red\"' onMouseOut='style.color=\"black\"' ",BOM[i].nodeCATLink," >")
			bg = 1
		} else {
			if (!sel) doc.write("<tr onMouseOver='style.color=\"red\"' onMouseOut='style.color=\"black\"' ",BOM[i].nodeCATLink," >")
			bg = 0
		}

		// quantity
		doc.writeln("<td align=center valign=middle nowrap ><img src='../icons/plus.gif' border=0 onClick='javascript:top_level.incrCAT(",i,")' ><img src='../icons/minus.gif' border=0 onClick='javascript:top_level.decCAT(",i,")'><input type='text' size=2 id='qty_field' name='textfield' value='",BOM[i].pur_quant,"' onChange='javascript:top_level.changeCAT(",i,", value)'></td>")
		// part number
		writeSelectBOM( doc, BOM[i].name, BOM[i].nodeCATLink )
		// all visible part attributes
		//if ( typeof( objectList[objectBOM[i].BOMid].cost ) != "undefined" ) {
		//	writeSelectBOM( doc, objectList[objectBOM[i].BOMid].cost , BOM[i].nodeCATLink )
		//	writeSelectBOM( doc, BOM[i].pur_quant*objectList[BOM[i].BOMid].cost , BOM[i].nodeCATLink )
		//}
		doc.writeln("</tr>")
		//if ( typeof( objectList[objectBOM[i].BOMid].cost ) != "undefined" ) {
		//	purTotal += BOM[i].pur_quant*objectList[BOM[i].BOMid].cost
		//}
	}
	//doc.writeln("<td align=center nowrap ><b>Total Purchase</b></td>")
	//for (var j = 0; j < 2; ++j) {
	//	doc.writeln("<td align=center nowrap >&nbsp;</td>")
	//}
	//doc.writeln("<td align=center nowrap ><b>$",purTotal,"</b></td>")
	return selected
}

function incrCAT( i ) { 
	objectBOM[i].pur_quant++
	redrawCAT()
}

function decCAT( i ) { 
	if ( objectBOM[i].pur_quant > 0 ) {
		objectBOM[i].pur_quant--
	}
	redrawCAT()
}

function changeCAT( b_i, b_qty ) { 
	if ( b_qty >= 0 ) {
		objectBOM[b_i].pur_quant = b_qty 
	}
	redrawCAT()
}

function writeSelectCAT( doc, lbl, link )
{
	//doc.writeln("<td align=center nowrap ",link," >",lbl,"</td>")
	doc.writeln("<td align=center nowrap >",lbl,"</td>")
}

function displayCATheadings(doc, sfield, sdir)
{
	var node
	doc.write("<thead><tr class='BOMHeading'>")
	//displayCATFieldHeading (doc, "quant", "Quantity", sfield, sdir)
	displayCATFieldHeading (doc, "pur_quant", "Quantity", sfield, sdir)
	displayCATFieldHeading (doc, "name", "Part No.", sfield, sdir)
	//displayCATFieldHeading (doc, "cost", "Cost", sfield, sdir)
	//for (var i = 0; i < objectTemplate.length; ++i) {
	//	node = objectTemplate[i]
	//	if ( node.BOMVis ) displayCATFieldHeading (doc, node.field, node.label, sfield, sdir)
	//}
	//displayCATFieldHeading (doc, "name", "Totals", sfield, sdir)
	doc.write("</tr></thead>")
}

// Excel Stuff

var XLApp = null
var oBook
var XLSheet
var XLWorkBook

function startExcel() {
	var actPage = getPage()
	if ( actPage == 3 ) { top_level.Excel_PO() }
	if ( actPage == 2 ) { top_level.Excel_BOM() }
	if ( actPage == 4) { top_level.Excel_Instructions() }
}

function selectSheet( sheet_name ) {

	var file_name
	var d
	var i
	var error = 0

	try { 
		//XLApp = GetObject( "","Excel.Application" );
		oBook = XLApp.Workbooks.Item(1);
	}
	catch ( e ) {
		try { XLApp = new ActiveXObject("Excel.Application") ; }
		catch ( err ) { 
			alert("To use the Excel functionality, you must have Microsoft Excel and set your Internet Security level\nto allow MS Excel to be started on your machine.\n\nIn Internet Explorer\nTools->Internet Options...\nClick on the Security tab\nSet - Initialize and script ActiveX controls not marked as safe : Prompt ")
			error = 1
		}
	}

	if ( !error ) {
	XLApp.UserControl = true ;
	XLApp.Visible = true ; 
	XLWorkBook = XLApp.Workbooks;

	if ( top_level.document.URL.search(/http:/i) == 0 ) {
		d = top_level.document.URL.replace (/\\/g, "/")
		i = d.lastIndexOf("/")
		d = d.slice(0,i)+"/"
		if ( d.search(/file:/i) == 0 ) {
			d = d.slice(7)
		}
		file_name = unescape(d)+"html/Template.xls"
	} else {
		d = top_level.document.URL
		i = d.lastIndexOf("\\")
		d = d.slice(0,i)+"\\"
		if ( d.search(/file:/i) == 0 ) {
			d = d.slice(7)
		}
		file_name = unescape(d)+"html\\Template.xls"
	}

	var err
	try { oBook = XLWorkBook.Item(1) }
	catch ( err ) {
		XLWorkBook.open( file_name, 0, true )
	}

	oBook = XLWorkBook.Item(1);
	XLSheet = oBook.Worksheets.Item(1)
	XLSheet.Visible = true
	XLApp.sheets( sheet_name ).Select
	}
	return error
}

function Excel_BOM() {

  if ( selectSheet( "BOM" ) == 0 ) {

	XLSheet.Application.Range("i1") = top_level.gtv("date")
	XLSheet.Application.Range("i2") = top_level.gtv("Company")
	XLSheet.Application.Range("b3") = top_level.gtv("title")

	// Clear anything first
	XLSheet.Application.Range("a5:z100").ClearContents

	// Header
	XLSheet.Application.Range("a5") = "Qty"
	XLSheet.Application.Range("b5") = "Part Number"
	XLSheet.Application.Range("c5").Select

	var node
	for (var i = 0; i < objectTemplate.length; ++i) {
		node = objectTemplate[i]
		if ( node.BOMVis ) {
			XLSheet.Application.ActiveCell = node.label
			XLSheet.Application.ActiveCell.Offset(0,1).Select
		}
	}

	// BOM List
	XLSheet.Application.Range("a6").Select
	for (i = 0; i < objectBOM.length; i++) {

		XLSheet.Application.ActiveCell  = objectBOM[i].quant
		XLSheet.Application.ActiveCell.Offset(0,1).Select
		XLSheet.Application.ActiveCell  = objectBOM[i].name
		XLSheet.Application.ActiveCell.Offset(0,1).Select

		var k = 1
		for (var j = 0; j < objectTemplate.length; ++j) {
			node = objectTemplate[j]
			if ( node.BOMVis ) {
				XLSheet.Application.ActiveCell = objectList[objectBOM[i].BOMid][node.field]
				XLSheet.Application.ActiveCell.Offset(0,1).Select
				k++
			}
		}
		XLSheet.Application.ActiveCell.Offset(1,-k-1).Select
	}
  }
}


function Excel_Instructions() {

if ( selectSheet( "Instructions" ) == 0 ) {

	XLSheet.Application.Range("c1") = top_level.gtv("date")
	XLSheet.Application.Range("c2") = top_level.gtv("Company")
	XLSheet.Application.Range("a2") = top_level.gtv("title")

	var i
	var temp_str

	XLSheet.Application.Range("a6").Select
	for (i = 1; i < instrList.length; i++) {
		var sel = instrList[i].sel
		temp_str = "Step "+i+" : "
		XLSheet.Application.ActiveCell = temp_str
		XLSheet.Application.ActiveCell.Offset(0,1).Select
		XLSheet.Application.ActiveCell = instrList[i].text

		var note=instrList[i]["Note"]
		if (note) { // check to see if a note exists
			XLSheet.Application.ActiveCell.Offset(1,0).Select
			XLSheet.Application.ActiveCell = note	
		}
		XLSheet.Application.ActiveCell.Offset(1,-1).Select
	}
  }
}

function Excel_PO() {

  if ( selectSheet( "Order Sheet" ) == 0 ) {
	
	XLSheet.Application.Visible = true ; 

	XLSheet.Application.Range("e3") = top_level.gtv("Company")
	XLSheet.Application.Range("p5") = top_level.gtv("date")

	XLSheet.Application.Range("d18").Select
	for (i = 0; i < objectBOM.length; i++) {
		if ( objectBOM[i].pur_quant > 0 ) {
			XLSheet.Application.ActiveCell  = objectBOM[i].pur_quant
			XLSheet.Application.ActiveCell.Offset(0,1).Select
			XLSheet.Application.ActiveCell  = objectBOM[i].name
			XLSheet.Application.ActiveCell.Offset(0,1).Select
			if ( typeof( objectList[objectBOM[i].BOMid].cost ) != "undefined" ) {
				XLSheet.Application.ActiveCell  = objectList[objectBOM[i].BOMid].cost
			}
			XLSheet.Application.ActiveCell.Offset(1,-10).Select
		}
	}
  }
}
//-->

