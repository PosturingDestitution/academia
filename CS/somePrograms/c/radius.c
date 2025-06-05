/*
This program will take some input .... preferably an int 'radius' and produce the area that a cirlce of that radius would yield
*/

#include <stdio.h>

int radius, area;

int main(void){
    printf("Enter radius (i.e. 10): " );
    scanf( "%d", &radius ); 

    /*
    the address-of operator '&' returns the address of a variable
    */

    area = (int) (3.14159 * radius * radius); 

    /*
    Type casting is the process of converting a variable from one data type to another in programming. There are two types 1. implicit casting (Coercion) This happens automatically when you assign a value from a small data type to a larger one. For example, assigning an int to a float: int a = 5; float b = a; 2. explicit casting This is when you manually convert a variable from one type to another using a cast operator. For example area = (int) (3.14159 * radius * radius); NOTE that casting from a floating-point to an integer will lose the decimal part (loss of precision) also improper casting (like casting incompatible types) can lead to errors or undefined behavior
    */

    printf( "\n\nArea = %d\n", area);
    return 0;
}