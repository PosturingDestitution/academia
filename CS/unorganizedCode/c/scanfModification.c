/*
if you have scanf("%s", &somebuffer); pretty much everythin will be moved into that buffer more of less
something like this scanf(" %s", &somebuffer); youre telling to ignore any leading whitespace characters, so that only the first non-whitespace character is read into the buffer


honestly this program behaves so oddly when you give it various inputs it makes me angry
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int i1;
	int i2;
	long l1;

	double d1;
	char buf1[80];
	char buf2[80];

	puts("Enter an integer and a floating point number.");
	scanf("%ld %lf", &l1, &d1);
	printf("\nYou entered %ld and %lf.\n", l1, d1);
	puts("the scanf() format string used the l modifier to store");
	puts("your input in a type long and a type double.\n");	

	while(getchar() != '\n');

	puts("Enter a 5 digit integer (for example, 54321).");
	scanf("%2d%3d", &i1, &i2);

	printf("\nYou entered %d and %d. \n", i1, i2);
	puts("Note how the field width specifier in the scanf() format");
	puts("string split your input into two values.\n");

	fflush(stdin);	
	
	puts("Enter your first and last names separated by a space.");
	scanf("%[^ ] %s", buf1, buf2);
	printf("\nYour first name is %s\n", buf1);
	printf("Your last name is %s\n", buf2);
	puts("Note how [^ ] in the scanf() format string, by excluding");
	puts("the space character, caused the input to be split");

	return 0;
}
