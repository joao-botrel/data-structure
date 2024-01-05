#include <stdio.h>
#include <stdlib.h>

/*
Utilize notação de ponteiros
Elabore uma função que receba um vetor de inteiro e retorne o valor do maior e do
menor elemento do vetor. Utilize a função no programa principal. O vetor deve ser
alocado dinamicamente na “main”. O tamanho do vetor e os valores devem ser
determinados pelo usuário.
*/


void acheMaioreMenor(int *vetor, int n) {
  int maior = *(vetor + 0);
  int menor = *(vetor + 0);
  for (int i = 0; i < n; i++) {
    if (*(vetor + i) > maior) {
      maior = *(vetor + i);
    }
    if (*(vetor + i) < menor) {
      menor = *(vetor + i);
    }
  }

  printf("Maior valor: %d\n", maior);
  printf("Menor valor: %d\n", menor);
}

int main(void) {
  int *vetor;
  int n;
  printf("Qual o tamanho do vetor? \n");
  scanf("%d", &n);
  vetor = (int *)malloc(n * sizeof(int));

  for (int i = 0; i < n; i++) {
    printf("Preencha o vetor na posição %d: \n", i + 1);
    scanf("%d", vetor + i);
  }

  acheMaioreMenor(vetor, n);

  free(vetor);
  return 0;
}