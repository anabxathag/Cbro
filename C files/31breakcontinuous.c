#include <stdio.h>

int main()
{
    // continuous = skips rest of code & forces the next iteration of the loop
    // break = exit a loop/switch

    for(int i = 1; i <= 20; i++)
    {
        if(i >= 9 && i < 12)
        {
            continue;
        }
        else if(i == 18)
        {
            break;
        }
        printf("\n%d", i);
    }

    return 0;
}
