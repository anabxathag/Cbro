#include <stdio.h>
#include <string.h>

int main(){

    char string1[] = "Anab";
    char string2[] = "Wera";
    char string3[] = "Oato";

    printf("\n%s", string1);
    printf("\n%s", string2);
    printf("\n%s", string3);

    strlwr(string1);      // converts a string to lowercase
    printf("\n");
    printf("\n%s", string1);

    strupr(string1);      // converts a string to uppercase
    printf("\n");
    printf("\n%s", string1);

    strcat(string1, string2);     // appends string2 to end of string1
    printf("\n");
    printf("\n%s", string1);

    strncat(string1, string2, 2);     // appends n characters from string2 to string1
    printf("\n");
    printf("\n%s", string1);

    strcpy(string1, string2);     // copy string2 to end of string1
    printf("\n");
    printf("\n%s", string1);

    strncpy(string3, string2, 1);     // copy n characters from string3 to string2
    printf("\n");
    printf("\n%s", string3);
    
    strset(string1, '?');       // sets all characters of a string to a given character
    printf("\n");
    printf("\n%s", string1);

    strnset(string1, 'x', 2);   // sets first n characters of a string to a given character
    printf("\n");
    printf("\n%s", string1);

    strrev(string1);        // reverses a string
    printf("\n");
    printf("\n%s", string1);

    int result_1 = strlen(string1);   // returns string length as int
    printf("\n");
    printf("\n%d", result_1);

    int result_2 = strcmp(string2, string3);   // string compare all characters
    printf("\n");
    printf("\n%d", result_2);
    if(result_2 == 0){
        printf("\nThese string are the same");
    }
    else{
        printf("\nThese string are not the same");
    }

    int result_3 = strncmp(string2, string3, 2);   // string compare n characters
    printf("\n");
    printf("\n%d", result_3);
    if(result_3 == 0){
        printf("\nThese string are the same");
    }
    else{
        printf("\nThese string are not the same");
    }

    int result_4 = strcmpi(string2, string2);   // string compare all (ignore case)
    printf("\n");
    printf("\n%d", result_4);
    if(result_4 == 0){
        printf("\nThese string are the same");
    }
    else{
        printf("\nThese string are not the same");
    }

    int result_5 = strnicmp(string2, string2, 1);   // string compare n characters (ignore case)
    printf("\n");
    printf("\n%d", result_5);
    if(result_5 == 0){
        printf("\nThese string are the same");
    }
    else{
        printf("\nThese string are not the same");
    }

    return 0;
}
