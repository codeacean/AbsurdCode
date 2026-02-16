#include <stdio.h>
#include <math.h>
#define PI 3.1416

int main() {
    printf("Enter radius value: ");
    float radius;
    scanf("%f", &radius);
    float p_radius = powf(radius, 2.0);
    float area = PI * p_radius;
    printf("Area of the circle: %f\n", area);
}
