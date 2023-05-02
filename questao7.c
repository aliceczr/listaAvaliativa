#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[10],i,numMaior,v;

    for ( i = 0; i <10; i++)
    {
        printf("\nEscreva um numero:");
        scanf("%d",&a[i]);
        numMaior = a[i];
       
         
    }
    
    for ( i = 0; i <10; i++)
    {
        printf("\n%d",a[i]);
         
        
    }
    for ( i = 0; i <10; i++)
    {
         if (numMaior<a[i]){
             v=i;
            numMaior=a[i];
           
            
        }
        
    }