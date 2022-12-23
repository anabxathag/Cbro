#include <stdio.h>

int main(){

    /*variable = Allocated space in memory to store a value.
        We refer to a varible's name to ascess the store value.
        That variable now behaves as if it was the values it contains.
        but we need to declare what type of data we are storing*/
    
    int x;  // declaration
    x = 123;    // initialization
    int y = 321; // declaration + initialization
    int age = 21; // integer
    float gpa = 3.26; // floating point number
    char grade = 'C'; // single character
    char name[] = "Bro"; // array of character
    
    printf("Hello %s!\n",name);  // %s for array of character
    printf("Your are %d years old.\n", age); // %d for integer
    printf("Your average grade is %c.\n", grade); // %c for single character
    printf("%i dollars\n",y); // %i for integer
    printf("Your gpa is %f!\n",gpa); // %f for float
    return 0;
}
