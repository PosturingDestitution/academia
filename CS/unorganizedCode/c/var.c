/*
what is size_t? 
    a data type defined in the standard library that is used to represent the size of objects in bytes. It is commonly used for array indexing and loop counting, as well as in functions that deal with memory allocation, such as malloc and sizeof. size_t is an unsigned integer type, which means it can only represent non-negative values. This makes sense since sizes and lengths cannot be negative. The actual size of size_t can vary depending on the platform and the architecture (32-bit vs. 64-bit systems). On a 32-bit system, it is usually a 32-bit unsigned integer, while on a 64-bit system, it is typically a 64-bit unsigned integer. <stddef.h>: size_t is defined in the <stddef.h> header file, and it's often used in conjunction with functions from the C standard library.

what is a global variable?
    Global variables are declared outside of any function, typically at the top of a file. They can be accessed from any function within the same file (and potentially from other files if declared with extern). The scope of a global variable is the entire program, meaning any function can read or modify its value. The lifetime of a global variable is the duration of the program's execution. They are created when the program starts and destroyed when it ends.

what is a local variable?
    Local variables are declared within a function or a block (like a loop or conditional statement). They can only be accessed within that function or block. The scope of a local variable is limited to the function or block where it is defined. Other functions cannot access it. The lifetime of a local variable is limited to the duration of the function call. They are created when the function is called and destroyed when the function exits.
*/
//Demonstration of Local Variables
#include <stdio.h>

int x = 1, y = 2;

void demo(void);

int main(){
    printf("\nBefore calling demo(), x= %d and y = %d.", x, y);
    demo();
    printf("\nAfter calling demo(), x= %d and y = %d.", x, y);
    return 0;
}

void demo(void){
    /*Declare and initialize two local variables*/
    int x = 88, y = 99;
    printf("\nWithin demo(), x = %d and y = %d.", x, y);
}