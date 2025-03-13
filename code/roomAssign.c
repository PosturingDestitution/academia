/*
Demonstrates using multiple return statements in a function.

In structured programming, it’s often considered best practice for a function to have only one exit point (i.e., one return statement) for several reasons:
    Having a single exit point makes it easier to follow the flow of the function. Readers can clearly see where the function ends without having to track multiple return statements scattered throughout the code.
    When functions have multiple exit points, it can complicate future modifications. If changes are needed to the exit conditions or cleanup actions (like freeing memory), having one exit point centralizes this logic, making it simpler to manage.
    If a function allocates resources (like memory or file handles), a single exit point allows you to handle cleanup consistently. You can ensure that all necessary cleanup code runs, regardless of how the function exits, minimizing the risk of resource leaks.
    With one exit point, it’s easier to trace the function’s exit conditions during debugging. If a function can exit in multiple ways, determining the cause of unexpected behavior can be more challenging.
    Single exit points help to avoid complex control flow, making the code more predictable. It can reduce the likelihood of unintentional behavior caused by executing different parts of the code based on various exit paths.
*/

#include <stdio.h>

char last_init;
int room;

int room_assign(char last_init);

int main(){
    puts("Enter the first initial of your last name:");
    scanf("%c", &last_init);

    room = room_assign(last_init);

    printf("\nYou need to report to room %d.", room);
    return 0;
}

int room_assign(char li){
    //This if statement tests whether the first initial is A-M or N-Z
    //with the first gorup being assigned room 1045 and the rest 1055
    //The or part of the statement lets us check both lower and uppercase

    if((li >= 'a' && li <= 'm') || (li >= 'A' && li <= 'M'))
        return 1045;
    else
        return 1055;
}