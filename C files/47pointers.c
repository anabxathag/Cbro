#include <stdio.h>

void printAgE(int aeg, int *ppap)
{
    printf("You are %d years old\n", aeg);
    printf("You are %d years old\n", *ppap);    // dereference
}

int main()
{
    /* pointer = a "variable-like" reference that holds a memory address to another varibles, 
    array, etc. some tasks are performed more easily with pointers */ 
    // * = indirection operator (value at address)

    int age = 21;   // An int variable
    int *pAGE = NULL;   //good practice to assign NULL if declaring a pointer
    pAGE = &age;    // A pointer variable, with the name pAGE, that stores the address of age
    //int *pAGE = &age;     

    printf("address of age: %p\n", &age);
    printf("value of pAGE: %p\n", pAGE);
    printf("size of age: %d bytes\n", sizeof(age));
    printf("size of pAGE: %d bytes\n", sizeof(pAGE));
    printf("value of age: %d\n", age);
    printf("value at stored address: %d\n", *pAGE);     // dereferencing
    printf("\n");

    printAgE(age, pAGE);

    return 0;
}
