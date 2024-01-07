#include <stdlib.h>
#include <stdio.h>
#include "tadpessoa.h"


tpessoa* criaPessoa(){
  tpessoa *novaPessoa;
  novaPessoa = (tpessoa*)malloc(sizeof(tpessoa));
  if (novaPessoa == NULL){
    printf("Não há memória suficiente.\n");
    return NULL;
  }
  novaPessoa->nome = (char*)malloc(25*sizeof(char));
  if (novaPessoa->nome == NULL){
    printf("Não há memória suficiente.\n");
    return NULL;
  }  
  return novaPessoa;
}

void getData (tpessoa *pessoa){
  printf("Digite o nome da pessoa: \n");
  scanf("%s", pessoa->nome);
  printf("Digite o dia que a pessoa nasceu: \n");
  scanf("%d", &pessoa->data.dia);
  printf("Digite o mês que a pessoa nasceu: \n");
  scanf("%d", &pessoa->data.mes);
  printf("Digite o ano que a pessoa nasceu: \n");
  scanf("%d", &pessoa->data.ano);
  printf("Digite o CPF da pessoa: \n");
  scanf("%d", &pessoa->cpf);
}

void printData(tpessoa *pessoa){
  printf("Nome: %s\n", pessoa->nome);
  printf("Data de nascimento: %d / %d / %d\n", pessoa->data.dia, pessoa->data.mes, pessoa->data.ano);
  printf("CPF: %d\n", pessoa->cpf);
}

void LiberaMemoria(tpessoa *pessoa){
  free(pessoa->nome);
  free(pessoa);
}
