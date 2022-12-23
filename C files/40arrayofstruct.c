#include <stdio.h>
#include <string.h>

struct Student
{
    char name[12];  // 12 bytes
    float gpa;      // 4 bytes
};

int main()
{
    struct Student s_1 = {"Spongebob", 3.0};
    struct Student s_2 = {"Patrick", 2.5};
    struct Student s_3 = {"Sandy", 4.0};
    struct Student s_4 = {"Alfred", 2.0};
    struct Student Class[] = {s_1, s_2, s_3, s_4};

    printf("\n%d", sizeof(Class));
    printf("\n%d", sizeof(Class[0]));
    printf("\n\n");

    for(int i = 0; i < sizeof(Class)/sizeof(Class[0]); i++)
    {
        printf("%-10s\t", Class[i].name);
        printf("%.2f\n", Class[i].gpa);
    }

    return 0;
}

