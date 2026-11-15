#include <stdio.h>

int main()
{
    int sum, square;

    sum = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10;

    square = sum * sum;

    printf("Sum of first 10 natural numbers = %d\n", sum);
    printf("Square of the sum = %d", square);

    return 0;
}