#include <stdio.h>

int main()
{
    double prices[] = {2.5, 5.0, 10.0, 20.0, 40.0};

    printf("%d bytes\n", sizeof(prices));
    // สมาชิกแต่ละตัวมีขนาดข้อมูลตัวละ 8 bytes (สำหรับ double)
    for(int i = 0; i < (sizeof(prices)/sizeof(prices[0])); i++)
    {   // sizeof(prices)/sizeof(prices[0]) = จำนวนสมาชิกของarray
        printf("\n%lf", prices[i]);
    }
    return 0;
}
