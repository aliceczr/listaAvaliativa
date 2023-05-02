#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[10],i;

    for ( i = 0; i <10; i++)
    {
        printf("\nEscreva um numero:");
        scanf("%d",&a[i]);
    }
     printf("\nO numeros pares sao:");
    for ( i = 0; i <10; i++)
    {
       
        if (a[i]% 2 ==0)
        
        printf("\n%d",a[i]);
    }