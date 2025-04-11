//demonstrates using the gets() return value

#include<stdio.h>

char input[257], *ptr;

int main(){

	puts("Enter text a line at a time, then press Enter.");
	puts("Enter a blank line when done.");


	while ( *(ptr = gets(input)) != '\0'){  //because it is not always possible to know how many caharcter gets() will read, and because gets() will continure to store characters past the end of the buffer, it should be used with caustion
		printf("You entered '%s'\n", input);
	}
	
	puts("Thank you and good-bye\n");

	return 0;
}
