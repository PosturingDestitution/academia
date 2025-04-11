/*
demonstrates the continue statement

my book has written this program using c11 (gets()) but I am now running c17/18 so ill just attempt to use fgets() rather than ignoring the compiler
*/

#include <stdio.h>
#include <string.h> //this is used to strleng()

int main(){
	char buffer[81];
	int ctr;
	
	puts("Enter a line of text:");
	fgets(buffer, 81, stdin);
	
	if(buffer[strlen(buffer) -1] == '\n'){ 
		buffer[strlen(buffer) -1] == '\0';	
	}

	//go through the string, displaying only those character that are not lowercase vowels
	for(ctr = 0; buffer[ctr] != '\0'; ctr++){
		if(buffer[ctr] == 'a' || buffer[ctr] == 'e' || buffer[ctr] == 'i' || buffer[ctr] == 'o' || buffer[ctr] == 'u'){
			continue;
		}
		putchar(buffer[ctr]);
	}
	return 0;
}

/*
fgets()
	when you call fgets(), it reads characters from the input and stores them in the provided buffer until one of the following happens:
		1. it reaches the maximum number of character that can fit into the buffer
		2. it encounters a newline character ('\n')
		3. it reaches the EOF

	after reading the input, fgets() always adds a null terminator ('\0') to the end of the string to properly terminate it, ensuring that C functions can process the string


why remove the newline?
	after calling fgets(), the string stored in buffer may have a trailing newline (\n) character at the end. This happens because when you press Enter, the newline is stored as part of the input.
	however, in many cases, you might not want the newline character when processing or printing the  input. For instanc , it can mess up string comparison or formatting when outputting the text.

here is the critical detail: once you move the null terminator to this location, you have effectively marked the end of the string at that point. The remaining memory after the null terminator becomes ininitialized or garbage
*/
