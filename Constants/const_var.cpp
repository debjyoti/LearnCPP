/* In C++, const variables should be preferred over Macros because
 * the compiler does not allocate memory to const variables. It
 * simply replaces the value (constant folding - just like preprocessor does for
 * macros). It is better than a macro because the compiler checks
 * the data-type before replacing.
 *
 * Link with check_global.o
 */
#include <iostream>

/* This should be put in the HEADER file:
 * Note: const_i is not global, it is visible only
 *       to this translation unit (like static)*/
const int const_i = 100;

void check_global();

int main() {
    std::cout << "const_i=" << const_i << std::endl;
    check_global();
}
