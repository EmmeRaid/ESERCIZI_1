#include <stdio.h>

int main()
{
    int dividendo, divisore;
    int a,q;

    puts("Inserisci dividendo e divisore:  ");
    scanf("%d%d", &dividendo, &divisore);

    a = dividendo;
    q = 0;

    while (a >= divisore)
    {
        a = a - divisore;
        q = q + 1; 
    }

    printf("\nquoziente: %d", q);

    printf("\nresto: %d\n", a);
}