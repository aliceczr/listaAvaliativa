#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int nota[15];
  float media;
  int i,soma=0;

  for(i=0; i<15; i++){
    printf("Digite sua nota:\n");
    scanf("%d",&nota[i]);
  }
  for(i=0; i<15; i++){
    soma=soma+nota[i];
  }
  media = soma/15;

  printf("A media é:%.2f",media);
  return 0;
}