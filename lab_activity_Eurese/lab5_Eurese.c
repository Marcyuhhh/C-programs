#include <stdio.h>

int main() {
    int n, i;
    int odd;

    printf("Enter the number of integers in the list: ");
    scanf("%d", &n);

    printf("Enter the list of integers:\n");

    for (i = 0; i < n; i++) {
        scanf("%d", &odd);

        if (odd > 0 && odd % 2 != 0) {
            printf("The first positive odd number is: %d\n", odd);
            break;
        }
    }

    return 0;
}
