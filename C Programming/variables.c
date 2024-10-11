/*
This program will tell you the size of the variable types in memory for your architecture/compiler

Integer variables are signed by default
What does it mean to be signed or unsigned?
In programming, especially in languages like C, the terms signed and unsigned refer to how integer types represent values, particularly concerning negative numbers.

Signed integers can represent both positive and negative values. 4 bytes = 4 * 8 bits = 32 bits typically the Most Significant Bit (MSB) is used for the sign (positive or negative). so -2^31 to 2^31 - 1 

Why does the negative range not have -1 but the positive range does?
well if you added one you would roll over from 2^31 - 1 = 01111111 11111111 11111111 11111111 (2,147,483,647) to the bottom -2^31 10000000 00000000 00000000 00000000(-2,147,483,648)

The minimum value, -2^31, is the lowest number you can represent in a signed 32-bit integer because the two's complement representation allocates one bit for the sign and 31 bits for the value

-1 = 11111111 11111111 11111111 11111111
-2^31 (or -2,147,483,648) is = 10000000 00000000 00000000 00000000

we can think of the magnitude as being represented by flipping the bits and adding 1 so 
10000000 00000000 00000000 00000000
01111111 11111111 11111111 11111111 + 1 = 10000000 00000000 00000000 00000000

why two's complement?
00000000 00000000 00000000 10000000 = 128
11111111 11111111 11111111 011111111
11111111 11111111 11111111 10000000 = -128

In the context of binary numbers, the term "complement" refers to flipping the bits. Specifically, the one's complement of a binary number is created by changing all 0s to 1s and all 1s to 0s.

To obtain the two's complement, you take the one's complement of a number and then add 1 to it. This process effectively allows you to represent negative numbers in binary.
*/

#include <stdio.h>

typedef int thisisanInteger; 
thisisanInteger a = 10;
/*
The typedef keyword in C (and C++) is used to create new type names (or aliases) for existing data types. This can improve code readability and make it easier to manage complex data types.
*/

int main(void){ 
    printf("test %d\n", a);
    printf("A char is %d bytes\n", sizeof(char));
    printf("A int is %d bytes\n", sizeof(int));
    printf("A short is %d bytes\n", sizeof(short));
    printf("A long is %d bytes\n", sizeof(long));
    printf("A long long is %d bytes\n", sizeof(long long));
    printf("An unsigned char is %d bytes\n", sizeof(unsigned char));
    printf("An unsigned int is %d bytes\n", sizeof(unsigned int));
    printf("An unsigned short is %d bytes\n", sizeof(unsigned short));
    printf("An unsigned long is %d bytes\n", sizeof(unsigned long));
    printf("An unsigned long long is %d bytes\n", sizeof(unsigned long long));
    printf("A float is %d bytes\n", sizeof(float));
    printf("A double is %d bytes\n", sizeof(double));
    printf("A long double is %d bytes\n", sizeof(long double));
    return 0;

/*
When a program exits, the operating system can read this exit status. This allows shell scripts and other programs to check the success or failure of the executed program and handle it accordingly. Using this convention helps maintain consistency and allows better error handling in larger applications or scripts that depend on multiple programs.
*/
}