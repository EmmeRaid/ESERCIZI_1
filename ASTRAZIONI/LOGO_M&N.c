#include <stdio.h>

riga(int m, int n)
{
    int i, j;

    for (i = 0; i < m; i++)
    {

        for (j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int scelta, m, n;

    scanf("%d%d", &m, &n);
    riga(m, n);
}