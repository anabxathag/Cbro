#include <stdio.h>
#include <string.h>

typedef struct 
{
    char name[25];
    char password[12];
    int id;
} User;
/*
struct User
{
    char name[25];
    char password[12];
    int id;
};
*/

int main()
{
    // typedef = reserved keyword that gives an existing datatype a "nickname"

    User u_1 = {"Art", "Iron565golD", 65070083};
    //struct User u_1 = {"Art", "Iron565golD", 65070083};
    User u_2 = {"Brok", "2mayoneir24", 21426384};

    printf("\n%s",u_1.name);
    printf("\n%s",u_1.password);
    printf("\n%d",u_1.id);
    printf("\n");
    printf("\n%s",u_2.name);
    printf("\n%s",u_2.password);
    printf("\n%d",u_2.id);

    return 0;
}
