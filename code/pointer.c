/*
*/

#include <stdio.h>

int a = 10;
int *ptr = &a;

int main(){
    printf("address of a?: %d and then ptr: %d\n", &a, ptr);
    return 0;
}