#include <stdio.h>

int main()
{
    int i,num;
    printf("ALL THE ODDS NUMBERS FROM 1 TO n\n");
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Odd numbers from 1 to %d are ",num);
    for(i=1; i<=num; i++){
        if(i%2==1)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
