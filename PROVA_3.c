#include <stdio.h>

int main()
{
    int i;

    for (i = 1; i <= 20; i++)
    {
        if (i % 2 == 0)
        {
            printf("Divisibili per 2:  %d\n", i);
        }
        if (i % 3 == 0)
        {
            printf("Divisibili per 3:  %d\n", i);
        }
    }
}