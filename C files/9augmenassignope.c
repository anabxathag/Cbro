#include <stdio.h>

int main(){

    /* augmented asssignment operators = used to replace a statement
    where an operator takes avarible as one of its arguments and then
    assigns the result back to the same varible
    x = x + 1 --> x += 1*/ 
    
    int x = 15;
    
    x = x + 2;
    printf("%d\n", x);
    x += 2;
    printf("%d\n", x);
    
    x = x - 3;
    printf("%d\n", x);
    x -= 3;
    printf("%d\n", x);

    x = x * 4;
    printf("%d\n", x);
    x *= 4;
    printf("%d\n", x);

    x = x / 5;
    printf("%d\n", x);
    x /= 5;
    printf("%d\n", x);

    x = x % 3;
    printf("%d\n", x);
    x %= 2;
    printf("%d\n", x);

    return 0;
}
