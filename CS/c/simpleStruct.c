/*
A structure is a data storage type designed by you, the programmer, to suit your programming needs exactly.
A structure can contain any of C's data types, including arrays and other structures. Each variable within a structure is called a member.


what is alignment?
	Aligned acess occurs when data is stored at a memory address that is a multiple of its size.
	Unaligned access happens when data is stored at an address that does not follow the required boundaries. Some processors (like ARM) may not support unaligned access, leading to errors or performance penalties.
	
	Aligned memory access allows the CPU to efficiently fetch data in a single memory operation.
	Unaligned acess may require multiple memoryreads or cause CPU exceptions.

what is padding?
	When defining structs in C/CPP, compilers often insert padding bytes to maintainproper alignment.

	struct Example{ this will could be 8 bytes (3 bytes of padding align the in)
		char a; 
		int b;	
	
	};
	The compiler mayinsert padding after char a to align int b to a 4-byte boundary 
	x86/x86-64 architectures generally allow unaligned access (with a performance cost).
	ARM & RISC-V architecture often enforce strict alignment, causing faults if violated.

	you can use #pragme pack(1) or __attribute__((packed)) to minimize padding.
		
how do you reason what the size of a struct is?
*/

#include <stdio.h>

int length, width;
long area;

struct coord{
	int x;
	int y;
} myPoint;

int main(){
	//set values into the coords
	myPoint.x = 12;
	myPoint.y = 14;

	printf("\nThe coordinates are: (%d, %d).", myPoint.x, myPoint.y);

	return 0;
}
