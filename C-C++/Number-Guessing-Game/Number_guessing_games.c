#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int lower, upper, number, guess, attempts = 0;
    srand(time(0));

    printf("Enter the lower bound of the range: ");
    scanf("%d", &lower);
    printf("Enter the upper bound of the range: ");
    scanf("%d", &upper);

    number = (rand() % (upper - lower + 1)) + lower; // Generates a random number within the range

    printf("Guess the number (between %d and %d):\n", lower, upper);

    do {
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("Lower number please!\n");
        } else if (guess < number) {
            printf("Higher number please!\n");
        } else {
            printf("You guessed it in %d attempts!\n", attempts);
        }
    } while (guess != number);

    return 0;
}
