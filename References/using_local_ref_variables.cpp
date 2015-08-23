#include <iostream>

int main() {
	int i;
	int &a =i; //same as *a = &i
	a = 10;
	std::cout << "a="<< a << "i=" << i << std::endl;
}	
