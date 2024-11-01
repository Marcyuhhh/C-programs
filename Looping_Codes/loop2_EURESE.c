#include <stdio.h>
int main() {
    int n, i, sum = 0;
    
	printf("THE SUM OF ALL NUMBERS FROM 1 TO n\n");
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("Sum = %d", sum);
    return 0;
}

