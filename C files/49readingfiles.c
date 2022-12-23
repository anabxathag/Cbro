#include <stdio.h>

int main()
{
    FILE *Aan = fopen("fortyegg.txt", "r");  // r = read
    char buffer[255];

    if(Aan == NULL)
    {
        printf("Unable to open file");
    }
    else{
        while(fgets(buffer, 255, Aan) != NULL)  //อ่านทั้งหมด
        {
            printf("%s", buffer);
        }
    }

    fclose(Aan);
    
    return 0;
}
