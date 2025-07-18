/*
*/



#include <stdio.h>

int main(){
	int age;
	char name[20];

	puts("Enter your age: ");
	scanf("%d", &age);
	
	getchar();

	// this function sucks: fflush(stdin);
	while(getchar() != '\n');

	puts("Enter your first name.");
	scanf(" %s", name); //space here tells scanf to ignore any whitespace characters that might be left behind

	printf("Your age is %d. \n", age);
	printf("Your name is %s. \n", name);

	return 0;
}
