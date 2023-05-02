#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[10],i;

    for ( i = 0; i <10; i++)
    {
        printf("\nEscreva um numero:");
        scanf("%d",&a[i]);     
    }
    
    for ( i = 0; i <10; i++)
    {
        printf("\n%d",a[9-i]);    
    }
