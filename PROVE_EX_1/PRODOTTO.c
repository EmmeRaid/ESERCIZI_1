#include <stdio.h>

int main(){

    int i,n_input,p; //P ACCOUMULATORE


    p = 1;

    puts("inserisci 5 numeri");
    
    for (i = 1; i <= 5; i++)
    {
        scanf("%d", &n_input);

        p = p * n_input;

    }

    printf("%d", p);
    
    
}