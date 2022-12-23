#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MIN = 1;
    const int MAX = 20;
    int guess;
    int guesses = 0;
    int answer;

    srand(time(0));     // uses the current time as a seed
    answer = (rand() % MAX) + MIN;  // generate a random number between MIN & MAX

    do{
        printf("\nEnter a guess: ");
        scanf("%d", &guess);
        if(guess > answer)
        {
            printf("\nToo high!");
        }
        else if(guess < answer)
        {
            printf("\nToo low!");
        }
        else{
            printf("\nCORRECT!");
        }
        guesses++;
    }while(guess != answer);

    printf("\nAnswer: %d", answer);
    printf("\nGuesses: %d", guesses);

    return 0;
}
