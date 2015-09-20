#include <iostream>

/* Refer
 * http://stackoverflow.com/questions/121162/what-does-the-explicit-keyword-in-c-mean
 * */

class Foo {
    int i;
public:
    Foo(int k) : i(k) {}
    int getFoo() { return i; }
};

int bar(Foo foo) {
    return foo.getFoo();
}

int main() {
    Foo f(100);
    int k = bar(f);
    std::cout << "k=" << k << std::endl;
    int hihi = bar(200); //I am just passing int instead of Foo obj
    std::cout << "hihi=" << hihi << std::endl;
}
