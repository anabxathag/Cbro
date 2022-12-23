#include <stdio.h>
// ดูไฟล์ที่ 22 ประกอบด้วย
void hello(char[], int); //function prototype 
// โค้ดมันอ่านจากบนลงล่าง ถ้าไม่ใส่func proto.แล้วแม่งจะเอ๋อ 

int main()
{
    /* function prototype */
    // WHAT IS IT?
    // F๊unction declaration, w/o a body, before main()
    // Ensures that calls to a function are made with the correct argrments

    /* IMPORTANT NOTES */
    // Many C compilers do not check for parameter matching
    // Missing arduments will result in unexpected behavior
    // A function prototype causes the compiler to flag an error if arguments are missing

    /* ADVANTAGES */
    // 1. Easier to navigate a program w/ main() at the top
    // 2. Helps with debugging
    // 3. Commonly used in header files
    
    char name[] = "Art";
    int age = 19;

    hello(name, age);

    return 0;
}

void hello(char name[], int age)
{
    printf("\nHello %s", name);
    printf("\nYou are %d years old", age);

}
