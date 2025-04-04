#include <stdio.h>

extern int x;
extern void printMessage();

int main(){
	printMessage();
	printf("x = %d\n", x);
	return 0;
}
