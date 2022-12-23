#include <stdio.h>
#include <ctype.h>

int main(){

    // temperature conversion program
    char unit;
    float temp;

    printf("\nIs the temperature in (F) or (C)?: ");
    scanf("%c", &unit);

    unit = toupper(unit);   // .upper() ตัวใหญ่หมด

    if(unit == 'C'){
        printf("\nEnter the temp in Celsius: ");
        scanf("%f", &temp);
        temp = ((temp * 9) / 5) + 32;
        printf("\nThe temp in Farenheit is %1.f", temp);
    }
    else if(unit == 'F'){
        printf("\nEnter the temp in Farenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe temp in Celsius is %1.f", temp);
    }
    else{
        printf("\nThis is not temp unit.");
    }

    return 0;
}