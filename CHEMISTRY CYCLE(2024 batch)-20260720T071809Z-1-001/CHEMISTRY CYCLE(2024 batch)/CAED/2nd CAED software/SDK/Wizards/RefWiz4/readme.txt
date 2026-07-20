The custom application wizard contained in this directory is used to generate MFC based ole for design and 
manufacturing projects using MicroSoft VC++ 4.2.

In order for the wizard to appear as a choice in your VC++ "new project" dialog, you must copy the .awx and .hlp files
to your msdev\template directory. Once copied, simply run msdev and invoke the "new file" command from the IDE. From
there, select "project" as the type. You should see the "Ole for DM" app wizard in the list of wizards. From there,
your DM project is only a few clicks away! Make sure you choose some type of containment, otherwise, the project
generated will be identical to one using the normal mfc app wizard.