#include <stdio.h>

int main()
{
    float m², ha;
    printf("Square Meter to Hectars\n");
    printf("Enter meter²: ");
    scanf("%f" , &m²);
    
    ha = m²/10000;

    printf("\n %.0f meter² is equivalent to: %.3f ha. ", m², ha);

    return 0;
}