#include <stdio.h> 
#include <stdlib.h>

#define VERSION 3

int main(){


#if VERSION == 1
	int *ptr = (int *)malloc(5 * (sizeof(int))); 

	if(ptr == NULL){	      //moreover, if there is no memory available, the malloc will fail and return NULL. So, it is recommended to check for failure by comparing the ptr to NULL
		printf("allocation failed");
		exit(0);
	}

	for (int i = 0; i < 5; i++){

		printf("using malloc this [%d] is stored at position %d\n", *(ptr+i), i);

	}	
	
	free(ptr);

#elif VERSION == 2 
	int *ptr = (int *)calloc(5, sizeof(int));
	if(ptr == NULL){
		printf("allocation failed");
		exit(0);
	}


	for (int i = 0; i < 5; i++){

		printf("using calloc this [%d] is stored at position %d\n", *(ptr+i), i);

	}
	
	free(ptr);

#else
	int *ptr = (int *)malloc(5 * (sizeof(int)));
	
	if(ptr == NULL){
		printf("allocation failed");
		exit(0);
	}

	
	
	for (int i = 0; i < 5; i++){

		printf("using malloc this [%d] is stored at position %d\n", *(ptr+i), i);

	}

	//resize the memory block to hold 10
	int *tmp = (int *)realloc(ptr, 10 * sizeof(int));

	
	if (tmp == NULL){ //if reallocation fails you should free the original block otherwise memory leak
		printf("reallocation failed freeing old block");
		free(ptr); //if realloc fails i still have access to this block now
		exit(0);
	}
	else{ //
		ptr = tmp;	
	}


	for (int i = 0; i < 10; i++){

		printf("using realloc this [%d] is stored at position %d\n", *(tmp+i), i);

	}	

#endif
	return 0;
}

/*
The malloc() (stands for memory allocation) function is used to allocate a single block of contiguous memory on the heap at runtime. The memory allocated by malloc() is uninitialized, meaning it contains garbage values.
malloc(size); where size is the number of bytes to allocate
This function returns a void pointer to the allocated memory that needs to be converted to the pointer of required type to be usable



calloc() (stands for contiguous allocation) function is similar to malloc(), but it initialized the allocated memory to zero. It is used when you need memory with default zero values.
calloc(n, size); where n is the number of elements and size is the size of each element in bytes
This function also returns a void pointer to the allocated memory that is converted to the pointer of required type to be usable. If allocation fails, it returns NULL pointer.



The memory allocated using functions malloc() and calloc() is not de=allocated on their own. The free() function is used to release dynamically allocated memory back to the operating system. It is essential to free memory that is no longer need to avoid memory leaks. free(ptr) where ptr is the pointer to the allocated memory
After freeing a memory block, the pointer becomes invalid, and it is no longer pointing to a valid memory location 
After calling free(), it is a good practice to set the pointer to NULL to avoid using a dangling pointer, which points to a memory location that has be deallocated. ptr = NULL


realloc() function is used to resize a previously allocated memory block. It allows you to change the size of an existing memory allocation without needing to free the old memory and allocate a new block.
realloc(ptr, new_size);
where, ptr is the pointer to th epreviously allocated memory block and new_size is the reallocated size that the memory block should have in bytes
This function returns a pointer to the newly allocated memory, or NULL if the reallocation fails. If it fails, the original memory block remains unchanged.
It is important to note that if realloc() fails and returns NULL, the original memory block is not freed, so you should not overwrite the original pointer until you've successfully allocated a new block. To prevent memory leaks, its a good practice to handle the NULL return value carefully
*/
