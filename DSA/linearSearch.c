/*observe the spacial and time complexity of good ole' linear search*/


#include <stdio.h>

int linearSearch(int arr[], int size, int target);

int main(){

	int arr[] = {4, 2, 7, 1, 9, 3};
	int size = sizeof(arr) / sizeof(arr[0]); //size is the number of elements in the array
	int target = 7;

	int result = linearSearch(arr, size, target);

	if (result != -1){
		printf("Elemnt found at index %d\n", result);	
	}
	else {
		printf("Elements not found\n");
	}

	return 0;
}

int linearSearch(int arr[], int size, int target){ //returns the index of the target

	for (int i = 0; i < size; i++){
		if (arr[i] == target){
			return i;	
		}
	}

	return -1;
}


/*
time complexity analysis
space complexity analysis 
*/
