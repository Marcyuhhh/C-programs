#include <stdio.h>

int main()
{
    float in, ft;
    printf("INCHES TO FEET converter\n");
    printf("Enter inch(es): ");
    scanf("%f" , &in);
    
    ft = in/12;

    printf("\n %.0f inch(es)  is equivalent to : %.4f ft", in, ft);

    return 0;
}