/*
Demonstrates the evaluation of relational expressions

NOTE: DON'T use the "not equal to" operator (!=) in an if statement containing an else. It is almost always clearer to use the "equal to" operator (==) with an else.

if (x != 5) 
    statement 1;
else 
    statement 2;

this is worse than this

if (x == 5)
    statement 2;
else
    statement 1;

do that^

Operator precedence revisited
1 () [] -> .
2 ! ~ ++ -- * (indirection) & (address of) (type)
sizeof + (unary) - (unary)
3 * (multiplication) / %
4 + -
5 << >>
6 < <= > >=
7 == !=
8 & (bitwise AND)
9 ^
10 |
11 &&
12 ||
13 ?:
14 = += -= *= /= %= &= ^= |= <<= >>=
15 ,

Remember anything that evaluates to a numeric value is an expression

A unary op operates on one operand
most ops in c are binary
the conditional op is ternary
*/

#include <stdio.h>

int a;

int main(){
    a = (5 == 5);
    printf("\na = (5 == 5)\na = %d", a);
    
    a = (5 != 5);
    printf("\na = (5 != 5)\na = %d", a);

    a = (12 == 12) + (5 != 1);
    printf("\na = (12 == 12) + (5 != 1)\na = %d\n", a);
    return 0;
}