#include <stdio.h>

int main(){

    /* switch = A more efficient alternative to using many "else if"
    statements allow a value to be tested for equality against many cases*/

    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    /*  if else statements
    
    if(grade == 'A'){
        printf("Good!");
    }
    else if(grade == 'B'){
        printf("Not Bad!");
    }
    else if(grade == 'C'){
        printf("Average!, Almost stupid!");
    }
    else if(grade == 'D'){
        printf("Maron!");
    }
    else{
        printf("No brain in your head?, brainless!");
    }
    */
    
   switch (grade){
        case 'A':
            printf("Good!");
            break;
        case 'B':
            printf("Not Bad!");
            break;
        case 'C':
            printf("Average!, Almost stupid!");
            break;
        case 'D':
            printf("Maron!");
            break;
        case 'F':
            printf("No brain in your head?, brainless!");
            break;
        default:
            printf("Put you fuking grade!, U piece of shit!");
            break;
   }
   // ถ้าไม่ใส่break มันจะทำงานบรรทัดที่เหลือที่ไม่ใช่บรรทัดที่ถูกต้อง

    return 0;
 }
