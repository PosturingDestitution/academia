/*
A function is named: Each function in C has a unique name that identifies it. This name is used to call the function from other parts of the program. For example, if you have a function called calculateSum, you can invoke it by using that name.

A function is independent: Functions are designed to be modular and self-contained. This means that a function can operate independently of the rest of the program, as long as it receives the required inputs (parameters) and can produce its output (return value). This independence promotes code reuse and easier debugging.

A function performs a specific task: Functions are created to accomplish a particular job or computation. For instance, a function might be responsible for calculating the average of a set of numbers or sorting an array. By focusing on a single task, functions help make the code more organized and readable.

A function can return a value to the calling program: Many functions in C can return a value after completing their task. The return type of the function (such as int, float, char, etc.) is specified in its definition. For example, if a function computes the sum of two integers, it can return that sum as an integer to the part of the program that called it. Functions that don’t return a value are defined with the return type void.

These characteristics make functions a fundamental concept in C programming, promoting modularity, reusability, and clarity in code design.

Modularity: Modularity refers to the design principle of breaking down a program into smaller, manageable, and self-contained units or modules (often functions or classes). Each module handles a specific aspect of the program’s functionality. This approach makes it easier to understand, develop, and maintain the program since changes to one module do not necessarily impact others.

Reusability: Reusability is the concept of designing code components (like functions or classes) that can be used in multiple programs or in different parts of the same program without modification. By creating reusable components, developers can save time, reduce redundancy, and improve efficiency, as they can leverage existing code rather than writing new code from scratch.

Clarity: Clarity in programming refers to how easily the code can be understood by others (or by the original developer after some time). Clear code is well-structured, uses meaningful names for variables and functions, and is adequately documented with comments. Clarity helps improve collaboration among team members, facilitates easier debugging, and enhances maintainability over time.

why function prototypes?

Type Checking: Function prototypes allow the compiler to check the types of arguments passed to functions and the type of the return value. This ensures that the function is called with the correct number and types of arguments, helping to catch errors during compilation rather than at runtime.

Forward Declaration: Prototypes enable the definition of functions to be placed after their usage in the code. This means you can call a function before its full definition appears, making it easier to organize code. Without prototypes, the function must be defined before it is called.

Improved Readability: Prototypes provide a clear declaration of the function’s interface, making it easier for programmers to understand how to use the function without needing to read its entire implementation. This enhances code clarity and helps in collaboration among team members.

Avoiding Implicit Declarations: In C, if a function is called without a prior prototype, the compiler assumes an implicit declaration, which can lead to unexpected behavior if the actual function has a different signature. Prototypes prevent this by ensuring that the function’s signature is known beforehand.

Encapsulation of Implementation: By separating the declaration (prototype) from the implementation (definition), you can change the implementation of a function without affecting the code that calls it, as long as the prototype remains the same. This supports modularity and maintainability.
*/

#include <stdio.h>

long cube(long x); //function prototype

void clearInputBuffer(){
    int c;
    while((c = getchar()) != '\n' && c != EOF); //keep reading input from stdin until \n or EOF
}

long input, answer; // -2,147,483,648 to 2,147,483,647

int main(){

    while(1){
        printf("Enter an integer value (-100 <= x <= 100):");
        if(scanf("%ld", &input) == 1 && input >= -100 && input <= 100){
            break;
        }
        else{
            printf("Please enter valid input!\n");
            clearInputBuffer();
            continue;
        }
        
    }
    answer = cube(input);
    printf("\nThe cube of %ld is %ld.\n", input, answer);
    
    return 0;
}

long cube(long x){ 
    long x_cubed;
    x_cubed = x * x * x;
    return x_cubed;
}

/*
if larger values of x were allowed you may consider checking for overflow here...checking for overflow in the cube function is a defensive programming technique that enhances the reliability, safety, and user experience of the program. It ensures that the calculations remain valid and helps prevent unexpected behavior or errors at runtime.

Defensive programming is about being proactive rather than reactive. By implementing these practices, developers can create more resilient software that can handle unexpected situations gracefully, leading to a better overall experience for users and developers alike.

Input Validation: Always validate inputs to functions and methods. This includes checking for expected data types, ranges, and formats to prevent incorrect values from causing errors later in the code.

Graceful Degradation: Implement error handling to manage exceptions or unexpected conditions without crashing the program. This could involve returning error codes, throwing exceptions, or providing user-friendly error messages.

Document Assumptions: Clearly document any assumptions about the input or state of the program. Use assertions to enforce these assumptions during development, making it easier to catch violations early.

Use Safe Functions: Opt for functions and practices that minimize risks (e.g., using safer alternatives for string manipulation that prevent buffer overflows).

Encapsulation: Break the code into smaller, well-defined functions or modules. This limits the impact of errors and makes it easier to isolate and fix issues.

Implement Logging: Use logging to track the program's state and errors. This helps in diagnosing issues when they occur, providing insight into what went wrong.

Comprehensive Testing: Write unit tests, integration tests, and use test-driven development (TDD) to verify that your code behaves as expected under various conditions, including edge cases.
*/