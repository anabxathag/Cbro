#include <stdio.h>

int main()
{
    // 2D array = an array, where each element is an entire array
    //          useful if you need a matrix, grid, or table of data

    int numbers[2][3] = {{1,2,3},{4,5,6}};  // numbers[row][col]
    printf("\n%d", numbers[0][0]);
    printf("\n%d", numbers[0][1]);
    printf("\n%d", numbers[0][2]);
    printf("\n%d", numbers[1][0]);
    printf("\n%d", numbers[1][1]);
    printf("\n%d", numbers[1][2]);
    printf("\n\n");

    int nob[2][3];
    nob[0][0] = 1;
    nob[0][1] = 4;
    nob[0][2] = 2;
    nob[1][0] = 3;
    nob[1][1] = 6;
    nob[1][2] = 8;
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", nob[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    int numer[3][3] = {
        {15,30,45},
        {60,75,90},
        {105,120,135}
        }; 
    printf("%d bytes\n", sizeof(numer));    // 1 element = 4 bytes (int)
    int rows = sizeof(numer)/sizeof(numer[0]);  // 36/12 = 3
    int columns = sizeof(numer[0])/sizeof(numer[0][0]); // 12/4 = 3
    printf("rows: %d\n", rows);
    printf("columns: %d\n", columns);
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            printf("%d ", numer[i][j]);
        }
        printf("\n");
    }

    return 0;
}
