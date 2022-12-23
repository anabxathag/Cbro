#include <stdio.h>
#include <math.h>   // math functions

int main(){

    double A = sqrt(9);     //รากที่2
    double B = pow(2, 4);   //ยกกำลัง
    int C = round(3.25);    //ปัดทศนิยม
    int D = ceil(3.01);     //ปัดขึ้น
    int E = floor(3.99);    //ปัดลง
    double F = fabs(-100);  //ค่าสัมบูรณ์
    double G = log(25);     //logฐาน10
    double H = sin(30);     //มุมเป็นradian
    double I = cos(60);
    double J = tan(45);     //45องศา = pi/4 = 3.14/4 = 0.785
    double K = tan(0.785);    //มุมเป็นองศา

    printf("\n%lf", A);
    printf("\n%lf", B);
    printf("\n%d", C);
    printf("\n%d", D);
    printf("\n%d", E);
    printf("\n%lf", F);
    printf("\n%lf", G);
    printf("\n%lf", H);
    printf("\n%lf", I);
    printf("\n%lf", J);
    printf("\n%lf", K);

    return 0;
}
