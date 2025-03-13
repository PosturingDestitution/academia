/*
statement - a complete instruction that directs the computer to carry out some task. these usually end with a semicolon except for #define and #include for example x = 2 + 3;
expression - 
operators

c does not care about whitespace unless inside a string literal like "How now brown      cow"

the following is not legal:
printf("Hello,
world!");

the following is legal:
printf("Hello, \
world!");

If you place a semicolon by itself on a line, you create a null statement...a null statement is one that does not perform any action...this might be useful for the following reasons:
1. You can use a null statement as a temporary placeholder while you are developing code. This allows you to structure your program without implementing all the logic right away.

2. A null statement is useful in loops when you want to iterate without executing any code inside the loop body.

3. You might use a null statement in a conditional statement if you want to indicate that no action is required for a particular case.

4 Sometimes, you may want to include a null statement during the initialization phase of a program, especially when using an expression for side effects. int a = (b > 0) ? (c = 1) : (void) 0;

The ternary operator is a shorthand for an if-else statement and has the following syntax:
condition ? expression_if_true : expression_if_false;

5. Including a null statement can improve readability in certain situations, making it clear that the intention is to do nothing in that part of the code.

A compund statement, also called a block, is a group of two or more C statements enclosed in braces.

complex expression - "1.25 / 8 + 5 * rate + rate * rate / cost"

Assignment operator - "variable = expression" others include
    +=, -=, *=, /=, %=, &=, |=, ^=, <<=, >>=

Mathematical operators - + - * / %
    there are prefix and postfix unary operators like ++x, x++, --x, x--
    prefix form - alters the value and then returns the new value
    postfix form - returns the current value and then alters it

Relational operators - == != > < >= <=

Logical operators - && || ! 

Bitwise Operators - & (bitwise AND), | (bitwise OR), ^ (bitwise XOR), ~ (bitwise NOT), << (Left shift), >> (Right shift)

Miscellaneous Operators - ? : (ternary), and sizeof()
*/

#include <stdio.h>

int a, b;

int main(){
    a, b = 0;
    printf("a and b are set to 0.\nI am going to use the prefixform on a, and the postfix form on b.\n");
    printf("a is %d and b is %d\n", ++a, b++);
    printf("a is %d and b is %d\n", ++a, b++);
    printf("a is %d and b is %d\n", ++a, b++);
    printf("a is %d and b is %d\n", ++a, b++);
    printf("a is %d and b is %d\n", ++a, b++);
    printf("a is %d and b is %d\n", ++a, b++);
    printf("one final print to check the current values... a is %d and b is %d", a, b);
    return 0;
}