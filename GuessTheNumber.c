#include <stdio.h>
#include <stdlib.h>
#include <time.h> // for random generator seed

int main()
{
    int randomNumber = 0;
    int guess = 0;
    int numberOfGuesses = 10;
    time_t t;

    // Initialization of random number generator
    srand((unsigned)time(&t));

    // Get the random number
    randomNumber = rand() % 100;

    printf("\nThis is a guessing game.");
    printf("\nI have chosen a number between 0 and 100, which you must guess. \n");

    for (numberOfGuesses = 10; numberOfGuesses > 0; --numberOfGuesses)
    {
        printf("\nYou have %d tr%s left.", numberOfGuesses, numberOfGuesses == 1 ? "y" : "ies");
        printf("\nEnter a guess: ");
        scanf("%d", &guess);

        if (guess == randomNumber)
        {
            printf("\nCongratulations, you guessed it!\n");
            return 0;
        }
        else if (guess < 0 || guess > 100) // checking for an invalid guess
            printf("I said the number is between 0 and 100.\n");
        else if (randomNumber > guess)
            printf("Sorry, %d is wrong. My number is greater than that.\n", guess);
        else if (randomNumber < guess)
            printf("Sorry, %d is wrong. My number is less than that. \n", guess);
    }
    printf("\nYou have had 10 tries and failed, you're stupid. The number was %d\n", randomNumber);

    printf("\n");

    return 0;
}