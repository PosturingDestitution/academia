//demonstrates the relationship between addresses and elements of arrays of different data types

#include <stdio.h>

int ctr;
short array_s[10];
float array_f[10];
double array_d[10];

int main(){

//print the table heading

	printf("\t\tShort\t\tFloat\t\tDouble");
	printf("\n==========================================================================");
	for (ctr = 0; ctr < 10; ctr++){
		printf("\nElement %d:\t%p\t\t%p\t\t%p", ctr, &array_s[ctr], &array_f[ctr], &array_d[ctr]);
	}
}
