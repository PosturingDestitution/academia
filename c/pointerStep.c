/*
both unions and structs are used to group variables of different data types under a single name, but they have some difference in the ways they handle memory and handle data.

memory sharing: all members of a union share the same memory space. The size of the union is the size of its largest member because only one member can be used at any given time.
size: the size of the union is determined by the size of its largest member.
padding and alignment: unions respect the alignment requirements of their largest member. if a union has multiple members with different types, the padding and alignment will be based on the largest member.

c structs can only hold data (no methods inside). functions can operate on them externally.
c++/java classes can encapsulate both data and functions (methods) within the class itslef. the methods can operate on the data members, and the class can define constructors, destructors, accessors (your getters and setters), and more.

note: -> is used to access members (fields or functions) of a structure (or union) through a pointer to that structure
why use -> instead of .? well normally youll have to dereference (*ptr).name, the -> combines these actions ptr->name

pointerstep.c - demonstrates stepping through an array of structures using pointer notation
*/

#include <stdio.h>

#define MAX 4

struct part{
	short number;
	char name[12];
} data[MAX] = { {1, "Thomas"},
		{2, "Christopher"},
		{3, "Jake"},
		{4, "spagetti"}
		};

struct part *p_part;
int count;

int main(){

	p_part = data;
	for(count = 0; count < MAX; count++){
		printf("at address %p: %d %s\n", p_part, p_part->number, p_part++);	
	}

	return 0;
}
