#include <stdio.h>
#include <math.h>

double dist(double x, double y) {
    return sqrt(pow(x, 2) + pow(y, 2));
}

int main() {
    printf("%g", dist(2, 0));
}