#include <stdio.h>

int main(){

    // format specifiers % = defines and formats a type of data to be displayed

    // %c = character
    // %s = string (array of charaters)
    // %f = float
    // %lf = double
    // %d = integer

    // %.1 = decimal
    // %1 = minimum field width
    // %- = left align

    float item_1 = 5.6752;
    float item_2 = 10.2154;
    float item_3 = 100.9823;

    printf("Item 1: $%.2f\n", item_1);      //decimal
    printf("Item 2: $%8.2f\n", item_2);     //minimum field width
    printf("Item 2: $%-8.2f\n", item_3);    //left align

    return 0;
}
