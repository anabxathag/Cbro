#include <stdio.h>

int main(){

    int age;

    printf("\nEnter your age: ");
    scanf("%d", &age);

    if(age >= 18){
        printf("You are now signed up!");
    }
    else if(age < 0){
        printf("You haven't been born yet!");
    }
    else if(age == 0){
        printf("You can't signed up!, You're still a jelly!");
    }
    else{
        printf("You are too young to sign up!");
    }
    return 0;
 }
