#include<stdio.h>


int main()
{
    int P,S;
  
    printf("WHAT IS THE T SHIRT SIZE:\n");
    printf("Press 1 for XL\n");
    printf("Press 2 forL\n");
    printf("Enter T-Shirt Size: ");
    scanf("%d", &S);
    switch(S)
    {
    case 1:
         printf("Enter the price of the t shirt: ");
         scanf("%d", &P);
       
         if(P >= 500)
         printf("You Have A Discount 100pesos!\nyour total price is %d",P-100);
         else
         printf("You didn't reach the discounted price\nYour total price is %d",P);
         break;
         
    case 2:
              printf("Enter the price of the t shirt: ");
              scanf("%d", &P);
              if(P >= 400)
              printf("You Have A Discount 50pesos!\nYour total price is %d",P-50);
               else
         printf("You didn't reach the discounted price\nYour total price is %d",P);
              break;
         default:
                  printf("\nINVALID PLEASE TRY AGAIN");
                
                  break;
         return 0;
         }
        
}