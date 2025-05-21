/*
the register keyword is a storage class specifier that can be used to hint to the compiler that a variable should be stored in a register.
1. optimization: by storing variables in registers, the CPU can access them faster because they're closer to the execution units.
2. cache locality: register-based storage can improve cache locality, which is essential for performance-critial code.
3. compiler freedom: the compiler may choose not to store a variable in a register if it determines that this would lead to slower execution or other issues.

NOTE: you cannot take the address of a 'register' variable using the uary '&' operator, since there is no guarantee that its storage location will be accessible.
NOTE: in most cases, the compiler can optimize away any performance benefits of storing a variable in a register. The 'register' keyword should only be used when you are certain it is necessary for performance-critical code.

remember, the primary goal of using 'register' is to hint at optimization opportunities. the actual performance benefits will depend on various factors, including the specific use case, compiler implementation, and hardware architecture.



NOTE: the following program on modern CPUs is unlikely to show significant performance difference because most compilers will optimize away any potential benefits of using 'register'. however, it can still serve as an illustrative example.
*/

#include <stdio.h>
#include <time.h>

int calculateSum(int n);

int main(){
	//measure the time taken by a loop that uses register variables
	clock_t start, end;

	printf("Register variable loop:");
	register int regVar1, regVar2;
	for(int i = 0; i < 10000000; i++){
		regVar1 = calculateSum(10);
		regVar2 = regVar1 + 5;
	}
	start = clock();
	printf("%d\n", regVar2);
	end = clock();
	double regTime = (double)(end - start) / CLOCKS_PER_SEC;
	printf("Time taken: %.6f seconds \n", regTime);

	printf("Local variable loop:");
	int localVar1, localVar2;
	for(int i = 0; i < 10000000; i++){
		localVar1 = calculateSum(10);
		localVar2 = localVar1 + 5;
	}
	start = clock();
	printf("%d\n", localVar2);
	end = clock();
	double localTime = (double)(end - start) / CLOCKS_PER_SEC;
	printf("Time taken: %.6f seconds \n", localTime);	

	//compare the results
	if(regTime < localTime){
		printf("\nRegister variable loop was faster!\n");
	}
	else{
		printf("\nLocal variable loop was faster.\n");
	}

	return 0;
}

int calculateSum(int n){ //function to perform some calculation-intensive task
	int sum = 0;
	for(int i = 0; i < n; i++){
		sum += i * i;
	}
	return sum;
}
