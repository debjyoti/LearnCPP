#include <iostream>

class Dog {
public:
    Dog() {
        std::cout << "Dog()\n";
    }
    ~Dog() {
        std::cout << "~Dog()\n";
    }
};

void do_something_risky() {
    Dog g;
    std::cout << "help help!, something went wrong. Throwing "
        "exception 12\n";
    throw 12;
    std::cout << "Why am I not getting printed?\n";
}

int main() {
    try {
        do_something_risky();
    } 
    catch(int ex) {
        std::cout << "Caught exception : "<< ex << std::endl;
    }
}
