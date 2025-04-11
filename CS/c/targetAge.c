/*
program to calculate what year someone will turn a specific age
*/

#include <stdio.h>
#define TARGET_AGE 76

/*
The #define keyword in C is a preprocessor directive used to define macros. Macros are essentially constants or expressions that the preprocessor replaces in the code before compilation. Using named constants instead of magic numbers makes code easier to read and maintain. If you need to change a value, you only have to update it in one place. You can use #define in conjunction with #ifdef and #ifndef to include or exclude parts of code based on whether a macro is defined. Macros are replaced literally, so there's no type checking. Be careful with complex expressions. Macros are global and will remain defined until the EOF or until they are undefined using #undef. Using #define effectively can improve your code's clarity and maintainability
*/

int year1, year2;

int calcYear(int year1);

/*
A function prototype in C is a declaration of a function that specifies its name, return type, and parameters, but does not include the body of the function. It serves as a forward declaration, informing the compiler about the function's signature before its actual implementation is encountered in the code. It allows the compiler to check the types of arguments passed to the function and ensure that they match the expected types. You can define functions after the main function or in a separate file, promoting better organization and modular programming. It serves as documentation for the function, making it clear what the function does, what parameters it takes, and what it returns.
*/

int main(void){
    printf("What year was the subject born? ");
    printf("Enter as a 4-digit year (YYYY): ");
    scanf(" %d", &year1);

    year2 = calcYear(year1);

    printf("Someone born in %d will be %d in %d.", year1, TARGET_AGE, year2);
    return 0;
}

int calcYear(int year1){
    return(year1+TARGET_AGE);
}