#include <stdio.h>

int main(){

    // arithmetic operators
    
    // + (addition)
    // - (subtraction)
    // * (multiplication)
    // / (division)
    // % (modulus)
    // ++ (increment)
    // -- (decrement)

    int x = 5;
    int y = 2;
    int a = x + y;
    int b = x - y;
    int c = x * y;
    int d = x / y;  // ได้2
    float z = (float) x / y;    // จะเอา2.5 ใส่(float)ที่เศษหรือส่วน หรือทั้ง2ที่ก็ได้
    int e = x % y;
    
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
    printf("%f\n", z);
    printf("%d\n", e);

    printf("\n");
    x++;    // เขียนหน้าหรือหลังตัวแปรก็ได้
    printf("%d\n", x);  // +1
    --y;
    printf("%d\n", y);  // -1

    return 0;
}
