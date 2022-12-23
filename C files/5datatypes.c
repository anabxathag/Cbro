#include <stdio.h>
#include <stdbool.h>

int main(){

    char a = 'C';       // single character %c
    char b[] = "Bro";   // array of characters %s
    printf("%c\n", a);  // char
    printf("%s\n", b);  // char

    float c = 3.141592; // 4 bytes (32 bits of precision) 6 - 7 digits %f
    double d = 3.141592653589793; // 8 bytes (64 bits of precision) 15 - 16 digits %lf
    printf("%0.15f\n", c);  // float
    printf("%0.15lf\n", d);  // double

    bool e = true;      // 1 byte (true or false) %d
    printf("%d\n", e);  // bool

    char f = 120;   // 1 byte (-128 to +128) %d or %c
    unsigned char g = 255;  // 1 byte (0 to +255) %d or %c
    printf("%c\n", f);  // char as numeric value
    printf("%d\n", g);  // unsigned char as numeric value

    signed short int h = 32767;    // 2 bytes (-32,768 to +32,767) %d
    unsigned short int i = 65535;    // 2 bytes (0 to +65,535) %d
    printf("%d\n", h);  // short
    printf("%d\n", i);  // unsigned short

    int j = 2147483647;    // 4 bytes (-2,147,483,648 to +2,147,483,647) %d
    unsigned int k = 4294967295;    // 4 bytes (0 to +4,294,967,295) %u
    printf("%d\n", j);  // int
    printf("%u\n", k);  // unsigned int

    long long int l = 9223372036854775807;    // 8 bytes (-9 quintillion to +9 quintillion) %lld
    unsigned long long int m = 18446744073709551615U;    // 8 bytes (0 to +18 quintillion) %llu
    printf("%lld\n", l);  // long long int
    printf("%llu\n", m);  // unsigned long long int

    return 0;
}
