#include <stdlib.h>
#include <stdio.h>

int main(){
    int a[8];
    int x,soma;
    for ( x = 0; x <8; x++)
    {
           printf("\nDigite um valor:");
           scanf("%d",&a[x]);
    }
     
     soma=a[2]+a[5];
    

    printf("Soma:%d",soma);
}