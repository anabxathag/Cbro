#include <stdio.h>
#include <stdbool.h>

int main(){
    // logical operators = && (AND) checks if two conditions are two
    float temp = 25;
    bool sunny = false;
    
    if(temp >= 0 && temp <= 32 && sunny == true){
        // เขียนแค่sunnyเฉยๆก็มีความหมายเดียวกัน
        printf("The weather is goooood!");
    }
    else{
        printf("The weather is baaaad!");
    }

    return 0;
}
