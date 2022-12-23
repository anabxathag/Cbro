#include <stdio.h>
#include <math.h>

int main(){

    // hyotenuse = ด้านตรงข้ามมุมฉาก --> c = sqrt(a^2 + b^2)
    double A;
    double B;
    double C;

    printf("Enter side A: ");
    scanf("%lf", &A);

    printf("Enter side B: ");
    scanf("%lf", &B);

    C = sqrt((A * A) + (B * B));
    printf("Side C: %lf", C);

    return 0;
}
