#include <stdio.h>

int main() {
    int score = 0;
    int answer;

    printf("=== Quiz Application ===\n");
    printf("Answer the following questions (enter option number):\n\n");

    // Question 1
    printf("Q1. What is the capital of India?\n");
    printf("1. Mumbai  2. Delhi  3. Kolkata  4. Chennai\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 2) { printf("Correct!\n"); score++; }
    else printf("Wrong! Correct answer is Delhi\n");

    // Question 2
    printf("\nQ2. Which language is used for system programming?\n");
    printf("1. Python  2. Java  3. C  4. HTML\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 3) { printf("Correct!\n"); score++; }
    else printf("Wrong! Correct answer is C\n");

    // Question 3
    printf("\nQ3. What does CPU stand for?\n");
    printf("1. Central Process Unit  2. Central Processing Unit\n");
    printf("3. Computer Processing Unit  4. Core Processing Unit\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 2) { printf("Correct!\n"); score++; }
    else printf("Wrong! Correct answer is Central Processing Unit\n");

    // Question 4
    printf("\nQ4. Which of these is NOT a programming language?\n");
    printf("1. Python  2. Java  3. HTML  4. C++\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 3) { printf("Correct!\n"); score++; }
    else printf("Wrong! Correct answer is HTML\n");

    // Question 5
    printf("\nQ5. What is 2^10?\n");
    printf("1. 512  2. 1024  3. 2048  4. 256\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 2) { printf("Correct!\n"); score++; }
    else printf("Wrong! Correct answer is 1024\n");

    printf("\n=== Quiz Completed ===\n");
    printf("Your Score = %d / 5\n", score);

    if (score == 5)
        printf("Excellent! Perfect Score!\n");
    else if (score >= 3)
        printf("Good Job!\n");
    else
        printf("Better luck next time!\n");

    return 0;
}