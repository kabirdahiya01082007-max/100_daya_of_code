#include <stdio.h>

int main(){
    float radius, pi, area, circum; pi = 3.14;
    printf("Enter radius =>"); scanf("%f", &radius);
    circum = 2 * pi * radius;
    area = pi * radius * radius;
    printf("the circumference of circle is %.2f m\n", circum);
    printf("the area of circle is %.2f m^2", area);
    return 0;
}