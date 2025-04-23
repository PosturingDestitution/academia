/*
what does the extern keyword do in c?
	it is used to declare a variable or function that is defined in another file or elsewhere in the program, allowing the compiler to know about its existence without defining it again.
	so this file and another file named extern2.c will be linked

what is linking?
	linking is the process of combining multiple object files (which are produced by compiling source files) into a single executable

linking can happen in two phases:
	1. compilation: each c source file (.c) is compiled separately into an object file (.o or .obj), where the compiler translates the code into machine code but does not resolve all references (like variable or function calls from other files)
	2. linking: the linker takes all the object files and resolves any external references (e.g., variables and functions declared with extern) by connecting them to the correct locations in the object files or libraries


how does extern relate to linking?
	when you use the extern keyword, you're telling the compiler that a variable or functions exists somewhere else. the compiler does not allocate space for it or generate code for it; instead, it leaves a placeholder. the linker will then resolve this placeholder by finding the actual definition during the linking phase

gcc -c file1.c will produce an object file
gcc -c file2.c 

gcc file1.o file2.o -o my_program linking the object file to produce the executable

during the linking phase, the linker resolves the references to x and printMessage from file1 by connecting them to the definitions in file2.o...after linking, the program can access the variable x and call the function printMessage() properly
*/

#include <stdio.h>

int x = 10;

void printMessage(){
	printf("Hello from extern.c\n");
}
