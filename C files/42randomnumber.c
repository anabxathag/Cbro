#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /* pseudo random numbers = A set of values or elements that are statistically
    random(Don't use these for any sort of cryptographic security) */
    
    srand(time(0));     // เวลาปัจจุบัน ใช้time(0)
    // rand() จะสุ่มเลขให้ตั้งแต่ 0 - 32,767
    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;    // สุ่มลูกเต๋า3ลูก

    printf("\n%d", num1);
    printf("\n%d", num2);
    printf("\n%d", num3);

    return 0;
}
