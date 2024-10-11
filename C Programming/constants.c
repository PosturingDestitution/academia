/*
there are two types of constants: literal and symbolic constants

A constant without a decimal point is represented by the compiler as an integer number. Integer constants can be written in three different notations:
1. A constant starting with any digit other than 0 is interpreted as a decimal integer
2. A constant starting with the digit 0 is interpreted as an octal integer
3. A constant starting with 0x or 0X is interpreted as a hexadecimal constant

C has two methods for defining a symbolic contant: the #define directive and the const keyword. 

#define CONSTNAME reallylongnameidontwanttoretype
#define PI 3.14159265358979323846264338

The pecise action of the #define directive is to instruct the compiler as follows: "In the source code, replace CONSTNAME with literal."The effect is exactly the same as if you had used your editor to go through the source code and make the changes manually.

const int count = 100;
const float pi = 3.14159265358979323846264338
const long debt = 12000000, float tax_rate = 0.21;

The differences between the const keyword and the #define directive have to do with pointers and variable scope.

#define directive:
1. #define is handled by the C preprocessor. It performs a simple text substitution before the compilation begins. For example:
2. Since #define does not have a type associated with it, it doesn’t provide type checking. If you accidentally use it inappropriately, the compiler won't catch it.
3. The scope of a #define is global until it is undefined with #undef, which can lead to name clashes.
4. #define can also be used to create macros that take arguments, allowing for more complex definitions.

const keyword:
1. When using const, you can define a constant with a specific type.
2. A const variable occupies memory and has a specific storage duration. If you define a const variable, it can be used like any other variable (though its value cannot be changed).
3. The scope of a const variable is determined by where it is declared. It can be local to a function or file, reducing the risk of naming conflicts.
4. const can also be applied to pointers, allowing for more flexible and safe pointer usage.
*/

#include <stdio.h>

#define LAPS_PER_MILE 4

const int CURRENT_YEAR = 2024;

float miles_covered;
int laps_run, year_of_birth, current_age;

int main(){
    /*input data*/
    printf("How many laps did you run?");
    scanf("%d", &laps_run);
    printf("Enter your year of birth:");
    scanf("%d", &year_of_birth);
    
    /*perform conversions*/
    miles_covered = (float)laps_run/LAPS_PER_MILE;
    current_age = CURRENT_YEAR - year_of_birth;

    /*display results*/
    printf("\nYou ran %.2f miles.", miles_covered);
    printf("\nNot bad for someone turning %d this year!\n", current_age);
    return 0;
}