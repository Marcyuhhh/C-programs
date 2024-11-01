#include <stdio.h>

int main()
{
    int i, n;
    printf("NUMBERS IN ORDER FROM 1 TO n\n");
    printf("Enter any number: ");
    scanf("%d", &n);

    printf("Numbers from 1 to %d in increasing order: \n", n);

    for(i=1; i<=n; i++)
    {
        printf("%d ", i);
    }

    return 0;
}
