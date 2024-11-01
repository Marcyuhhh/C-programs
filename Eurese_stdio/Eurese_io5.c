#include <stdio.h>

int main()
{
    float kW, W;
    printf("Kilowatts to watts converter\n");
    printf("Enter kilowatts: ");
    scanf("%f" , &kW);
    
    W = kW * 1000;

    printf("\n %.0f kilowatts is equivalent to: %.2f watts", kW, W);

    return 0;
}