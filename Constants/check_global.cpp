#include <iostream>

/* used with const_var.cpp to check if const is global */

extern int const_i;

void check_global() {
    //Linking fails, because const_i is not visible here
    //std::cout << "const_i=" << const_i << std::endl;
}
