/*
array - an indexed group of data storage locations that have the same name and are distinguished from each other by a subscript, or index-anumber following the variable name, enclosed in brackets. An array declaration includes both the data type and the size of the array.
NOTE: One way to look at the index number is as an offset. For the first item in the array, you want to be offset by nothing (or zero). For the second item, you are offset by onetem, so the index is one.

for loop structure:
    for(initial; condition; increment)
        statement(s)

initial is usually an assignment statement that sets a variable to a particular value.
condition is typically a relational expression (if 0 (false) for loops terminates and if 1 (true) the statement(s) will be executed)
The expression increment is evaluated, and execution returns to the condition

you can omit the initialization expression if the test variable has been initialized previously in your program
    ex.
    count = 1;
    for( ; count < 1000; count++)

The initialization expression doesn't need to be an actual initialization; it can be any valid C expression. Whatever it is, it is executed once when the for statements if first reached
    ex.
    count 1;
    for(printf("now sorting"); count < 1000; count++)

you can also omit the increment expression
    ex.
    for(count = 0; count < 100;)
        printf("%d", count++);

consider the following...initializing array with 50's:
    ex.
    for(count = 0; count < 1000; array[count++] = 50){
        ;
    }

consider the following to copy the contents of one array into the other in reverse order:
    ex.
    for (i = 0, j = 999; i < 1000; i++ j--)
        b[j] = a[i]
*/

#include <stdio.h>
#define MAXCOUNT 20
int count;

int main(){
    for(count = 1; count <= MAXCOUNT; count++){
        printf("%d\n", count);
    }
    return 0;
}