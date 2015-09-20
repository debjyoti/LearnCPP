#include <iostream>

const int* func(const int& i){
   // i++; //not allowed
   return i;
}

int main() {
    int i=10;
    int &j = func(i);
    j++;
    std::cout << "j=" << j << std::endl;
}
