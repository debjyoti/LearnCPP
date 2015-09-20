#include <iostream>
#include <memory>

int main() {
    std::auto_ptr<int> ptr(new int);
    *ptr = 10;
    std::cout << "ptr = " << ptr.get() << ". *ptr=" << *ptr << std::endl;
}
