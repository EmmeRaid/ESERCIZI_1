#include <stdio.h>

int main()
{
    int i, doppio;
    // OPERAZIONE MAP()

    for (i = 1; i <= 10; i++) // SEQUENZA S1
    {

        // s2 = map(*2, s1)

        doppio = (i * 2); // SEQUENZA S2

        printf("%d\n",doppio); //OUTPUT S2
    }
}
