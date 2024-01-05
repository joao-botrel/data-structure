#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Crie uma estrutura para armazenar informações sobre aluno contendo os seguintes
dados:
a. Nome (cadeia de caractere de tamanho máximo = 100)
b. Matrícula (inteiro)
Elabore um tipo baseado na estrutura criada. Crie um programa para facilitar o
gerenciamento das informações dos alunos de uma turma. A quantidade de alunos deve
ser fornecida pelo usuário. Crie funções para:
c. Preencher a lista de alunos;
d. Imprimir os dados de todos os alunos da lista;
e. Dado um número de matrícula, verificar se o aluno existe na lista. Se existir,
imprima o nome. Caso contrário, imprima uma mensagem de notificação;
f. Dado um nome, imprimir os dados de todos os alunos com o mesmo nome.
Considere que há alunos com nomes repetidos.
g. Dado um nome, retornar a quantidade de alunos com o nome fornecido.
Use alocação dinâmica para alocar o vetor de alunos.
*/



typedef struct aluno{
  char *nome;
  int matricula;
} taluno;

void preencheAlunos (taluno *p, int n){
  for (int i=0; i<n; i++){
    printf("Digite o nome do aluno: \n");
    scanf("%s", p[i].nome);
    printf("Digite a matrícula do aluno: \n");
    scanf("%d", &p[i].matricula);
  }
}

void imprimeDados(taluno *p, int n){
  for (int i=0; i<n; i++){
    printf("Nome: %s\n", p[i].nome);
    printf("Matrícula: %d\n", p[i].matricula);
  }
}

void conferePorMatricula(taluno *p, int n){
  int confereMatricula, aux=0;
  printf("Digite a matricula que voce quer conferir: \n");
  scanf("%d", &confereMatricula);
  for (int i=0; i<n; i++){
    if (confereMatricula == p[i].matricula){
      printf("Nome do aluno: %s\n", p[i].nome);
      aux = 1;
    }
  }

  if (aux == 0){
    printf("Aluno não encontrado!\n");
  }
}


void confereNomeRepetido(taluno *p, int n){
  int repeticao=0;
  char nomeSearch[50];
  printf("Digite o nome do aluno que você quer pesquisar: \n");
  scanf("%s", nomeSearch);
  for (int i=0; i<n; i++){
    if (strcmp(p[i].nome, nomeSearch) == 0){
      printf("Nome: %s\n", p[i].nome);
      printf("Matrícula: %d\n", p[i].matricula);
      repeticao++;
    }
  }

  printf("Quantidade de alunos com o nome fornecido: %d", repeticao);
  
}



int main(void) {
  taluno *p;
  int n;
  printf("Digite a quantidade de alunos: \n");
  scanf("%d", &n);
  p = (taluno*)malloc(n*sizeof(taluno));
  for (int i = 0; i < n; i++) {
    p[i].nome = (char*)malloc(50 * sizeof(char));
    if (p[i].nome == NULL) {
      printf("Não há memória suficiente.\n");
      return 0;
    }
  }
  
  preencheAlunos(p, n);
  imprimeDados(p, n);
  conferePorMatricula(p, n);
  confereNomeRepetido(p, n);

  free(p->nome);
  free(p);
  
  return 0;
}