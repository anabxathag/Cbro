#include <stdio.h>
#include <string.h>

int main()
{
    char x = 'X';
    char y = 'Y';
    char temp;
    temp = x;   // temp = 'X'
    x = y;  // x = 'Y'
    y = temp;    // y = 'X'

    printf("x = %c\n", x);
    printf("y = %c\n", y);
    printf("\n");
    /*.........................*/
    char a[15] = "Wine";
    char b[15] = "Beer";
    char shot[15];  // กำหนดให้15ิbytesคือขนาดข้อมูล
    printf("%d bytes\n", sizeof(shot));
    strcpy(shot, a);    // shot = "Wine"
    strcpy(a, b);       // a = "Beer"
    strcpy(b, shot);    // b = "Wine"

    printf("a = %s\n", a);
    printf("b = %s\n", b);

    return 0;
}
