#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int toss;

    srand(time(0));

    toss = rand() % 2;

    if (toss == 0)
    {
        printf("Heads - Team A won the toss");
    }
    else
    {
        printf("Tails - Team B won the toss");
    }

    return 0;
}