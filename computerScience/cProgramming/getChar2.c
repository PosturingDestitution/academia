/*
 



*/

#include <stdio.h>

#define MAX 80

int main(){

	char ch, buffer[MAX+1]; //+1 for null terminator
	int x = 0;

	while((ch = getchar()) != '\n' && x < MAX){
		buffer[x++] = ch;
	}

	buffer[x] = '\n';

	printf("%s\n", buffer);

	return 0;
}
