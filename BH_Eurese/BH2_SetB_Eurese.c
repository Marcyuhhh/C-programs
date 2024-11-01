#include <stdio.h>
#include <string.h>

int main() {
    char RainbowColor[] = "violet";
    char guess[20];
    char TryAgain;

    do {
        printf("Guess a color: ");
        scanf("%s", guess);
        
        // strcmp/string compare is a function comparing two strings.

        while( strcmp (guess, RainbowColor) != 0) {
            printf("Incorrect guess. \nPlease try a different color: ");
            scanf("%s", guess);
        }

        printf("great job!!, you guess it right.\n");
        printf("Do you want to play again? (Y/N): ");
        scanf(" %c", &TryAgain);
    } while(TryAgain == 'Y' || TryAgain == 'y');

    return 0;
}
