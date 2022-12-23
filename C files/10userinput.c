#include <stdio.h>
#include <string.h> //ใช้กับบรรทัดที่14, string function

int main(){

    int age;
    char name[25];  // bytes
    char fullName[30];

    printf("Type your full name: ");
    // fgets() ควรเป็นinputตัวแรกสุด ไม่เช่นนั้น มันจะข้ามinputนี้ไปเลย
    fgets(fullName, sizeof(fullName), stdin);
    // input(), 30 (ขนาดข้อมูล), ใส่ให้แม่งอ่านspacebarได้
    fullName[strlen(fullName) - 1] = '\0';

    printf("How old are you? ");
    scanf("%d", &age); // อย่าใส่ข้อความในscanf เดี้ยวerror
    // & ใส่เพื่อให้คอมรู้ว่าจะเอาไปใช้ โดยเฉพาะพวกค่าที่เป็นตัวเลขกับsingle character

    printf("What's your nickname? ");
    scanf("%s", name);  // str ไม่จำเป็นต้องใส่ & ก็ได้
    // scanf() ถ้าinputโดยมีspacebar เช่น"John Doe" outputจะได้แค่John
    
    printf("Hello %s", fullName);
    printf("\nYou are %d years old", age);
    printf("\nHello %s, how are you?", name);
    
    return 0;
}
