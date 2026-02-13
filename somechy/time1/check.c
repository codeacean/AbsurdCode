#include <stdio.h>
#include <math.h>
#define PI 3.1416


int main() {
    float radius = 5.0;
    float area = PI * powf(radius, 2.0);
    printf("Area of the circle: %f\n", area);
}
