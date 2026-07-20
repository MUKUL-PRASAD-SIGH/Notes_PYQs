-------------------
Version Information
-------------------
Product:        Chnglcl.exe       
Version:        4
Date:           25-November-2002
Description:    Set Document CreationLocale Property


The Set Document CreationLocale utility allows you to change the CreationLocale property of Solid Edge documents.  Solid Edge documents have a CreationLocale property to prevent the documents from having incompatible locale-specific data written to them.  Solid Edge will not let you save data from one locale in a file that was created in another locale.  While this preserves users' data from accidental corruption, it is also an obstacle to sharing Solid Edge documents.  The Set Document CreationLocale utility was written to help overcome this obstacle.

The main purpose of the utility is to allow the Solid Edge files that are created to support Tutorials to be distributed to non-English-speaking customers.  The utility allows localizing teams to change the CreationLocale property of Solid Edge files to any language.

It should be noted that you can safely change the CreationLocale of Solid Edge documents originally created on ENGLISH operating systems to any other language, because all Windows operating systems recognize English character data.  However, this level of compatibility does not exist between all other languages.  Therefore, you should not use this utility, for example, to allow Japanese and Polish data to be written to the same document.  Most importantly, you should never use this utility to change the CreationLocale property from a double-byte language to a single-byte language.  The originally intended use of the utility was to change the CreationLocale property of Solid Edge Training files from English to other languages.  You may corrupt your Solid Edge documents if you use it for any other purpose.

___________________
Running The Utility
===================

Run chnglcl.exe

On the Changle Locale dialog box, set the Look In options to specify either an individual file or a folder when you want to localize all Solid Edge files.

In the Files area, either select the option to process all files in a folder and then specify a log file, or select the option to process only one file, and ensure you have chosen a file from the Look In area.  With the folder option, you can also optionally process subfolders.

Select a new CreationLocale property.

Click Process.

The utility launches the Solid Edge File Properties automation client in the background, opens the document(s), changes the CreationLocale property to the new value, closes the file(s), and closes the Solid Edge File Properties automation client.  If any errors are encountered, the utility terminates with an error message.  Otherwise, a message is displayed when the new CreationLocale property has been written to the target file.  If you process multiple files, the log file reports each file processed, the new CreationLocale property value, and any errors encountered.
