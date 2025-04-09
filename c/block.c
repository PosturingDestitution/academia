/*
you can define variables that are local to any program block (any section enclosed in braces).
when declaring variables within the block, you must remember that the declarations must be first.
*/

#include <stdio.h>

int main(){
	int count = 0;
	printf("\nOutside the block, count = %d", count);

	{
		int count = 999;
		printf("\nWithin the block, count = %d", count);
	}
	printf("\nOutside the block again, count = %d\n", count);
	return 0;
}
