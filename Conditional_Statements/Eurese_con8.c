#include <stdio.h>

int main()
{
    //WH IS WORKING HOURS,S IS SALARY, HR IS HOURLY RATE//
    float WH,HR,S;
    printf("Enter the number of hours worked: ");
    scanf("%f",&WH);
     printf("\nEnter hourly rate:");
     scanf("%f",&HR);
     
    S=WH*HR;
    
    if(WH>35 && WH<=40)
        {
        printf("\nYour total salary with bonus is %.2f",S+150);
        }
    else if(WH>40 && WH<=45)
    {
        printf("\nYour total salary with bonus is %.2f",S+250); 
    }
    else if(WH>45)
    {
        printf("\nYour total salary with bonus is %.2f",S+500);
    }
    else if(WH<35 && WH>=0)
    {
        printf("\nNO BONUS RECEIVED\nTotal salary is %.0f",S);
    }
    else
  printf("\nINVALID PLEASE TRY AGAIN");
    return 0;
} 