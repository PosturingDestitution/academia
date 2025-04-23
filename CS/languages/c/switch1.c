/*
demonstrates the switch statement


well, that is certainly not right, is it? it looks as though the sswitch statement finds the first matching template and then executes everything that follows...
*/

#include <stdio.h>

int main(){
	int reply;
	puts("Enter a number between 1 and 5:");
	scanf("%d", &reply);
	switch(reply){
		case(1):
			puts("You entered 1.");
		case(2):
			puts("You entered 2.");
		case(3):
			puts("You entered 3.");
		case(4):
			puts("You entered 4.");
		case(5):
			puts("You entered 5.");
		default:
			puts("Out of range, try again.");

	}
	return 0;
}
