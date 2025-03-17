/*
malloc() returns a pointer to the allocated block of memory that is the number of bytes stated in size. By allocating memory as need with malloc() instead of all at once when a program starts, you can use a computer's memory more efficiently. When using malloc(), you need to include the stdlib.h header file. Some compilers have other header files that can be included; for portability, however, its's best to include stdlib.h

malloc() returns a pointer to the allocated block of memory. If malloc() cannot allocated the required amount of memory, it returns null. Whenever you try to allocate memory, you should always check the return value, even if the amount of memory to be allocated is small.
*/

#include <stdio.h>  //printf() scanf() puts()
#include <stdlib.h> //malloc() calloc() free() realloc()

char count, *ptr, *p;

int main(){

	//allocate a block of 35 bytes. test for success
	//the exit() library function terminates the program

	ptr = malloc(35 * sizeof(char));

	if (ptr == NULL){
		puts("Memory allocation error.");
		return 1;
	}	


	//fill the string with values 65 throught 90
	//which are the ACII codes for A-Z
	
	//p is pointer used to step through the sting
	//you want ptr to remain pointed at the start
	//of the string

	p = ptr;

	for (count = 65; count < 91; count++){
		*p++ = count;
	}

	//add the terminating null character
	
	*p = '\0';

	//display the sting on the screen
	

	puts(ptr);
	free(ptr);

	return 0;
}


