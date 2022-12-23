#include <stdio.h>

int main()
{
    // for loop = repeats a section of code a limited amount of times

    for(int i = 0; i <= 10; i+=2)
    {
        printf("\ntest %d", i);
    }

    for(int j = 5; j >= 1; j--)
    {
        printf("\ntaste %d", j);
    }

    return 0;
}
