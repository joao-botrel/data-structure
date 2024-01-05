#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Crie funções para:
a. Alocar uma matriz para guardar n nomes de tamanho máximo m.
b. Armazenar n nomes de tamanho máximo m em uma matriz. Os nomes deverão
ser fornecidos pelo usuário.
c. Retornar a posição (linha) de um determinado nome na matriz. O nome deve ser
passado como parâmetro. Caso o nome não esteja na matriz, retorne -1.
Use as funções no programa principal.
*/



char** alocarMatriz(int n, int m){
  char **nomes;
  nomes = (char**)malloc(n*sizeof(char*));
  if (nomes == NULL){
    return NULL;
  }
  for (int i=0; i<n; i++){
    nomes[i] = (char*)malloc(m*sizeof(char));
    if (nomes[i] == NULL){
      return NULL;
    }
    
  }

  return nomes;
  
}


void insereNome(char **nomes, int n, int m){
  for (int i=0; i<n; i++){
      printf("Digite o nome: ");
      scanf("%s", nomes[i]);
    
  }
}

int verificaNome(char **nomes, char nome[20], int n){
  for (int i=0; i<n; i++){
      if (strcmp(nomes[i], nome) == 0){
        return i;
      }
    }
    return -1;
  }


int main(void) {
  char **nomes;
  int n, m;
    printf("Digite a quantidade de nomes: ");
    scanf("%d", &n);
    printf("Digite o número maximo de tamanho: ");
    scanf("%d", &m);
  nomes = alocarMatriz(n, m);
  insereNome(nomes, n, m);
  char nomeBusca[m + 1];
    printf("Digite um nome para buscar: ");
    scanf("%s", nomeBusca);
  int resultado = verificaNome(nomes, nomeBusca, n);
  if (resultado != -1) {
        printf("O nome '%s' foi encontrado na posição %d.\n", nomeBusca,           resultado);
    } else {
        printf("O nome '%s' não foi encontrado na matriz.\n", nomeBusca);
    }

    // Libera a memória alocada
    for (int i = 0; i < n; i++) {
        free(nomes[i]);
    }
    free(nomes);

  return 0;

}