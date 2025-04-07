/*demonstrates using pointer arithmetic to access array elements with pointer notation*/
#include <stdio.h>

#define MAX 10

int i_array[MAX] = {0,1,2,4,5,6,7,8,9};
int *i_ptr, count;

float f_array[MAX] = {0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9};
float *f_ptr;

int main(){

	i_ptr = i_array;
	f_ptr = f_array;

	for (count = 0; count < MAX; count++){
		printf("%d\t%f\n", *i_ptr++, *f_ptr++);
	}

	return 0;
}
