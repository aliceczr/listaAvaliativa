#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[10],i,numMaior,numMenor,soma=0;
    float media;

    for ( i = 0; i <10; i++)
    {
        printf("\nEscreva um numero:");
        scanf("%d",&a[i]);
        numMaior = a[i];
        numMenor = a[i];
        soma = soma+a[i];
         
    }
    
    for ( i = 0; i <10; i++)
    {
         if (numMaior<a[i]){
        
            numMaior=a[i];
        }
          if (numMenor>a[i]){
        
             numMenor=a[i];
        
        }
    }
        media = soma/10;
     printf("Numero Maior:%d \n Numero Menor:%d",numMaior,numMenor);
     printf("\nMedia:%.2f",media);
}