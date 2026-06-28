#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int secret = rand() % 100 + 1;
    int guess, attempts = 0;

    printf("=== Number Guessing Game ===\n");
    printf("Guess the number between 1 and 100\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < secret)
            printf("Too Low! Try again.\n");
        else if (guess > secret)
            printf("Too High! Try again.\n");
        else
            printf("Correct! You guessed it in %d attempts!\n", attempts);

    } while (guess != secret);

    return 0;
}