#include <stdio.h> // necessary to "include" information about
                   // C's standard I/O library

int main(void) {   // Executable code goes inside main
    printf("To C, or not to C: that is the question.\n");
    return 0; // Program returns 0 to the OS when it terminates
}

// To compile:
//      1. preprocessing; program is given to a preprocessor
//      - which obeys commands that begin with # ("directives")
//      - preprocessor can add things/modify the program
//      2. compiling; modified program given to a compiler
//      - translates it into machine instructions (object code)
//      3. linking; a linker combines the object code with
//      - any other code needed to yield a complete exe
//      - additional code includes library functions like
//      - printf that are used in the program

// above is usually automated; preprocessor is integrated with compiler
// use wsl/linux: cc pun.c 
// linking is automatic using cc.

// cc then leaves an exe in a file named a.out by default.
// -o flag on cc allows us to choose tha name of the file 
// containing the exe. so we could say cc -o pun pun.c

// you can also use gcc this is the one we learned in school very similar

// so:
//      gcc -o pun pun.c
//      ./pun

// the ./ is important otherwise it's gonna look in system path not this folder
// also remember to do cd chapter-2 if ur in root otherwise it won't find it

//salmabaig@rogzephyrus:/mnt/c/Users/salee/OneDrive/Documents/GitHub/c-modern-approach$ gcc -o pun pun.c
//cc1: fatal error: pun.c: No such file or directory
//compilation terminated.
//salmabaig@rogzephyrus:/mnt/c/Users/salee/OneDrive/Documents/GitHub/c-modern-approach$ cd chapter-2
//salmabaig@rogzephyrus:/mnt/c/Users/salee/OneDrive/Documents/GitHub/c-modern-approach/chapter-2$ gcc -o pun pun.c
//salmabaig@rogzephyrus:/mnt/c/Users/salee/OneDrive/Documents/GitHub/c-modern-approach/chapter-2$ ./pun
//To C, or not to C: that is the question.
//salmabaig@rogzephyrus:/mnt/c/Users/salee/OneDrive/Documents/GitHub/c-modern-approach/chapter-2$ 