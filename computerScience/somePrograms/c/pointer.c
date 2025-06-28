/*
note for array data == &data[0]
*/

#include <stdio.h>

int a = 10;
int *ptr;

int main(){
    ptr = &a;

    printf("direct access: a = [%d]\n", a);
    printf("indirect access: a = [%d]\n", *ptr);

    printf("the address of a = %p\n", &a);
    printf("the address of a = %p\n", ptr);
    return 0;
}