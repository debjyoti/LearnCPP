/* In C, it is not mandatory to declare functions. If not declared,
 * the compiler will not check for the datatype of the
 * arguments/return variable. If the function definition is
 * available at the time of linking, the executable will be
 * generated. To test this behavior, compile the below code with a
 * standard C compiler. I am using gcc 4.9.3.
 
#include <stdio.h>
float divide_by_10(int);
*/

int main() {
    float f1, f2;

    /* If declaration is omitted, C compiler will not do
     * type-checking. It will quietly convert the string to int.
     * Even if the function is declared, C compiler will only warn.*/
    f1 = divide_by_10("hello");

    /*Returns 3 instead of 3.1 when declaration is commented out.
     *This is because all implicit functions return int <surprise>.
     *Just forget to include a header, and you will have a really
     *hard-to-find bug. Inspired by real life bug when I was
     *building post-processor for BSNL*/
    f2 = divide_by_10(31);
    
    printf("f1=%f; f2=%f\n", f1, f2);
    return 0;
}
