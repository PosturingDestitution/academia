/*
demonstrates the goto statement

the goto statement is one of C's unconditional jump, or branching, statements. when program execution reaches a goto statement, execution immediately jumps, or branches, to the location specified by the goto statement. this statement is UNCONDITIONAL because execution always branches when a goto statement is encountered; the branch does not depend on any program conditions (unlike if statements, for example)

DO: avoid using the goto statement if possible...(and it is ALWAYS possible)
DONOT: confuse break and continue. break ends a loop, whereas continue starts the next iteration of the loop

*/

#include <stdio.h>

int main(){
	int n;

start:
	puts("Enter a number between 0 and 10: ");
	scanf("%d", &n);

	if(n < 0 || n > 10)
		goto start;
	else if(n == 0)
		goto location0;
	else if(n ==1)
		goto location1;
	else
		goto location2;

location0:

	puts("You entered 0. \n");
	goto end;

location1:

	puts("You entered 1.\n");
	goto end;

location2:

	puts("You entered something between 2 and 10.\n");

end:
	return 0;
}
