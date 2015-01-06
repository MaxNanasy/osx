OS X source packages imported to GitHub
---------------------------------------

This repo contains an unofficial GitHub-import of the OS X source packages from http://opensource.apple.com/

New source releases are imported automatically as they are published on http://opensource.apple.com/

Which source package contains the source for OS X binary X?
-----------------------------------------------------------

Use the OS X `what` command to find out in which source package a certain binary can be found.

Example: Where can I find the source to `ls`?

    $ what /bin/ls
    /bin/ls
    	 Copyright (c) 1989, 1993, 1994
    	PROGRAM:ls  PROJECT:file_cmds-242

The source for the `ls` command can be found in the <a href="https://github.com/practicalswift/osx/tree/master/src/file_cmds">`file_cmds`</a> source package.
