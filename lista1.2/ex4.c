#include <stdio.h>
#include <stdlib.h>


/*
Crie um programa com duas matrizes de dimensão 2 x 2. Uma matriz deve ser alocada
dinamicamente e a outra deve ser alocada de forma estática.
Utilize as funções do exercício 7 para alocar e preencher os dados da matriz. Suponha que
os nomes das matrizes sejam matE (matriz estática) e matA (matriz dinâmica). Para cada
matriz, imprima:
• endereço de matE e matA
• endereço de cada linha da matriz
• o valor de matE[i] e matA[i], sendo i o número de cada linha da matriz
• endereço do primeiro elemento de cada linha da matriz
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


int main(void) {
  int **matE;
  int l, c;
  int matA[l][c];
  printf("Insira a quantidade de linhas: \n");
  scanf("%d", &l);
  printf("Insira a quantidade de colunas: \n");
  scanf("%d", &c);  
  matE = alocaMatriz(l, c);
  if (matE == NULL){
    return 1;
  }
  preencheMatriz(matE, l, c);
  for (int i=0; i<l; i++){
    for (int j=0; j<c; j++){
      printf("Digite o valor da matriz: \n");
      scanf("%d", &matE[i][j]);
    }
  }
  printf("Endereço de matE: %p\n", matE[0]);
  printf("Endereço de matA: %p\n", matA[0]);

  for (int i=0; i<l; i++){
    printf("Endereço da linha %d da matriz estática: %p", i, &matE[i]);
  }

  for (int i=0; i<l; i++){
    printf("Endereço da linha %d da matriz dinâmica: %p", i, &matA[i]);
  }

  
  
  
  
  
  
  return 0;
}