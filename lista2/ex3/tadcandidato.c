#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "tadcandidato.h"

tcandidato* criaListaCandidato(int n){
  tcandidato* candidato;
  candidato = (tcandidato*)malloc(n*sizeof(tcandidato));
  if (candidato == NULL){
    printf("Não há memória suficiente.\n");
    return NULL;
  }

  for (int i = 0; i < n; i++) {
    candidato[i].nome = (char*)malloc(50 * sizeof(char));
    if (candidato[i].nome == NULL) {
      printf("Não há memória suficiente.\n");
      return NULL;
    }
    candidato[i].grauDeEscolaridade = (char*)malloc(50 * sizeof(char));
    if (candidato[i].grauDeEscolaridade == NULL) {
      printf("Não há memória suficiente.\n");
      return NULL;
    }
    candidato[i].profissao = (char*)malloc(50 * sizeof(char));
    if (candidato[i].profissao == NULL) {
      printf("Não há memória suficiente.\n");
      return NULL;
    }
  }

  for (int i=0; i<n; i++){
    printf("Digite o nome do candidato: \n");
    scanf("%s", candidato[i].nome);
    printf("Digite o dia que o candidato nasceu: \n");
    scanf("%d", &candidato[i].data.dia);
    printf("Digite o mes que o candidato nasceu: \n");
    scanf("%d", &candidato[i].data.mes);
    printf("Digite o ano que o candidato nasceu: \n");
    scanf("%d", &candidato[i].data.ano);
    printf("Digite o número da identidade do candidato: \n");
    scanf("%d", &candidato[i].id);
    printf("Digite a profissão do candidato: \n");
    scanf("%s", candidato[i].profissao);
    printf("Digite o grau de Escolaridade do candidato: \n");
    scanf("%s", candidato[i].grauDeEscolaridade);
  }

  
  return candidato;
  
}

void buscaCID (tcandidato* candidato, int n){
  int idSearch, aux=0;
  printf("Digite a identidade do candidato que você quer procurar: \n");
  scanf("%d", &idSearch);
  for (int i=0; i<n; i++){
    if (idSearch == candidato[i].id){
      printf("Usuário encontrado! \n");
      printf("Nome: %s\n", candidato[i].nome);
      printf("Data de Nascimento: %d / %d / %d\n", candidato[i].data.dia, candidato[i].data.mes, candidato[i].data.ano);
      printf("Grau de Escolaridade: %s\n", candidato[i].grauDeEscolaridade);
      printf("Profissão: %s\n", candidato[i].profissao);
      aux++;
    }
  }

  if (aux == 0){
    printf("Usuário não encontrado!\n");
  }
}

void buscaCE (tcandidato* candidato, int n){
  char grauSearch[50];
  printf("Digite o grau que você quer pesquisar: \n");
  scanf("%s", grauSearch);
  int counter=0;
  for (int i=0; i<n; i++){
    if (strcmp(grauSearch, candidato[i].grauDeEscolaridade) == 0){
      counter++;
    }
  }

  printf("Quantidade de candidatos com esse grau de escolaridade: %d\n", counter);
}

void imprimeNomeProf (tcandidato* candidato, int n){
  char profissionSearch[50];
  int aux=0;
  printf("Digite a profissão que você quer pesquisar: \n");
  scanf("%s", profissionSearch);
  for (int i=0; i<n; i++){
    if (strcmp(profissionSearch, candidato[i].profissao) == 0){
      printf("Nome: %s\n", candidato[i].nome);
      aux++;
    }
  }

  if (aux == 0){
    printf("Usuário não encontrado!\n");
  }
  
}

void liberaMemoria(tcandidato* candidato){
  free(candidato->grauDeEscolaridade);
  free(candidato->nome);
  free(candidato->profissao);
  free(candidato);
}