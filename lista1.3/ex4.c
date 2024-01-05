#include <stdio.h>
#include <stdlib.h>


/*
Utilize notação de ponteiro
Desenvolva uma função que receba um vetor de inteiro e substitua todo valor = 0 do
vetor por algum outro valor que deverá ser também informado à função. Utilize a
função no programa principal. O vetor deve ser alocado dinamicamente na “main”. O
tamanho do vetor e os valores devem ser determinados pelo usuário.
*/

int* verificaZero(int* vetor, int n, int subst){
  for (int i=0; i<n; i++){
    if (*(vetor+i) == 0){
      *(vetor+i) = subst;
    }
  }
  return vetor;
}


int main(void) {
  int *vetor;
  int n;
  int subst;
  printf("Digite o tamanho do vetor: \n");
  scanf("%d", &n);
  vetor = (int*)malloc(n*sizeof(int));
  printf("Caso o valor seja 0, qual valor deverá ser substituído? \n");
  scanf("%d", &subst);
  for (int i=0; i<n; i++){
    printf("Digite o conteúdo do vetor na posição %d: \n", i+1);
    scanf("%d", vetor+i);
  }
  vetor = verificaZero(vetor, n, subst);
  for (int i=0; i<n; i++){
    printf("Conteúdo do vetor na posição %d: %d\n", i+1, *(vetor+i));
  }
  
  free(vetor);
  return 0;
}