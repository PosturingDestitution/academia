/*
there is an array of characters (buffer) that can hold 256 bytes...the user is asked to input into this buffer then strlen() calculates the number of characters plus a terminating null character which is added when the user presses <Enter> to yield the number of characters + spaces + null character sent via stdin...i subtract one then display the number of characters plus spaces
*/

#include <stdio.h>
#include <string.h>

int main(void){
    char buffer[256];

    printf( "Enter your name and press <Enter>:\n");
    fgets(buffer, sizeof(buffer), stdin);

    printf( "\nYour name has %d characters and spaces!", strlen(buffer)-1);
    return 0;
}