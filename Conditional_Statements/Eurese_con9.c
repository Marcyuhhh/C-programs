#include <stdio.h>

int main()
{
    double I, T;
    int n;
    printf("TAX DUE OR RETURN FOR THE FAMILY BASED ON THEIR INCOME\n"
           "");
    printf("Enter total income family: ");
    scanf("%lf", &I);
    printf("\nEnter number of dependents: ");
    scanf("%d", &n);
    I = I - n * 1000;
    if (I <= 10000)
    {
        T = I * 0.02;
    }
    else if (I >= 10001 && I <= 20000)
    {
        T = I * 0.05;
    }
    else if (I >= 20001 && I <= 30000)
    {
        T = I * 0.07;
    }
    else if (I >= 30001 && I <= 50000)
    {
        T = I * 0.1;
    }
    else if (I >= 50001)
    {
        T = I * 0.15;
    }

    printf("\nThe TAX or REFUND amount is: %.2lf ", T);
    return 0;
}