#include <stdio.h>

int main() {
    int n, last_digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    last_digit = n - (n / 10) * 10;

    printf("Last digit = %d", last_digit);

    return 0;
}