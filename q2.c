#include <stdio.h>

int main(){
    int n1, n2, sum, diff, prod, quo;
    printf("enter number 1 =>"); scanf("%d", &n1);
    printf("enter number 2 =>"); scanf("%d", &n2);
    sum = n1 + n2; diff = n1 - n2; prod = n1 * n2; quo = n1 / n2;
    printf("The sum is %d\n", sum);
    printf("The difference is %d\n", diff);
    printf("The product is %d\n", prod);
    printf("The quotient is %d", quo);
    return 0;
}