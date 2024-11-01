#include <stdio.h>
 
int main()
{
    float C, F;
    printf("Fahrenheit to Celsius temperature converter \n");
    printf(" Enter the temperature in fahrenheit: ");
    scanf("%f", &F);
 
    C =( 5*(F-32)/9) ;

    printf("\n The temperature in celsius= %.2f C°", C);
 
    return 0;
} 