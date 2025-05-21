/*
	what is the purpose of clearing the buffer?	
	try entering 23 alexander when program prompts for age
*/

#include <stdio.h>

void clearKB(void);

int main(){
	int age;
	char name[20];

	puts("Enter your age:");
	scanf("%d", &age);

	clearKB();

	puts("Enter your first name:");
	scanf("%s", name);

	printf("Your age is %d. \n", age);
	printf("Your name is %s. \n", name);

	return 0;
}

void clearKB(void){
	char junk[80];
	fgets(junk, sizeof(junk), stdin);
}
