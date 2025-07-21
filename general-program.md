generalizing the program pun.c; simple c programs have the form...

```
directives

int main(void){
    statements
}
```

three key language features that even simple c programs rely on:
- directives: editing commands that modify the program prior to compilation
- functions: named blocks of executable code of which main  is an example
- statements: commands to be performed when the program  is run

## Directives
- commands intended for the preprocessor
- always begin with a `#`
- one line long by default
- no special marker at the end like a semicolon or something

`#include` is a directive.

`#include <stdio.h>` states that the information in `<stdio.h>` needs to be "included" into the program before it is compiled.
- C has no built in read/write commands
- I/O is provided by functions in the standard library

## Functions
- procedures/subroutines
- two categories: those written by the programmer, those provided as part of the C implementation ("library functions" which belong to a library of functions supplied by the compiler)
- in C a function is a series of statements that have been grouped together and given a name
  - some compute a value, some don't
  - if a cunction computes a value it uses a return statement to specify what value it returns
- only the `main` function is mandatory.
  - called automatically when program is executed
  - needs to be named exactly `main`
- `main` returns a value
  - status code that is given to the OS when the program terminates
  - ex. `int main(void)` -> 
    - `int` specifies that it'll return an integer
    - `void` specifies it has no arguments 
    - `return 0` causes main to terminate and also indicates it returns a value of 0
      - for now main will always return 0 but we'll learn more later
    - no return statement at the end of main? program will still terminate
      - will cause many compilers to produce a warning
      - expected int return but got nothing

## Statements
- command to be executed when  the program runs
- `pun.c` uses two kinds of statements:
  - `return`
  - function call of `printf`
- C requires each statement to end with a semicolon
- One exception: compound statement (will see later)

- Statements need semicolons to tell the compiler where they end; they can be many lines long
- for the same reason directives don't need it cuz they're usually one line

## Printing Strings
- `printf` we have only used so far to display a string literal (series of characters enclosed in double quotes)
- `printf` does not automatically advance to the next output line when it finishes printing
- need to use `\n` to get a newline 

You could replace 
`printf("To C, or not to C: that is the question.\n");`
with
`printf("To C, or not to C: ");`
`printf("that is the question.\n");`
and it would look identical in output

You can put `\n` wherever ya want many times in a string literal if needed. 