#include <stdio.h>
int main() {
    int n;printf("enter the limit >");scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++){
        sum += i;
    }
    printf("the sum till %d is %d", n, sum);
    return 0;
}