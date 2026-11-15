#include <stdio.h>

int main()
{
    float income, tax;

    printf("Enter annual income: ");
    scanf("%f", &income);

    if (income <= 250000)
    {
        tax = 0;
    }
    else if (income <= 500000)
    {
        tax = (income - 250000) * 5 / 100;
    }
    else if (income <= 1000000)
    {
        tax = 12500 + (income - 500000) * 20 / 100;
    }
    else
    {
        tax = 112500 + (income - 1000000) * 30 / 100;
    }

    printf("Income Tax = Rs. %.2f", tax);

    return 0;
}