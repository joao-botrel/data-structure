#include <stdio.h>
#include <stdlib.h>
#include "tadpessoa.h"

/*
1. Crie um tipo abstrato de dados para representar uma pessoa, contendo nome, data de
nascimento e CPF. Para o TAD, devem ser criadas as seguintes operações:
a. Preencher as informações uma pessoa com dados digitados no teclado
b. Imprima os dados de uma pessoa na tela
Implemente a função principal e use o TAD elaborado para criar uma pessoa e
imprimir os dados na tela.
*/


int main(void) {
  tpessoa* pessoa;
  pessoa = criaPessoa();
  getData(pessoa);
  printData(pessoa);
  LiberaMemoria(pessoa);
  
  return 0;
}