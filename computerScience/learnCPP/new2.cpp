/*
direct/indirect reference + r is an alias for x
*/

#include <iostream>

int main(){
	int x = 10; 
	int &r = x;
	int *p = &x;
	std::cout << x << "\n";
	std::cout << r << "\n";
	std::cout << *p << "\n";
	return 0;
}
