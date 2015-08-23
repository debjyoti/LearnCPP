#include <iostream>

void swap(int &a, int &b) {
    int temp;
    temp = b;
    b = a;
    a = temp;
}

int main() {
    int a = 5;
    int b = 10;
    std::cout << "Before Swap: a=" << a << "; b=" << b << std::endl;
    swap(a, b); //the address is passed
    std::cout << "After Swap: a=" << a << "; b=" << b << std::endl;
}
