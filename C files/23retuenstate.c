#include <stdio.h>

// ใส่doubleที่หน้าฟังก์ชันreturnนี้ เพราะมันreturnค่าออกมาเป็นdouble
double square(double u)
{
    double result = u * u;
    return result;  // return u * u
}

int main()
{
    // return = returns a value back to a calling function
    double x = square(3.14);
    printf("\nPow 2 = %lf", x);

    return 0;
}
