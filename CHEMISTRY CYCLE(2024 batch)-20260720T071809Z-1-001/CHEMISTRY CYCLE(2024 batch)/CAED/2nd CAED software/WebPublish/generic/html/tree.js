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
	node.field = node.label = field
	if (arguments.length > 2 && label != "") {
		node.label = label
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
		writeln("function playit(a,b,c) { top_level.playit (a,b,c) }")
		writeln("function selectit() { top_level.selectit.apply (top_level, arguments) }")
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
	if (top_level.props) {
		var doc = top_level.props.document
		outputHead(doc,"props")
		with (doc) {
			writeln("<body class='props'>")
			writeln("<div class='comment'>Properties</div>")
			writeln("<table border=0 cellspacing=0 width=300>")

			if (id >= 0) {
				redrawPropsField(doc,id,"Title","Title")
				redrawPropsField(doc,id,"Document Number","Document Number")
				redrawPropsField(doc,id,"Revision Number","Revision Number")
				redrawPropsField(doc,id,"Project Name","Project Name")
				redrawPropsField(doc,id,"Author","Author")
				redrawPropsField(doc,id,"Create Date","Creation Date")
				redrawPropsField(doc,id,"Modify Date","Modification Date")
			}
		}
		outputTail(doc)
	}
}


//
// Instruction code
//
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
  if ( top_level.check_webview() ) {
	var st = 0
	if (typeof(top_level.instr.treebody) != "undefined") st = top_level.instr.treebody.scrollTop
	var doc = top_level.instr.document
	outputHead(doc,"instr")
	with (doc) {
		writeln("<body class='instr' id='treebody' onclick='if(window.event.srcElement.tagName==\"BODY\" || window.event.srcElement.tagName==\"TD\" ) top_level.unplayit()'>")
		if ( top_level.get_comments() ) {
			writeln("<span class='comment'>")
			write("<script LANGUAGE='JavaScript'>")
			write("document.write(top_level.print_comments());")
			writeln("</script>")
			writeln("</span><br>")
		}
		writeln("<span class='instr'>")
		writeln("<a href='../html/toc.html'>Return to Table of Contents</a>")
		writeln("</span><br><br>")
		writeln("<table border=0 cellspacing=0 cellpadding=0>")
		redrawInstr(instrList, doc)
	}
	outputTail(doc)
	top_level.instr.treebody.scrollTop = st
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
  if ( top_level.check_webview() ) {
	var st = 0
	if (typeof(top_level.instr.treebody) != "undefined") st = top_level.instr.treebody.scrollTop
	var doc = top_level.instr.document
	outputHead(doc,"instr")
	with (doc) {
		writeln("<body class='instr' id='treebody' onclick='if(window.event.srcElement.tagName==\"BODY\" || window.event.srcElement.tagName==\"TD\" ) top_level.deselectall()'>")
		if ( top_level.get_comments() ) {
			writeln("<span class='comment'>")
			write("<script LANGUAGE='JavaScript'>")
			write("document.write(top_level.print_comments());")
			writeln("</script>")
			writeln("</span><br>")
		}
		writeln("<span class='instr'>")
		writeln("<a href='../html/toc.html'>Return to Table of Contents</a>")
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

	doc.write("<tr><td valign=middle nowrap class='instr'>")
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
				doc.write("<tr><td nowrap class='instr'>")
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
		write("<A href='javascript:top_level.openBranch(" + treeNode.nodeId + ")'")
		if (treeNode.nodeOpen) {
			write("><img src='../icons/open.gif'")
		} else {
			write("><img src='../icons/closed.gif'")
		}
		write (" align=top border=0>")
		var sel = objectList[treeNode.nodeId].sel
		var hid = objectList[treeNode.nodeId].hid
		write ("<img id='i"+treeNode.nodeId+"' src='../icons/subasm"+(hid?"_hide":"")+".gif' align=top border=0>")
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

// called after this html file is loaded
function initializeTree()
{
	top_level.redrawProps(-1)
	if (top_level.instr) {
		objectTree.nodeOpen = 1
		top_level.instr.location = '../html/toc.html'
	} else {
		var t = top_level.gtv("aType")
		if (t == "part" || t == "sheetmetal") {
			// only show the properties if a part or sheetmetal
			top_level.redrawProps(top_level.gtv("aPartId"))
		}
	}
}
var objectTemplate = 0
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
	o.nodeIds=new Array
	var i
	for (i = 1; i < arguments.length - 1; i++) {
		o.nodeIds[i-1]=arguments[i]
		idToBOMid[arguments[i]]=arguments[1] // reverse map
	}
	o.BOMid = o.nodeIds[0]
	o.name=objectList[o.BOMid].name
	o.nodeLink=generateBOMEntry(o.BOMid,o.name,arguments[i])
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
	retString = "<A href='"+link+"' target=visuals_frame id='b"+id+"' onMouseOver=\'window.status=\"BOM "+docDescription+"\"; return true\' onMouseOut=\'window.status=\"\"; return true\'><img src='../icons/bompart.gif' alt='Select component' align=top border=0>"
	retString += "<span class='compname'>" + docDescription + "</span></a>"
	return retString
}

function redrawBOM()
{
  if ( top_level.check_webview() ) {
	var st = 0
	if (typeof(top_level.instr.bombody) != "undefined") st = top_level.instr.bombody.scrollTop
	var doc = top_level.instr.document
	outputHead(doc,"instr")
	with (doc) {
		writeln("<body class='instr' id='bombody' onclick='if(window.event.srcElement.tagName==\"BODY\" || window.event.srcElement.tagName==\"TD\") top_level.deselectall()'>")
		if ( top_level.get_comments() ) {
			writeln("<span class='comment'>")
			write("<script LANGUAGE='JavaScript'>")
			write("document.write(top_level.print_comments());")
			writeln("</script>")
			writeln("</span><br>")
		}
		writeln("<span class='instr'>")
		writeln("<a href='../html/toc.html'>Return to Table of Contents</a>")
		writeln("</span><br><br>")
		writeln("<table border=0 cellspacing=0 cellpadding=0 width=100>")
		redrawBOMNodes(objectBOM, doc, BOMsortfield, BOMdir)
	}
	outputTail(doc)
	top_level.instr.bombody.scrollTop = st
  }
}

// dumb sort for now
function sortBOM(BOM, field, dir)
{
	var len = BOM.length
	var i
	var strcmp = 0
	while (len > 1) {
		var index = 0
		var best = BOM[index][field]
		if (strcmp || typeof (best) == "string") {
			strcmp = 1
			best = best.toUpperCase ()
		}
		for (i = 1; i < len; i++) {
			var cur = BOM[i][field]
			if (strcmp) {
				cur = (cur + "").toUpperCase ()
			}
			if ((dir && (cur < best)) || (!dir && (cur > best))) {
				index = i
				best = cur
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

	sortBOM (BOM, sortfield, dir)

	displayBOMheadings (doc, sortfield, dir)

	for (i = 0; i < BOM.length; i++) {
		doc.write("<tr class='bomentry'><td valign=middle nowrap>")
		var sel = objectList[BOM[i].BOMid].sel
		if (sel) doc.write ("<b>")
		doc.write(BOM[i].nodeLink)
		if (sel) doc.write ("</b>")
		doc.writeln("</td><td align=center>", BOM[i].quant, "</td></tr>")
	}
}

function displayFieldHeading (doc, field, title, sf, sd)
{
	var s = field==sf
	var d = s?!sd:sd
	var c = s?" class='sortcol'":""
	var a = s?(sd?"&nbsp;&uarr;":"&nbsp;&darr;"):""

	doc.write("<th class='BOMName'><A href='javascript:top_level.changeSort(\"", field, "\",", d ,")'", c, ">", title, "</a>", a ,"</th>")
}


function displayBOMheadings(doc, sfield, sdir)
{
	doc.write("<tr class='BOMHeading'>")
	displayFieldHeading (doc, "name", "Name", sfield, sdir)
	displayFieldHeading (doc, "quant", "Quantity", sfield, sdir)
	doc.write("</tr>")
}


// Event handlers
//called when the user clicks on a heading
function changeSort(sortfield, sortdir)
{
	BOMsortfield = sortfield
	BOMdir = sortdir
	top_level.redrawBOM()
}

var objectBOM = 0
var BOMsortfield = "name"
var BOMdir = 0
var idToBOMid = new Array

generateBOM()
//-->

