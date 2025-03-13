/*
An escape sequence is a combination of charaters in a string that has a special meaning. It usually begins with a backslash (\), indicating that the character(s) following it should be interpreted differently than usual.

A conversion specifier is used to format data in a specific way, commonly with a placeholder in a string for inserting values. It tells the program to replace the specifier with a value formatted in a specified way.
%c - char
%d - int, short
%ld - long
%f - float, double
%s - char arrays
%u - unsigned int, unsigned short
%lu - unsigned_long
*/

#include <stdio.h>

#define QUIT 3

int get_menu_choice( void );
void print_report( void );

int main(){
    int choice = 0;

    printf("\"We\'d like to welcome you to the menu program\"\n");
    printf("Are you ready to make a choice\?\n");
    while (choice != QUIT){
        choice = get_menu_choice();

        if (choice == 1)
            printf("\nBeeping the computer\a\a\a" );
        else{
            if (choice == 2)
                print_report();
        }
    }
    printf("You chose to quit!\n");
    return 0;
}

int get_menu_choice( void ){
    int selection = 0;

    do{
        printf("\n");
        printf("\n1 - Beep Computer");
        printf("\n2 - Display Report");
        printf("\n3 - Quit");
        printf("\n");
        printf("\nEnter a selection:");
        scanf("%d", &selection);
    }while (selection < 1 || selection > 3);

    return selection;
}

void print_report( void ){
    printf("\nSAMPLE REPORT");
    printf("\n\nSequence\tMeaning");
    printf("\n========\t========");
    printf("\n\\a\t\tbell (alert)");
    printf("\n\\b\t\tbackspace");
    printf("\n...\t\t...");
}