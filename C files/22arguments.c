#include <stdio.h>

void birthday(char nah[], int aye)
{
    printf("\nHappy birthday dear %s!", nah);
    printf("\nYou are %d years old!", aye);
}

int main()
{
    char name[] = "Art";
    int age = 19;

    birthday(name, age);
    birthday("Josuke", 16);

    return 0;
}
