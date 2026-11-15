#include <stdio.h>

int main()
{
    float unit, bill;

    printf("Enter the number of units consumed: ");
    scanf("%f", &unit);

    if (unit <= 100)
    {
        bill = unit * 1.50;
    }
    else if (unit <= 200)
    {
        bill = 100 * 1.50 + (unit - 100) * 2.50;
    }
    else if (unit <= 300)
    {
        bill = 100 * 1.50 + 100 * 2.50 + (unit - 200) * 4.00;
    }
    else
    {
        bill = 100 * 1.50 + 100 * 2.50 + 100 * 4.00 + (unit - 300) * 5.00;
    }

    printf("Electric Bill = Rs. %.2f", bill);

    return 0;
}