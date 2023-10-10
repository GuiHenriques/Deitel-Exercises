#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number;
    number = rand() % 100;
    printf("%i\n", number);
    
    int guess;

    do {
        printf("Guess: ");
        scanf("%i", &guess);

        if (guess < number)
            printf("Higher!\n");
        else if (guess > number)
            printf("Lower!\n");

    } while (guess != number);

    printf("Exactly");
}
