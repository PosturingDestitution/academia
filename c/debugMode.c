#include <stdio.h>
#include <stdlib.h>

#define DEBUG_MODE
#define VERSION 1 

int main(){

	printf("__STDC_VERSION__ value is : [%ld]\n", __STDC_VERSION__); //you can use the __STDC_VERSION__ macro to determine what version of c you are running I am currently using c11 which added multi-threading support via <thread.h>, static assertions _Static_assert, anonymouse structures and unions, improved type-generic macros _Generic_, alignment control _alignas, _Alignof 
	
	
	
	
	#ifdef DEBUG_MODE
		printf("DEBUG MODE is on\n");	
	#endif	
	
	#ifndef DEBUG_MODE
		printf("DEBUG MODE is off\n");	
	#endif	



	#if VERSION == 1
		printf("version 1\n");
	#elif VERSION == 2
		printf("version 2\n");
	#else
		printf("not version 1 or 2");	
	#endif

			
	return 0;
}
