#include <stdio.h>

// Dichiarazione della funzione "cubo"
int cubo(int numero)
{
    int i,M;

    for (i = 0; i <= numero; i++)
    {
        printf("%d\n", i * i * i);
    }
}

int main()
{
    int numeri[100]; // Array di 100 interi

    int M, i;
    printf("Inserisci un numero M (deve essere minore o uguale a 100): ");
    scanf("%d", &M);

    if (M <= 100)
    {
        int risultato = cubo(M);
        printf("Il cubo di %d è %d\n", M, risultato);

    }
    else
    {
        printf("Il numero M deve essere minore o uguale a 100.\n");
    }

    return 0;
}
