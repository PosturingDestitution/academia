/*
Demonstrates function recursion. Calculates the factorial of a number

Recursion is a programming technique where a function calls itself to solve a problem. It typically involves breaking down a problem into smaller, more manageable subproblems. A recursive function continues to call itself until it reaches a base case, which stops the recursion.

Direct recursion occurs when a function directly calls itself within its own body. This is the most common form of recursion.

Indirect recursion occurs when a function calls another function, which in turn calls the first function. This creates a cycle of function calls between two or more functions.

NOTE: 
x! = x * (x-1) * (x-2) * ... * 2 * 1
x! = x * (x-1)!
x! = x * (x-1) * (x-2)!
.
.
.
1 and 0 factorial = 1

what is an inline function?
    An inline function is a function in programming that is defined with the intention of being expanded in line at the point of call, rather than being invoked through the normal function call mechanism. This can reduce the overhead of function calls, as it eliminates the need for pushing parameters onto the stack and jumping to the function code.
    
    Inline functions are commonly used in C and C++ programming. The inline keyword suggests to the compiler that it should replace the function call with the actual function code during compilation, although the compiler can choose to ignore this suggestion.
    
    Performance: Reduces function call overhead, which can be significant in small, frequently called functions.
    Code Optimization: The compiler can optimize the code better when it knows the function's body at compile time.

    inline int add(int a, int b) {
    return a + b;
    }
    int result = add(5, 3); // May be replaced with result = 5 + 3; during compilation.

How would you make a compiler?
    1. Define the Language
        Syntax: Define the grammar of your programming language. This includes keywords, operators, and structure (e.g., expressions, statements, and control flow).
        Semantics: Decide what each construct means and how it should behave.
    2. Create a Lexer (Lexical Analyzer)
        - The lexer breaks the source code into tokens, which are the basic building blocks (keywords, identifiers, literals, symbols).
        - Use regular expressions to define the patterns for different token types.
        - Output a list of tokens for the parser.
    3. Build a Parser
        - The parser takes the list of tokens produced by the lexer and constructs a syntax tree (abstract syntax tree, or AST).
        - Use a parsing technique (e.g., recursive descent, LL, or LR parsing) to handle the grammar of the language.
    4. Semantic Analysis
        - Traverse the AST to check for semantic errors (e.g., type checking, variable declaration before use).
        - Annotate the tree with type information or other relevant details.
    5. Intermediate Representation (IR)
        - Convert the AST into an intermediate representation, which is easier to manipulate and optimize than the original code.
        - This can be a lower-level representation, similar to assembly code.
    6. Optimization
        - Optimize the IR to improve performance, such as constant folding, dead code elimination, and loop optimizations.
    7. Code Generation
        - Translate the IR or optimized code into the target language (e.g., machine code or assembly).
        - This involves generating instructions for the target architecture.
    8. Error Handling
        - Implement error handling at each stage (lexer, parser, semantic analysis) to provide meaningful feedback.
    9. Testing
        - Create a suite of test cases to ensure that your compiler works as expected.
        - Test various aspects of the language, including edge cases and error conditions.
    10. Build Tools
        - Optionally, create build tools for compiling your language, such as a command-line interface or an integrated development environment (IDE) plugin.

How was the c compiler made?
    Bootstrapping Process
        1. Initial Compiler
            - In the early days, a simple version of the compiler could be written in another language, or even in assembly, which can directly interact with the machine.
            - For example, the first version of the C compiler was often written in assembly language.
        2. Cross-Compilation
            - Sometimes, developers use a different language or a different platform to write the initial version of the compiler. This is known as cross-compiling.
            - Once a basic C compiler is implemented in another language, it can compile C code into machine code.
        3. Self-Hosting
            - Once you have a simple compiler that can compile C code, you can use it to compile more complex versions of itself.
            - This means that after the initial version is working, you can enhance it using the very same language it compiles (C in this case).
            - Over time, you refine and add features to the compiler until it becomes fully functional.
    Steps in More Detail
        1. Write a Simple Compiler
            - Create a basic version that can handle a subset of C or even a simplified language inspired by C.
            - This version may be written in assembly or another language.
        2. Compile and Test
            - Use this initial compiler to compile simple C programs to verify that it works correctly.
        3. Rewrite the Compiler in C
            - Once you have a functioning compiler, you can write a more complete version in C.
            - This new version can now compile itself.
        4. Iterate
            - Use the new compiler to compile itself and iterate on improvements, optimizations, and feature additions.
            - Over time, the self-hosting compiler becomes robust enough to handle the full C language.
*/

#include <stdio.h>

unsigned int f, x;

unsigned int factorial(unsigned int a);

void clearInputBuffer(){
    int c;
    while((c = getchar()) != '\n' && c != EOF); //keep reading input from stdin until \n or EOF
}

int main(){
    while(1){
        puts("Enter an integer value (1 <= x <= 12):");
        if(scanf("%d", &x) == 1 && ((x >= 1) + (x <= 12)) == 2){
            f = factorial(x);
            break;
        }
        else{
            printf("Please enter valid input!\n");
            clearInputBuffer();
            continue;
        }
    }    printf("The factorial of %u is: %u\n", x, f);
    return 0;
}

unsigned int factorial(unsigned int a){
    if(a == 1)
        return 1;
    else{
        a *= factorial(a-1);
        return a;
    }
}

/*
an int is 4 bytes here so ... 2^32 = 4,294,967,296
When a stack overflow occurs, several things can happen in memory:
    1. Stack Growth and Limits
        - Stack Memory: The stack is a region of memory used for storing local variables, function parameters, and return addresses. Each function call pushes a new frame onto the stack.
        - Overflow: If a program uses too much stack space (e.g., through deep recursion without a base case), it can exceed the allocated stack size. This typically leads to a stack overflow.
    2. Crash or Termination
        - Runtime Error: Most programming environments have built-in protections. If the stack overflows, the operating system or runtime environment detects this condition and typically terminates the program.
        - Segmentation Fault: The operating system might raise a segmentation fault (SIGSEGV) or similar error. This occurs when the program tries to access memory outside the allocated stack area.
    3. Corruption of Stack Memory
        - If the program does not handle stack overflow gracefully, it could lead to memory corruption, where the program overwrites adjacent memory areas. This could cause unpredictable behavior, crashes, or data loss.
    4. Debugging Difficulties
        - Diagnosing a stack overflow can be challenging. The symptoms might not appear immediately, and the stack trace (which helps in debugging) might be incomplete or misleading.
    5. Impact on Other Parts of the Program
        - In cases where stack memory is shared or improperly managed, a stack overflow could affect other parts of the program, leading to erratic behavior elsewhere.
*/