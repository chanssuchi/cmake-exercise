#include "math.h"

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

double div(double a, double b) {
    if (b != 0) {
        return a / b;
    }

    return 0;
}


