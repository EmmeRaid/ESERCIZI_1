#include <stdio.h>

int main (){

    int scelta, ritorno;
    ritorno = 1; goto logo;
elenco:
    printf("1. Tizio\n");
    printf("2. Caio\n");
    printf("SCegliere contatto\n");
    scanf("%d", &scelta);
    ritorno = 2 ; goto logo;
chiamata:
    printf("Chiamata del contatto %d in corso \n", scelta);
    goto fine;
logo:
    printf("#############\n");
    printf("#  RUBRICA  #\n");
    printf("#############\n");
    if (ritorno == 1) goto elenco;
    else if (ritorno == 2) goto chiamata;
fine:
    printf("Fine\n");
}