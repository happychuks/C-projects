/*
To create a static library:
- compile the files containing functions to object file (.o) 
    -   gcc -c <filename.c> -o <filename.o>
- bundle these object files into an archive (.a) 
    - ar rcs sampleLib.a <filename.o>
- link the library to your code containing the main functions
    -   gcc <filename.o> <sampleLib.a> -o <filename> 
    or
    -   gcc <filename.o> -L. -l<Libfilename> -o <filename>
run your program ./<filename>
*/