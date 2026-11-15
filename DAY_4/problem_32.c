#include <stdio.h>

int main()
{
    int days, years, months, remaining_days;

    printf("Enter age in days: ");
    scanf("%d", &days);

    years = days / 365;
    days = days % 365;

    months = days / 30;
    remaining_days = days % 30;

    printf("Age = %d years, %d months and %d days",
           years, months, remaining_days);

    return 0;
}