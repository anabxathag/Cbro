#include <stdio.h>

int main()
{
    // while loop = checks a condition, THEN executes a block of code if condition is true
    // do while loop = always executes a block of code once, THEN checks a condition

    int number = 0;
    int sum = 0;

    // โค้ดอ่านจากdoก่อน แล้วค่อยอ่านที่while
    do{
        printf("Enter a # above 0: ");
        scanf("%d", &number);
        if(number > 0)      // ต่ำกว่า0 จะได้ไม่+เพิ่มในsum
        {
            sum += number;
        }
    }while(number > 0);     // ต่ำกว่า0 จะออกจากลูป

    printf("sum: %d", sum);

    return 0;
}
