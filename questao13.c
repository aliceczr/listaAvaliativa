#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[5],i,numMaior,numMenor,nV,nmV;
  

    for ( i = 0; i <5; i++)
    {
        printf("\nEscreva um numero:");
        scanf("%d",&a[i]);
        numMaior = a[i];
        numMenor = a[i];
      
         
    }
    
    for ( i = 0; i <5; i++)
    {
         if (numMaior<a[i]){
        
            numMaior=a[i];
            nV=i;
        }
          if (numMenor>a[i]){
        
             numMenor=a[i];
            nmV=i;
        
        }
      
    }
        
     printf("Numero Maior[%d]:%d \n Numero Menor[%d]:%d",nV,numMaior,nmV,numMenor);
     
}