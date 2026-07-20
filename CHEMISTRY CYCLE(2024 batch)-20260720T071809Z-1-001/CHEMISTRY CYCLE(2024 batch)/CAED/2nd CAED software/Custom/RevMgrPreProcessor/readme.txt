Program Name : PreProcessor (PreProcess10.1.EXE)
Date Created : 5/01/01
Last Modified: 5/01/01
Required: Visual Basic 6.0, SP2

Description
-----------
The purpose of this macro is to extract unresolved link information from a directory of Solid Edge files.

It runs standalone and uses API from Revision Manager.

This macro can act as a front end to Redefine Links in SE-Accessories to inform the user of which Solid Edge documents
have missing links and what the absolute path is that cannot be resolved because the file is missing or has
been moved to a new location.
 


Operation
---------
	o Run the macro PreProcess10.1.exe
	  - Specify file types to Process (.par,.psm,.asm,.pwd,.dft)
	  - Supply a directory which contains asm files in it or in subdirectories
	  - Results are written to text files in C:\temp
	  	- BatchResults.txt - gives complete set of results for all files processed
		- BatchErrorDetails.txt - gives complete details of problem files
		- BatchMissingLinks.txt - gives list of files identified as having unresolved links
		- BatchWriteProtectedFiles.txt - gives list of files that are write protected

Development Notes and Known Problems
------------------------------------
- assumption is c:\temp exists
- the file BatchMissingLinks can be used as input to the Redefine Links command. For example, if you process
  a directory (and it's subdirectories), and those directories contain 3,000 asm files, the results of this
  macro will come back and identify only those asm file with unresolved links. BatchMissingLinks.txt will
  contain this list of files. So if the results of this macro showed only 100 asm files with unresolved links
  use the text file as input to Redefine Linksand you can process only those 100 files instead of the 3,000
  files in the directories.