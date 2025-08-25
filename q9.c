#include <stdio.h>
int main() {
    int principal; printf("enter principal amount >"); scanf("%d", &principal);
    float rate; printf("enter interest rate in percentage >"); scanf("%f", &rate);
    int time; printf("enter time in years >"); scanf("%d", &time);
    float simple = (principal*rate*time)/100;
    float x = (1 + (rate/100));
    float compound = principal;
    for (int i = 1; i <= time; i++){
        compound *= x;
    }
    printf("simple interest > %.2f\n", simple);
    printf("compound interest > %.2f", compound - principal);
    return 0;
}