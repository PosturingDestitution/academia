/*
*/

#include <stdio.h>

char lname[257], fname[257];
int count, id_num;

int main(){
	puts("Enter last name, first name, ID number separated");
	puts("by spaces, then press Enter.");

	count = scanf("%s%s%d", lname, fname, &id_num); //imagine you have two first name though?

	printf("%d items entered: %s %s %d \n", count, fname, lname, id_num);

	return 0;
}
