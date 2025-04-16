/*
Some character input functions are biffered. This means that the operating system holds all characters in a temporary storage space until you press Enter, and then the systen sends the characters to the stdin stream. Others are unbuffered, meaning that each character is sent to stdin as soon as the key is pressed.

Some input functions automatically echo each character to stdout. As it is received. Others do not echo; the character is sent to stdin and not stdout. Because stdout is assigned to the screen, that is where input is echoed.


*/

#include <stdio.h>

int main(){

	int ch;
	while((ch = getchar()) != '\n'){ //reads the next char from stdin...this is a buffered and echoed function
		putchar(ch);	
	}
	return 0;
}



/*

you type characters -> echoes each char to stdout

press enter (buffer contents sent to stdin)

program reads from stdin

*/
