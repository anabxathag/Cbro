#include <stdio.h>
#include <ctype.h>

int main()
{
    /* BITWISE OPERATORS = special operators used in bit level programming
    (knowing binary is important for this topic) */

    // & = AND
    // | = OR
    // ^ = XOR
    // << = left shift
    // >> = right shift

    int x = 6;  // 6(decimal) = 00000110(binary)
    int y = 12;  // 12(decimal) = 00001100(binary)
    int z = 0;  // 0(decimal) = 00000000(binary)
    // ดูจาก https://byjus.com/maths/decimal-to-binary/
    // https://www.javatpoint.com/binary-to-decimal-number-in-c
    // https://www.borntodev.com/2020/07/10/logic-gates-101/

    z = x & y;  // 4(decimal) = 00000100(binary)
    printf("\nAND = %d", z);

    z = x | y;  // 14(decimal) = 00001110(binary)
    printf("\nOR = %d", z);

    z = x ^ y;  // 10(decimal) = 00001010(binary)
    printf("\nXOR = %d", z);

    z = x << 3;  // 00000110(binary) = 6(decimal) --> 00110000(binary) = 48(decimal)
    printf("\nSHIFT LEFT = %d", z);

    z = x >> 2;  // 00000110(binary) = 6(decimal) --> 00000001(binary) = 1(decimal)
    printf("\nSHIFT RIGHT = %d", z);

    return 0;
}
