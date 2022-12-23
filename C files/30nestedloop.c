#include <stdio.h>

int main()
{
    // nested loop = a loop inside of another loop

    int rows;
    int columns;
    char symbol;

    printf("\nEnter a symbol to use: ");
    scanf("%c", &symbol);
    /*
    scanf("%c");    // ใส่หน้าprintf ทำให้columnsเป็น10 ?
    printf("\nEnter a symbol to use: ");
    scanf("%c", &symbol);   // ถ้าใส่หลังscanfของrowsกับcolumns แม่งจะเอ๋อ

    ดูความเอ๋อของ scanf() ต่อได้ที่ไฟล์ที่44
    */

    printf("\nEnter # of rows: ");
    scanf("%d", &rows);

    printf("\nEnter # of columns: ");
    scanf("%d", &columns);

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= columns; j++)
        {
            printf("%c", symbol);
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
