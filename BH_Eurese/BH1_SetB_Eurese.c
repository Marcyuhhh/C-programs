#include <stdio.h>

int Even_Numbers() {
    int count = 0, i;
    for(i = 1; i <= 100; i++) {
        if(i % 2 == 0) {
            printf("%d\n", i);
            count++;
            if(count % 10 == 0) {
                printf("\n");
            }
        }
    }
}

int main() {
    char repeat;
    do {
        Even_Numbers();
        printf("Do you want to repeat the program? (Y/N): ");
        scanf(" %c", &repeat);
    } while(repeat == 'Y' || repeat == 'y');

    return 0;
}
