#include <iostream>
#include <mymath.h>


int main() {
    int a = 10, b = 20;
    std::cout << my_add(a, b) << std::endl;
    std::cout << my_sub(a, b) << std::endl;
    std::cout << my_mul(a, b) << std::endl;
    std::cout << my_div(a, b) << std::endl;

    return 0;
}
