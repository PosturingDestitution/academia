/*

demonstrates using an infinite loop to implement a menu system

*/

#include <stdio.h>
#define DELAY 150000000 /*used in delay loop.*/

int menu(void);
void delay(void);

int main(){

	int choice;
	
	while(1){

		choice = menu();

		if(choice == 1){
			puts("\nExecuting task A.");
			delay();
		}

		else if(choice == 2){
			puts("\nExecuting task B.");
			delay();	
		}

		else if(choice == 3){
			puts("\nExecuting task C.");
			delay();		
		}

		else if(choice == 4){
			puts("\nExecuting task D.");
			delay();		
		}

		else if(choice == 5){
			puts("\nExiting program now.");
			delay();	
			break;
		}

		else{
			puts("\nInvalid choice, try again.");
			delay();
		}

	}
	return 0;
}

int menu(void){
	int reply;

	puts("\nEnter 1 for task A.");
	puts("Enter 2 for task B.");
	puts("Enter 3 for task C.");
	puts("Enter 4 for task D.");
	puts("Enter 5 to exit program.");

	scanf("%d", &reply);

	return reply;
}

void delay(){
	long x;
	for(x = 0; x < DELAY; x++)
		;
}
