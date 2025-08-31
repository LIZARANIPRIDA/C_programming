#include <stdio.h>

#define PI 3.14159

int main() {
    int radius= 7;  
    float area;
    area= PI*radius*radius;

    printf("The value of PI is: %.5f\n", PI);
    printf("There are %d radius.\n", radius);
    printf("Area: %f\n", area);
    return 0;
}
