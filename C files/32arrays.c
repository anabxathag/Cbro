#include <stdio.h>

int main()
{
    // array = a data structure that can store many values of the same data type.
    
    double prices[] = {5.0, 10.0, 15.0, 20.0, 25.0};

    printf("\n$%.3lf", prices[0]);
    printf("\n$%.3lf", prices[1]);
    printf("\n$%.3lf", prices[2]);
    printf("\n$%.3lf", prices[3]);
    printf("\n$%.3lf", prices[4]);
    printf("\n");
    
    prices[6] = 30.0;   // Add elements
    printf("\n$%.3lf", prices[6]);
    printf("\n");

    printf("\n$%.3lf", prices[5]);
    printf("\n");
    
    prices[0] = 40.0;   // Change elements
    printf("\n$%.3lf", prices[0]);
    printf("\n");

    // Declare an array of four integers:
    int myNum[4];
    // Add elements
    myNum[0] = 25;
    myNum[1] = 50;
    myNum[2] = 75;
    myNum[3] = 100;

    printf("\n$%d", myNum[0]);
    printf("\n$%d", myNum[1]);
    printf("\n$%d", myNum[2]);
    printf("\n$%d", myNum[3]);
    printf("\n$%d", myNum[4]);

    return 0;
}
