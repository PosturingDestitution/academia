/*

   	int getc(FILE *stream)
	returns the next character from a file (or stream)

	int fgetc(FILE *stream)
	same as getc() but with the file pointer argument explicitly stated

	char *gets(char *s)
	reads a line of text from input and stroes it in a string buffer (DEPRECATED dur to security risks, use fgets() instead)

	char *fgets(char *s, int n, FILE *stream)
	reads a line of text from input and stores it in a string buffer, allowing you to specify the maximum number of characters to read	

	int ungetc(int c, FILE *stream)
	a function that pushes back a character to the input stream, making it available for reading again by subsequent calls to fgetc() or other functions that read from the stream.

	int puts(const char *s)
	int printf(const char *format, ...) (note: the '...' indicates variable arguments)
	NOTE: when you include the <stdio.h> header file in your code, it defines several macros that help expand the printf() function call into a series fo actual function calls. (macro expansion)


macro expansion can be used for:
	reducing repetitive code
	improving code consistency
	allowing for conditional compilation (e.g., debgugging or logging statements)
	providing a way to abstract away complex code patterns :)


the 'stdio.h' header file in C is an excellent example of macro expansion in use
when you include 'stdio.h' in your C program, you might notice that it defines several macros for input/output operations. here's a simplified excerpt from 'stdio.h'
#define EOF -1
#define NULL 0

#define getchar() getc(stdin)
#define putchar(c) putc(c, stdout)

#define printf(...) fprintf(stderr, __VA_ARGS__)

let look at the last three macros

'getchar()' and 'putchar(c)' are equivalent to caled 'getc(stdin)' and 'put(c, stdout)', respectively. these macros expand to their full form when used in your code
'printf(...)' is an interesting examplpe of macro expansion. the ellipsis indicates that the macro takes a variable number of arguments

when you use 'printf()' in your program, the compiler will expand it to its full form which looks something like this:
	fprintf(stderr, __VA_ARGS__)

but what is really happening here is that the '__VA_ARGS__' token is replaced with the actual arguments passed to 'printf()'. this is because '__VA_ARGS__' is a special token in C macro expansion that represents the remaining arguments after any fixed arguments. 

macro expansion is a fundamental aspect of C programming, and it is used extensively in various header files like 'stdio.h'. by using macros, library authors can provide concise and convenient APIs while still exposing the underlying implementation details.
*/ 

#include <stdio.h>

#define MAXLEN 10

int main(){
	char buffer[MAXLEN];

	puts("Enter text a line at a time; enter a blank to exit.");
	
	while(1){
		fgets(buffer, MAXLEN, stdin);
		if(buffer[0] == '\n'){
			break;
		}
		puts(buffer);	
	}


	return 0;
}























