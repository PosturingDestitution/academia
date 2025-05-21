/*Demonstrates printing extended ASCII characters*/

#include <stdio.h>

int main(){

	for  (signed int i = -128; i<256; i++){
		printf("char:[%c] is number:[%d]\n", (char)i, i);
	}	

	return 0;
}
