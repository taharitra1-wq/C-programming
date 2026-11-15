#include <stdio.h>

int main()
{
    int sec, hour, minute, second;

    printf("Enter time in seconds: ");
    scanf("%d", &sec);

    hour = sec / 3600;
    minute = (sec % 3600) / 60;
    second = sec % 60;

    printf("Time = %d hours %d minutes %d seconds", hour, minute, second);

    return 0;
}