#include <stdio.h>

int main()
{
    FILE *kean = fopen("fortyegg.txt", "w");  // w = write
    fprintf(kean, "Diego Brando");
    fprintf(kean, " --> JoJokun");
    fprintf(kean, "\nbizzare");
    fclose(kean);
    // คำสั่ง w เขียนคำที่ต้องการลงไป โดนถ้ามีเนื้อหาอยู่ในนั้นอยู่แล้ว จะลบเนื้อหาทั้งหมดแล้วเขียนใหม่
    FILE *peom = fopen("fortyegg.txt", "a");  // a = append
    fprintf(peom, "\nSpoogebox");
    fprintf(peom, " like Hamburger");
    fclose(peom);
    // คำสั่ง a เพิ่มเนื้อหาในไฟล์ โดยถ้ามีเนื้อหาอยู่ในนั้นอยู่แล้ว ก็เพิ่มเนื้อหาที่ใส่ไป

    return 0;
}
