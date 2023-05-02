#include <stdlib.h>
#include <stdio.h>

int main(){
    int a[6],i;
    int soma=a[0]+a[1]+a[5],x;
    for ( x = 0; x < 6; x++)
    {
           printf("Digite um valor:");
            scanf("%d",&a[x]);
    }
    
 

    for ( i = 0; i < 6; i++)
    {
        printf("\nVetor[%d]=%d",i,a[i]);
    }
    
}