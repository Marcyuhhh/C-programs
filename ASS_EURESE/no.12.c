#include<stdio.h>
int main()
{
    float amount, discount, amountToBePaid;
    printf("How much shopping amount you have done here ? ");
    scanf("%f", &amount);
    printf("\n");
    
    if(amount<=1999)
        printf("You have to paid: %0.2f", amount);
    else
    {
            discount = (amount*5)/100;
            amountToBePaid = amount-discount;
            printf("After applying the discount, you have to paid: %0.2f", amountToBePaid);
        }
      
    return 0;
} 