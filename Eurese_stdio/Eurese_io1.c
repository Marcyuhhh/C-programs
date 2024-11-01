#include <stdio.h>

int main()
{
    float km, m, cm, mm;
    printf("Distance in kilometer to its metric equivalent converter\n");
    printf("Enter distance in kilometer: ");
    scanf("%f" , &km);
    
    m = km * 1000;
    cm = km * 10000;
    mm = km * 100000;

    printf("\n Distance in meters : %.2f m", m);
    printf("\n Distance in centimeters : %.2f cm" , cm);
    printf("\n Distance in millimeters : %.2f mm", mm); 

    return 0;
}