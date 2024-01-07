#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tadcandidato.h"

/*
Você foi contrato para desenvolver um sistema considerando o seguinte cenário:
Uma empresa de RH precisa de um sistema para gerenciar as informações sobre seus
candidatos a emprego. Dentre as informações do candidato, será necessário considerar:
identidade, nome, grau de escolaridade, data de nascimento e profissão.
a. Defina uma estrutura, denominada candidato, que tenha os campos
apropriados para guardar as informações de um candidato.
b. Elabore um tipo abstrato de dados a partir da estrutura criada com as seguintes
operações:
i. criaListaCanditado: função para alocar dinamicamente um conjunto de n
candidatos (n é um valor fornecido pelo usuário) e solicitar ao usuário
para entrar com as informações de cada candidato.
ii. buscaCId: função para retornar os dados de um candidato a partir do
número da identidade.
iii. buscaCE função para retornar a quantidade de candidatos com um
determinado grau de escolaridade.
iv. imprimeNomeProf: função para imprimir todos os nomes de candidatos
com uma determinada profissão.
*/


int main(void) {
  int n;
  tcandidato *candidato;
  printf("Digite a quantidade de candidatos: \n");
  scanf("%d", &n);

  candidato = criaListaCandidato(n);
  buscaCID(candidato, n);
  buscaCE(candidato, n);
  imprimeNomeProf(candidato, n);
  liberaMemoria(candidato);
  
  return 0;
}