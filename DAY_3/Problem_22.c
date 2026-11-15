#include <stdio.h>

int main()
{
    float basic, da, hra, fixed_allowance, annual_salary;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    fixed_allowance = 500;
    hra = 10 * basic / 100;
    da = 50 * basic / 100;

    annual_salary = (basic + da + hra + fixed_allowance) * 12;

    printf("Annual Salary = %.2f", annual_salary);

    return 0;
}