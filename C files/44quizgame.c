#include <stdio.h>
#include <ctype.h>

int main()
{
    // 100 bytes
    char questions[][100] = {"1. What year did the C language debut ?",
                            "2. Who is credited with creating C ?",
                            "3. What is predecessor of C ?"};
    char options[][100] = {"A. 1969", "B. 1972", "C. 1975", "D. 1999",
        "A. Denis Ritchie", "B. Nikola Tesla", "C. John Carmack", "D. Doc Brown",
        "A. Objective C", "B. B", "C. C++", "D. C#"};

    char answers[3] = {'B', 'A', 'B'};
    int nubmerOfQuestions = sizeof(questions)/sizeof(questions[0]);

    char guess;
    int score = 0;

    printf("\n>>> QUIZ GAME <<<");

    for(int i = 0; i < nubmerOfQuestions; i++)
    {
        printf("\n***************************");
        printf("\n%s", questions[i]);

        for(int j = (i * 4); j < (i * 4) + 4; j++)
        {
            printf("\n\t%s", options[j]);
        }

        scanf("%c");    // clear \n from input buffer (ให้ข้ามinputนี้ในลูปแรกไป)
        printf("\nguess: ");
        scanf("%c", &guess);
        /*
        for(int j = (i * 4); j < (i * 4) + 4; j++)
        {
            printf("\t%s\n", options[j]);
        }
        printf("guess: ");
        scanf("%c", &guess);
        scanf("%c");    // clear \n from input buffer

        ดูความเอ๋อย้อนหลังของ scanf() ได้ที่ไฟล์ที่30
        */

        guess = toupper(guess); // upper
        if(guess == answers[i])
        {
            printf("\nCORRECT!");
            score++;
        }
        else
        {
            printf("\nWRONG!");
        }
    }

    printf("\n***************************");
    printf("\nFINAL SCORE: %d/%d", score, nubmerOfQuestions);

    return 0;
}
