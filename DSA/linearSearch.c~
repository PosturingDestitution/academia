/*
observe the spacial and time complexity of good ole' linear search
Linear search iterates through each element of the array one by one until it either finds the target or reaches the end of the array.
*/


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
time complexity analysis:
	best case (O(1)): the target is found at the first index; the function returns immediately after one comparison the target is either at the last position or not present in the array, requiring checking all n elements. 
	worst case (O(n)): the target is either at the last position or not present in the array, requiring checking all n elements.
	average case (O(n)): on average, the target is found halfway through the array, leading to n/2 comparisons, which simplifies to O(n) in asymptotic notation.

space complexity analysis:
	Linear search does not use any additional data structures; it only uses a few integer variables (size, target, result, and i in the loop). This results in:
		O(1) space complexity (constant space) since the extra space does not grow with the input size.
		
		for the entire program: O(n) (due to the input array)
		for the linearSearch() function: O(1) (since it does not allocate extra memor)
/
