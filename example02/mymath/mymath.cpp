#include "mymath.h"

int my_add(int a, int b) {
    return a + b;
}

int my_sub(int a, int b) {
    return a - b;
}

int my_mul(int a, int b) {
    return a * b;
}

double my_div(double a, double b) {
    if (b != 0) {
        return a / b;
    }

    return 0;
}


