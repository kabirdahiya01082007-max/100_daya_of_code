#include <stdio.h>

int main(){
    int length, breadth, area, perimeter;
    printf("enter length =>"); scanf("%d", &length);
    printf("enter breadth =>"); scanf("%d", &breadth);
    area = length * breadth; perimeter = 2 * (length + breadth);
    printf("the perimeter of rectangle is %d m\n", perimeter);
    printf("the area of rectangle is %d m^2", area);
    return 0;
}