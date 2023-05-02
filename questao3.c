#include <stdlib.h>
#include <stdio.h>

int main(){
    int a[10],b[10];
    int x,y,i;
    for ( x = 0; x < 10; x++)
    {
           printf("\nDigite um valor:");
           scanf("%d",&a[x]);
           

    }
    
    for ( y = 0; y < 10; y++)
    {
        b[y] = a[y];
        b[y] = b[y]*b[y];
        
    }
    
     for ( i = 0; i < 10; i++)
    {
           printf("\nVetor[a-%d]:%d",i,a[i]);
           
           
           

    }
     for ( i = 0; i < 10; i++)
    {
           
           printf("\nVetor[b-%d]:%d",i,b[i]);
           
           

    }

}