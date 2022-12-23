#include <stdio.h>
#include <string.h>

struct Player
{
    char name[12];
    int score;
};

int main()
{
    /*
    struct = collection of related members("variables") they can be of
    different data types listed under one name in a block of memory
    VERY SIMILAR to classes in other languages(but no methods)
    */

    struct Player p1;
    struct Player p2;

    strcpy(p1.name, "JoJo");
    p1.score = 8;

    strcpy(p2.name, "Dio"); // p2.name = "Dio" เขียนแบบนี้แล้วเอ๋อ
    p2.score = 10;

    printf("\n%s", p1.name);
    printf("\n%d", p1.score);

    printf("\n%s", p2.name);
    printf("\n%d", p2.score);

    return 0;
}

