#include <stdio.h>

logo(char carattere) //PARAMETRO FORMALE == (CHAR CARATTERE)
{
    int i;

    for (i = 0; i < 15; i++)
        printf("%c", carattere);

    printf("\n");

    printf("%c   RUBRICA   %c\n", carattere, carattere);
    for (i = 0; i < 15; i++)
        printf("%c", carattere);


    printf("\n\n");
}

int main()
{
    int scelta;

    logo('*');
    printf("1. Tizio\n");
    printf("2. Caio\n");
    printf("SCegliere contatto\n");
    scanf("%d", &scelta);

    logo('#');
    printf("Chiamata del contatto  %d  in corso \n", scelta);

    printf("fine\n");
    return 0;
}