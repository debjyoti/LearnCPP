#include <iostream>

template <typename T>
class node{
private:
    T val;
public:
    T get_value(){
        return val;
    }
    void set_value(T x){
        val = x;
    }
};

int main(){
    node <int>n1;
    n1.set_value(20);
    std::cout << "value is " << n1.get_value() << std::endl;
    node <std::string>n2;
    n2.set_value("hello dude");
    std::cout << "value is " << n2.get_value() << std::endl;
    return 0;
}
