// finding area of triangle
#include <stdio.h>
#define pi 3.1415
int main() {
    float Area;
    float h,b;
    printf("enter height\n");
    scanf("%f",&h);
    printf("enter breadth\n");
    scanf("%f",&b);
    Area=h*b/2;
    printf("area is %f",Area);
    if(Area<0)
    printf("length or breadth might be negative, enter positive numbers");
    return 0;
}
// enter height
// 5
// enter breadth
// 4
// area is 10.000000

// enter height
// -0
// enter breadth
// -4
// area is 0.000000
