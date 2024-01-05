#include <stdio.h>
#include <stdlib.h>


/*
UTILIZE NOTAÇÃO DE PONTEIRO!
Desenvolva uma função com os parâmetros N (número de elementos do vetor) e V
(vetor de valores numéricos) e que retorna a soma dos valores do vetor. Use a função
para calcular a soma de um vetor de até 10 números inteiros digitados no teclado
*/


int calculaSomaDeVetor (int n, int *vetor){
  int soma=0;
  for(int i=0; i<n; i++){
    soma = soma + *(vetor + i);
  }
  return soma;
}



int main(void) {
  int *vetor;
  int n=10;
  int soma;
  vetor = (int*)malloc(n*sizeof(int));
  for (int i=0; i<n; i++){
    printf("Digite o valor do vetor na posição %d: ", i+1);
    scanf("%d", vetor + i);
  }
  soma = calculaSomaDeVetor(n, vetor);
  printf("Soma: %d\n", soma);

  free(vetor);
}