#include <stdio.h>

int main()
{
    char days;

    printf("Enter week number (1-7): ");
    scanf("%c", &days);
    switch (days){


       case '1':
       printf("It's SUNDAY!");
       break;
       case '2':
       printf("It's MONDAY !");
       break; 
       case '3':
       printf("It's TUESDAY");
       break;
       case'4':
       printf("It's WEDNESDAY! ");
       break;
       case '5':
       printf("It's THURSDAY! ");
       break;
       case '6':
       printf("it's FRIDAY!");
       break;
       case '7':
       printf("it's SATURDAY ");
       break;
       default:
       printf("Day is not available");
       break;
    }

    return 0;
} 