//code found via https://www.geeksforgeeks.org/memory-layout-of-c-program/

#include <stdio.h>
#include <stdlib.h>

//global variable
int gvar = 66;

//constant global variable
const int cgvar = 1010;

//uninitialized global variable
int ugvar;

void foo(){
    //local variable
    int lvar = 1;
    printf("address of lvar:\t%p", (void*)&lvar);
}

int main() {
    //heap variable
    int *hvar = (int*)malloc(sizeof(int));

    //checking and comparing addresses of different elements of program that should be stored in different segements of the memroy
    printf("Address of foo:\t\t%p\n", (void*)&foo);
    printf("Address of cgvar:\t%p\n", (void*)&cgvar);
    printf("Address of gvar:\t%p\n", (void*)&gvar);
    printf("Address of ugvar:\t%p\n", (void*)&ugvar);
    printf("Address of hvar\t%p\n", (void*)hvar);
    foo();

    //free the allocated memory to avoid memory leak?
    free(hvar);

    return 0;
}