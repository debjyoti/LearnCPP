#include <iostream>

template <class T>
void swap(T &a, T &b) {
    T temp;
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
    std::string s1 = "deb";
    std::string s2 = "somerita";
    std::cout << "Before Swap: s1=" << s1 << "; s2=" << s2 << std::endl;
    swap(s1, s2);
    std::cout << "After Swap: s1=" << s1 << "; s2=" << s2 << std::endl;
}
