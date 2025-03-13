/*
Illustrates the modulus operator. The input should be a number of seconds, and converts that to hours, minutes, and seconds.

Operators precedence
1 unary increment and decrement
2 muliplication, division, and mod
3 addition and subtraction

w * x / y + z / y
Because of precedence, the multiplication and division are performed before the addition.
However, C doesn't specify whether the subexpression w * x /y is to be evaluaded before or after z /y. It might not be clear to you why this matters. Look at another example: w * x / ++y + z / y

You should avoid this sort of indeterminate expression in your programming.
*/

#include <stdio.h>

#define SECS_PER_MIN 60
#define SECS_PER_HOUR 3600
#define MAX_SECONDS 65000

unsigned seconds, minutes, hours, secs_left, mins_left;

int main(){
    printf("Enter number of seconds (< %u):", MAX_SECONDS);
    scanf("%u", &seconds);

    while (1) { // Loop until valid input is received
        if (scanf("%u", &seconds) == 1) { // Check if one item was read
            if (seconds < MAX_SECONDS) {
                break; // Valid input, exit the loop
            } 
            else {
                printf("Error: Please enter a value less than %u.\n", MAX_SECONDS);
            }
        } 
        else {
            printf("Invalid input. Please enter a valid unsigned integer.\n");
            // Clear the invalid input
            while (getchar() != '\n'); // Consume the rest of the line
        }
        printf("Enter number of seconds (< %u): ", MAX_SECONDS); // Prompt again
    }

    hours = seconds / SECS_PER_HOUR;
    minutes = seconds / SECS_PER_MIN;
    mins_left = minutes % SECS_PER_MIN;
    secs_left = seconds % SECS_PER_MIN;

    printf("%u seconds is equal to\n", seconds);
    printf("%u h, %u m, and %u s\n", hours, mins_left, secs_left);

    return 0;
}