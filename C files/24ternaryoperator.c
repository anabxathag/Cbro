#include <stdio.h>

int findMax(int x, int y )
{
    /*
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
    */
   return (x > y) ? x : y;
}

int findmiN(int x, int y )
{
    /*
    if (x < y)
    {
        return x;
    }
    else
    {
        return y;
    }
    */
   return (x < y) ? x : y;
}

int main()
{
    // ternary operator = shortcut to if/else when assigning/returning a value
    // (condition) ? value if true : value if false
    
    int maxer = findMax(5, 13);
    printf("\nMax is %d", maxer);

    int minna = findmiN(5, 13);
    printf("\nmiN is %d", minna);

    return 0;
}
