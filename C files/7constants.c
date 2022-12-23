#include <stdio.h>

int main(){

    // constant = fixed value that cannot be altered by the program during its execution
    
    float pie = 3.14159;
    pie = 420.58;
    printf("%f\n", pie);

    const float PI = 3.14159;   // cannot change this value
    // PI = 420.58;     if you write this line, you earn error.
    printf("%f\n", PI);

    return 0;
}
