#include <stdio.h>


int main (){

    int i;

    for (i = 1; i < 100; i++)
    {
        if(i % 3 == 0){
            printf("BIM\n");
        }
        if(i % 5 == 0){
            printf("BUM\n");
        }
        if(i % 5 == 0 && i % 3 == 0){
            printf("BIMBUM\n");
        }else if(i % 5 != 0 && i % 3 != 0)
            printf("%d\n",i);
    }
    
}