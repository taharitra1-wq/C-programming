#include <stdio.h>

int main()
{
    char name1, name2;
    int a1, a2, a3, a4, a5;
    int b1, b2, b3, b4, b5;

    printf("Enter first student name initial: ");
    scanf(" %c", &name1);

    printf("Enter 5 marks: ");
    scanf("%d %d %d %d %d", &a1, &a2, &a3, &a4, &a5);

    printf("Enter second student name initial: ");
    scanf(" %c", &name2);

    printf("Enter 5 marks: ");
    scanf("%d %d %d %d %d", &b1, &b2, &b3, &b4, &b5);

    printf("\nHighest scorer in each subject:\n");

    printf("Subject 1: %c\n", (a1 >= b1) ? name1 : name2);
    printf("Subject 2: %c\n", (a2 >= b2) ? name1 : name2);
    printf("Subject 3: %c\n", (a3 >= b3) ? name1 : name2);
    printf("Subject 4: %c\n", (a4 >= b4) ? name1 : name2);
    printf("Subject 5: %c\n", (a5 >= b5) ? name1 : name2);

    return 0;
}