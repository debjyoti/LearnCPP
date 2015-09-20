#include <iostream>

class Elite {
    double money;
public:
    Elite(){
        std::cout << "Elite() constructor\n";
    }
    Elite( Elite &e) {
        std::cout << "copy construtor\n";
    }
    void operator= (Elite& e){
        std::cout << "overloaded =\n";
    }
};

int main()
{
    Elite peter_mukh;
    Elite aruna(peter_mukh);
    Elite dj = aruna;
    dj=aruna;
}
