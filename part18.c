#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Initialize random number generator
    srand(time(0));

    // Generate random number between 0 to 100
    int RandomNumber = (rand() % 100) + 1;

    // Print the random number
    // printf("Random Number: %d\n", RandomNumber);

    int number_of_guesses = 0, guessed;
    printf("Guess the number:\n");

    do
    {
        scanf("%d", &guessed);
        if (guessed < RandomNumber)
        {
            printf("Guess a higher number\n");
        }
        else if (guessed > RandomNumber)
        {
            printf("Guess a lower number\n");
        }
        else
        {
            printf("Congrats\n");
        }
        number_of_guesses++;
    } while (guessed != RandomNumber);

    printf("You guessed the number in %d guess\n", number_of_guesses);

    return 0;
}
// it's a guessing game