#include <stdio.h>
int main(){
    int sec1; printf("enter the time in seconds >");scanf("%d", &sec1);
    int min1, fsec;
    min1 = sec1 / 60;
    fsec = sec1 % 60;
    int hr1, fmin;
    hr1 = min1 / 60;
    fmin = min1 % 60;
    printf("%d : %d : %d", hr1, fmin, fsec);
    return 0;
}