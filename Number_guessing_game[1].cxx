/*
Name:Simon Muthama Makenzi
Reg number:CT101/G/26522/25
Description:A number guessing game where a person should try to guess the number
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;

    // Seed the random number generator
    srand(time(NULL));
    secretNumber = rand() % 20 + 1;  // Generates a number between 1 and 20
 
 //ask the user to guess the number
    do {
        printf("Guess the number (1 to 20): \n");
        scanf("%d", &guess);
        attempts++;

//Decision
        if (guess > secretNumber) {
            printf("Too high!\n");
        } else if (guess < secretNumber) {
            printf("Too low!\n");
        } else {
            printf("🎉 Congratulations! You guessed it.\n");
            printf("Total attempts: %d\n", attempts);
        }

    } while (guess != secretNumber);

    return 0;
}