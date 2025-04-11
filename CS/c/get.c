//demonstrates using the gets() library function

#include <stdio.h>

char input[257];

int main(){

	puts("Enter some text, then press Enter: ");
	gets(input); //gets() returns a pointer to type char with the address where the input string is stored
	printf("You entered: %s\n", input);

	return 0;
}
