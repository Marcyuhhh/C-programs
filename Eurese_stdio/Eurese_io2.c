#include <stdio.h>

int main()
{
    float pi, r, A;
    printf("Area of a Circle calculator\n");
    printf("Enter the radius of a circle: ");
    scanf("%f" , &r);
    
    pi = 3.14159;
    A  = pi*r*r;

    printf("\n The area of the circle is  : %.2f ", A);

    return 0;
} 