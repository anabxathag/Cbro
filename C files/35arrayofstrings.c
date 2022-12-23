#include <stdio.h>
#include <string.h>

int main()
{
    char cars[][10] = {"Mustang","Corvette","Camaro"};
    strcpy(cars[0], "Tesla");
    printf("%d bytes\n", sizeof(cars)); // cars[][10]-->10 bytes ต่อ 1 element
    printf("\n");

    for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
    {
        printf("%s\n", cars[i]);
    }

    return 0;
}
