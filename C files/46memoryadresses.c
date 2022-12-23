#include <stdio.h>

int main()
{
    // memory = an array of bytes within RAM (street)
    // memmory block = a single unit (byte) within memory, used to hold some value (person)
    // memory adresses = the adress of where a memory block is located (house address)

    char a = 'X';
    char b = 'Y';
    char c = 'Z';
    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c));
    printf("%p\n", &a);     // memory adresses (hexadecimal form)
    printf("%p\n", &b);     // ต้องใส่ & ตอนprintด้วย
    printf("%p\n", &c);
    printf("\n");

    short d = 'X';
    short e = 'Y';
    short f = 'Z';
    printf("%d bytes\n", sizeof(d));
    printf("%d bytes\n", sizeof(e));
    printf("%d bytes\n", sizeof(f));
    printf("%p\n", &d);     // memory adresses (hexadecimal form)
    printf("%p\n", &e);
    printf("%p\n", &f);
    printf("\n");

    int g = 'X';
    int h = 'Y';
    int i = 'Z';
    printf("%d bytes\n", sizeof(g));
    printf("%d bytes\n", sizeof(h));
    printf("%d bytes\n", sizeof(i));
    printf("%p\n", &g);     // memory adresses (hexadecimal form)
    printf("%p\n", &h);
    printf("%p\n", &i);
    printf("\n");

    double j = 'X';
    double k = 'Y';
    double l = 'Z';
    printf("%d bytes\n", sizeof(j));
    printf("%d bytes\n", sizeof(k));
    printf("%d bytes\n", sizeof(l));
    printf("%p\n", &j);     // memory adresses (hexadecimal form)
    printf("%p\n", &k);
    printf("%p\n", &l);
    printf("\n");

    char m[2];    // 1*2 = 2 bytes
    short n[3];   // 2*3 = 6 bytes
    int o[3];     // 4*3 = 12 bytes
    double p[2];      // 8*2 = 16 bytes
    printf("%d bytes\n", sizeof(m));
    printf("%d bytes\n", sizeof(n));
    printf("%d bytes\n", sizeof(o));
    printf("%d bytes\n", sizeof(p));
    printf("%p\n", &m);     // memory adresses (hexadecimal form)
    printf("%p\n", &n);
    printf("%p\n", &o);
    printf("%p\n", &p);
    printf("\n");

    return 0;
}
