#include <stdio.h>

void sort(int aray[], int len)      // Bubble Sort
{
    for(int i = 0; i < len - 1; i++)
    {
        for(int j = 0; j < len - i - 1; j++)
        {
            if(aray[j] > aray[j+1]) // 1.
            {
                int temp = aray[j];
                aray[j] = aray[j+1];
                aray[j+1] = temp;
            }
        }
    }
}
void reverse(char aray[], int len)
{
    for(int i = 0; i < len - 1; i++)
    {
        for(int j = 0; j < len - i - 1; j++)
        {
            if(aray[j] < aray[j+1]) // 2.
            {
                int temp = aray[j];
                aray[j] = aray[j+1];
                aray[j+1] = temp;
            }
        }
    }
}

void printAyint(int aray[], int len)
{
    for(int i = 0; i < len; i++)
    {
        printf("%d ", aray[i]);
    }
}
void printAychar(char aray[], int len)
{
    for(int i = 0; i < len; i++)
    {
        printf("%c ", aray[i]);
    }
}

int main()
{
    int aray_1[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};   // intแค่ละตัวในarayมีขนาดข้อมูล4bytes
    int len_1 = sizeof(aray_1)/sizeof(aray_1[0]);
    printf("%d bytes\n", sizeof(aray_1));

    char aray_2[] = {'D','W','H','A','X'};      // ตัวละ 1 bytes
    int len_2 = sizeof(aray_2)/sizeof(aray_2[0]);
    printf("%d bytes\n", sizeof(aray_2));

    sort(aray_1, len_1);
    printAyint(aray_1, len_1);
    printf("\n");

    reverse(aray_2, len_2);
    printAychar(aray_2, len_2);

    return 0;
}
