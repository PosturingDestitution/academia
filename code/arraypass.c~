/*in this program i will be passing an array to a function normally*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int array[MAX], count;

int largest(int arr[], int size); //returns the largest value in an integer array
int largest2(int *arr, int size);

int main(){
	
	for (count = 0; count < MAX; count++){
		printf("Enter an int value");
		scanf("%d", &array[count]);
	}
	printf("\n\nLargest value from function 1 = %d\n", largest(array, MAX));
	printf("\n\nLargest value from function 2 = %d\n", largest2(array, MAX));
	return 0;
}

int largest(int arr[], int size){ 
	int i;
      	int largest = 0;
	for (i = 0; i < size; i++){

		if (array[i] > largest){
			largest = array[i];
		}	

	}
	return largest;

}

int largest2(int *arr, int size){
	int i, largest = 0;
	for (i = 0; i<size; i++){
		if (*(arr+i) > largest){
			largest = *(arr+i);
		}	
	}
	return largest;
}
