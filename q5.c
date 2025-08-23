#include <stdio.h>

int main(){
    float celsius, farenheit;
    printf("Enter temperacture in celsius =>"); scanf("%f", &celsius);
    farenheit = (9*celsius / 5)  + 32;
    printf("temperature in farenheit is %.1f F", farenheit);
    return 0;
}