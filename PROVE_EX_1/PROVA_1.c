#include <stdio.h>

int main()
{

  int n, somma;

  scanf("%d", &n);

  somma = 0; // INIZIALIZZATO

  for (size_t i = 1; i <= n; i++) // (I) => IN QUESTO CASO VIENE UTILIZZATO COME CONTATORE
  {
    somma += i; // SOMMA FA DA ACCUMULATORE => IL RISULTATO DELLA PARTE DI CALCOLO FATTE FINORA
    printf("%d\n", somma);
  }

  printf("%d\n", somma);
}
