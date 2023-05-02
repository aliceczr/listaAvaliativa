#include <stdlib.h>
#include <stdio.h>

int main(){
    int a[6] = {1,0,5,-2,-5,7},i;
    int soma=a[0]+a[1]+a[5];

    printf("Soma:%d",soma);
    a[4] = 100;

    for ( i = 0; i < 6; i++)
    {
        printf("\nVetor[%d]=%d",i,a[i]);
    }
    
}