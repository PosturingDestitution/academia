/*
because the while does not have an initialization seciton, you must take care of initializing any variables before starting the while loop (remember to include something to change the value of your confition within the block of code inside the while loop)

for ( ; condition ; ) is equal to while (condition) thus anything that can be done with a for statement can also be done with a while statement

structure:
    while (condition)
        statements(s)
*/

#include <stdio.h>
#define MAXCOUNT 20
int count;

int main(){
    count = 1;

    while (count <= MAXCOUNT){
        printf("%d\n", count);
        count++;
    }

    return 0;
}