#include <stdio.h>
#include <stdlib.h>

/*
Elabore um programa com as seguintes funções:
- alocaMatriz: retornar uma matriz de inteiros de l linhas e c colunas alocada na
memória
- preencheMatriz: preencher os valores de uma matriz de inteiros com l linhas e c
colunas
- imprimeMatriz: imprimir os valores de uma matriz de inteiros com l linhas e c
colunas
Utilize as funções no programa principal.
*/


int** alocaMatriz(int l, int c){
  int **mat;
  mat = (int**)malloc(l*sizeof(int*));
  if (mat == NULL){
    printf("Memória insuficiente\n");
    return NULL;
  }
  for (int i=0;i<l; i++){
    mat[i] = (int*)malloc(c*sizeof(int));
    if (mat[i] == NULL){
      printf("Memória insuficiente\n");
      return NULL; 
    }
  }

  return mat;
  
}

void preencheMatriz(int **mat, int l, int c){
  for (int i=0; i<l; i++){
    for (int j=0; j<c; j++){
      printf("Digite o valor da matriz: \n");
      scanf("%d", &mat[i][j]);
    }
  }
}

void imprimeMatriz(int **mat, int l, int c){
  for (int i=0; i<l; i++){
    for (int j=0; j<c; j++){
      printf("O valor da matriz na linha %d e coluna %d é: %d\n", i, j, mat[i][j]);
    }
  }
}

int main(void) {
  int **mat;
  int l, c;
  printf("Insira a quantidade de linhas: \n");
  scanf("%d", &l);
  printf("Insira a quantidade de colunas: \n");
  scanf("%d", &c);  
  mat = alocaMatriz(l, c);
  if (mat == NULL){
    return 1;
  }
  preencheMatriz(mat, l, c);
  imprimeMatriz(mat, l, c);
  
  return 0;
}