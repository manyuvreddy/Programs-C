// finding area of rectangle
#include <stdio.h>
#define pi 3.1415
int main() {
    float Area;
    float l,b;
    printf("enter length\n");
    scanf("%f",&l);
    printf("enter breadth\n");
    scanf("%f",&b);
    Area=l*b;
    printf("area is %f",Area);
    return 0;
}
enter length
5
enter breadth
7
area is 35.000000

enter length
-5
enter breadth
7
area is -35.000000