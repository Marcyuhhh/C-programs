#include <stdio.h>

int main()
{
    float s, A;
    printf("Area of a SQUARE calculator\n");
    printf("Enter the measured side of the square : ");
    scanf("%f" , &s);
    A  = s*s;

    printf("\n The area of the square is  : %.2f²", A);

    return 0;
}  