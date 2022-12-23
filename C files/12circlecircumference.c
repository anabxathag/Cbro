#include <stdio.h>

int main(){

    // circumference = เส้นรอบวงกลม = 2*pi*r
    // area = พื้นที่วงกลม = pi*(r^2)
    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("\nEnter the radius of a circle: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("\ncircumference: %lf", circumference);
    printf("\narea: %lf", area);

    return 0;
}
