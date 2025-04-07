/*demonstrates automatic and static local variables*/

#include <stdio.h>

void func1(void);

int main(){
	int count;

	for(count = 0; count < 30; count++){
		printf("At iteration %d: ", count);
		func1();	
	}
	return 0;
}

void func1(void){
	static int x = 0;
	int y = 0;
	printf("x = %d, y = %d\n", x++, y++);
}


/*
local variables are automatic by default. this mean that local variables are created anew each time the function is called, and they are destroyed when execution leaves the function. what this means, in practical terms, is that an automatic variable does not retain its value between calls to the function in which it is defined.
*/
