/*
making an array manually
making a pointer + some pointer arithmetic + a deference
*/

#include <iostream>

int numbers[5] = {1, 2, 3, 4, 5};
int *p = numbers; //numbers == &numbers[0]

int main(){
	for (int i = 0; i < 5; i++){	
		std::cout << numbers[i];
	}
	std::cout << "\n";


	for (int i = 0; i < 5; i++){	
		std::cout << *(p + i);
	}
	std::cout << "\n";

	std::cout << sizeof(numbers) << '\n';
	std::cout << sizeof(p) << '\n';

	return 0;
}
