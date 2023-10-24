#include <stdio.h>


int main(){

    char c;
    
    
    scanf("%c", &c);

    if(c >= 65 && c <= 90)
        printf("%d, %c, Maiuscola", c,c);
    else if(c >= 97 && c <= 122)
        printf("%d, %c, Minuscola", c,c);
    else if(c >= 48 && c <= 57)
        printf("%d, %c, Cifra", c,c);
    else
        printf("Altro");
    
    
}