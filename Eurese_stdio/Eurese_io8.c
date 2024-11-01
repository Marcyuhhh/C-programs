#include <stdio.h>

int main()
{
    float tH, tB, A;
    printf("Area of a Triangle calculator \n");
    printf("Enter the base of the triangle: ");
    scanf("%f" , &tB);
    printf("Enter the height of the triangle: ");
    scanf("%f" , &tH);
    
    A  =(tB*tH)*1/2;

    printf("\nThe area of the a Triangle  is  : %.2f ", A);

    return 0;
} 