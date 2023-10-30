#include <stdio.h>

int main()
{

    char c;
  

    do
    {
        scanf(" %c", &c);

        if (c >= 65 && c <= 90)
            printf("%d, %c, Maiuscola\n", c, c);
        else if (c >= 97 && c <= 122)
            printf("%d, %c, Minuscola\n", c, c);
        else if (c >= 48 && c <= 57)
            printf("%d, %c, Cifra\n", c, c);
        else
            printf("%d, %c Simbolo\n", c, c);
    } while (c != 48);
}