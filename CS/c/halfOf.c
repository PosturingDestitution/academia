/*
If you're going to write a structured program, you need to do some planning first. This planning should take place before you write a single line of code, and it usually can be done with nothing more than pencil and paper. Your plan should be a list of the specific tasks your program performs. Begin with a global idea of the program's function. If you were planning a program to manage your contacts (a list of names and addresses), what would you want the program to do?

    enter new names and addresses
    modify existing entries
    sort entries by last name 
    print mailing labels 
    ect.

you can further subdivide say the "Enter new names and addresses" task

    read the existing address
    prompt the user for one or more new entries
    add the new data to the list
    save the updated list to disk

likewise, the "modify existing entries" task can be subdivided as follows:

    read the existing address list from disk
    modify one or more entries
    save the updated list to disk

By using structured programming, C programmers take the top-down approach.

Process memory:
    text (the code)
        The text segment (or code segment) contains the compiled code of the program. This is where the instructions that the CPU executes reside. It is usually read-only to prevent modification during execution, which helps protect against certain types of attacks (e.g., injecting malicious code). It is typically loaded into memory when the program starts.

    call stack (local variables)
        The call stack is a data structure that stores information about active subroutines (functions) of a program. Each time a function is called, a new stack frame is pushed onto the stack. This frame contains the function’s local variables, parameters, and return address. When the function exits, its stack frame is popped off the stack. The stack operates in a LIFO manner, meaning the last function called is the first one to return. Stack overflow can occur if too much memory is used (e.g., from deep recursion).

    heap (everything else)
        The heap is a region of memory used for dynamic memory allocation, where variables can be allocated and freed in an arbitrary order. Unlike the stack, memory on the heap persists until it is explicitly freed, allowing for more flexible memory management. It is used for objects whose size may not be known at compile time or for data that needs to persist beyond the lifetime of a function call. Memory management in the heap is typically more complex than in the stack, often requiring manual allocation and deallocation (e.g., using malloc and free in C/C++).

    data segment
        This segment contains global and static variables that are initialized by the programmer. The data segment is further divided into initialized and uninitialized sections (also called BSS). Initialized variables have a specific value at startup, while uninitialized variables default to zero.

memory layout overview
+-------------------+
|     Stack         |  <- Grows downward
+-------------------+
|     Heap          |  <- Grows upward
+-------------------+
| Data Segment      |
| - Initialized     |
| - Uninitialized   |
+-------------------+
| Text Segment      |
+-------------------+

additional concepts: memory managment, segmentation, virtual memory

NOTE: including .c files directly is not a best practice in a professional project typically you will write a header file that saves what you want to expose from your .c file...and then you would link in the compiled (.o?) .c file directly

NOTE: a parameter is an entry in a function header; it serves as a "placeholder" for an argument. A function's parameters are fixed; they do not change during program execution. An argument is an actual value passed to the function by the calling program. Each time a function is called, it can be passed different arguments. In C, a function must be passed the same number and type of arguments each time it's called, but the argument values can be different. In the function, the argument is accessed by using the corresponging parameter name.
*/
#include <stdio.h>

float x = 3.5, y = 65.11, z;

float half_of(float k);

int main(){
    //In this call, x is the argument to half_of()
    z = half_of(x);
    printf("The value of z = %f\n", z);
    
    //y is the argument
    z = half_of(y);
    printf("The value of z = %f\n", z);
    
    // z is the argument
    z = half_of(z);
    printf("The value of z = %f\n", z);
    
    return 0;
}

float half_of(float k){
    /*
    k is the parameter. Each time half_of() is called, k has the value that was passed as an argument
    */
    return(k/2);
}
/*
Structured programming is a programming paradigm that emphasizes the use of well-defined control structures and the clear organization of code. It aims to improve the clarity, quality, and efficiency of software development by promoting:

    Control Structures: The use of three main control structures—sequence, selection, and iteration (or loops)—to dictate the flow of the program. This reduces the reliance on arbitrary jumps (like goto statements), leading to more predictable and maintainable code.

    Modularity: Breaking down a program into smaller, manageable modules or functions. Each module performs a specific task, which helps in organizing code logically and makes it easier to understand and maintain.

    Top-Down Design: This approach involves starting with a high-level overview of the program and progressively refining it into detailed implementations. It encourages planning and helps ensure that all parts of the program work together cohesively.

    Clear and Readable Code: Emphasizing the use of clear naming conventions, indentation, and comments to enhance the readability of the code, making it easier for developers to understand and modify.
*/