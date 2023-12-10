#include <stdio.h>
#include <stdlib.h>


/*
Elabore uma função para alocar dinamicamente um vetor de n posições e retornar o
ponteiro para o primeiro elemento deste vetor.
Elabore uma função para liberar um vetor de n posições.
*/



int* alocar(int n, int *p){
  p = (int*)malloc(n*sizeof(int));
  if (p==NULL){
    return 0;
  }

  return p;
}

void liberar(int *p){
  free(p);
}

int main(void) {
  int n;
  int *p;
  
  alocar(n, p);
  printf("%d", *p);
  liberar(p);
  
  return 0;
}