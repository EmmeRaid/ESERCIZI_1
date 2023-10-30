#include <stdio.h>

void logo(void)
{
    printf("#############\n");
    printf("#  RUBRICA  #\n");
    printf("#############\n");
}

int main()
{
    int scelta;

    logo();
    printf("1. Tizio\n");
    printf("2. Caio\n");
    printf("SCegliere contatto\n");
    scanf("%d", &scelta);

    logo();
    printf("Chiamata del contatto  %d  in corso \n", scelta);

    printf("fine\n");
    return 0;
}