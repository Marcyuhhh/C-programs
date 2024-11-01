#include <stdio.h>

int main() {
    int n;
    printf("Enter number n please: ");
    scanf("%d", &n);
    int even, odd, i;
    odd = even = 0;
    for (i = 0; i <= n; i++) {
        if (i % 2 == 0)
            even += i;
        else
            odd += i;
    }
    printf("Sum even number from 1 to n: %d\n", even);
    printf("Sum odd number from 1 to n: %d\n", odd);
    return 0;
}
