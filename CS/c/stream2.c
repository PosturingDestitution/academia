#include <stdio.h>
#include <string.h> //for strlen and strcspn

int main(){
	char buffer[100];

	if(fgets(buffer, sizeof(buffer), stdin) != NULL){
		size_t len = strlen(buffer); //what is this type size_t?
		if(len > 0 && buffer[len - 1] == '\n'){
			buffer[len - 1] = '\0';
		}
		puts(buffer);
	}
		else{
			printf("Error reading input.\n"); //handle input errors	
		}
	
	return 0;
}


/*
In C, size_t is an unsigned integer type used to represnet the sizes of objects in memory. It is the type returned by the sizeof() operator, and it is defined in the C standard library (stddef.h or stdio.h, amound others).

unsigned: cannot be negative
platform-dependent: on a 32-bit system, it is typically a 32-bit unsigned integer; on a 64-bit system, it is typically 64 bits

used for sizes and indexing: ideal for things like loop counters when iterating over arrys, buffer sizes, and memory allocation sizes.

WHY USE size_t INSTEAD OF int?
it avoids negative values, which do not make sense for sizes.
it is guaranteed to be able to hold the size of the largest possible object on the platform
WHY AGAIN?
we mean that size_t is big enough (in terms of bits) to store any value that the sizeof operator could return...which represents the size (in bytes) of any object in memory that your system can handle.

WHY DOES THIS MATTER?
every data type in C has a size in memory. sizeof(int), sizeof(double), sizeof(huge_array);
char big_array[4294967295]; ~4GB of data

how many bytes is this? size_t size = sizeof(big_array);
SO WHY NOT JUST USE INT?
a regular int might only be 32 bits
size_t, on the other hand, is designed to be large enough to hold the maximum number of bytes any object could require on your system

think of size_t like this:
	It is the official "measuring tape" that C provides to measure how big something in memory is, and it is guaranteed to be long enough for anything you might realistically allocate on your system.
*/
