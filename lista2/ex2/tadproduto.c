#include <stdlib.h>
#include <stdio.h>
#include "tadproduto.h"

tproduto* criarProduto(int n){
  tproduto* novoProduto;
  novoProduto = (tproduto*)malloc(n*sizeof(tproduto));
  if (novoProduto == NULL){
    printf("Não há memória suficiente. \n");
    return NULL;
  }
  return novoProduto;
}

void getData (tproduto *produto, int n){
  for (int i=0; i<n; i++){
    printf("Digite o código do produto: \n");
    scanf("%d", &produto[i].id);
    printf("Digite o estoque do produto: \n");
    scanf("%d", &produto[i].estoque);
    printf("Digite o preço do produto: \n");
    scanf("%f", &produto[i].preco);
  }
}

void imprimirProdutoMaisCaro(tproduto *produto, int n){
  float aux = produto[0].preco;
  for (int i=0; i<n; i++){
    if (aux < produto[i].preco){
      aux = produto[i].preco;
    }
  }
  printf("Código do(s) produto(s) com maior preço: \n");
  for (int i=0; i<n; i++){
    if (aux == produto[i].preco){
      printf("%d\n", produto[i].id);
    }
  }
}

void aumentarPreco(tproduto *produto, int n){
  float aumento;
  printf("Digite o aumento do preço dos produtos em porcentagem: \n");
  scanf("%f", &aumento);
  for (int i=0; i<n; i++){
    produto[i].preco = produto[i].preco*(1+aumento/100);
  }
}

int procuraProdutoComMaisEstoque(tproduto *produto, int n){
  int aux = produto[0].estoque;
  for (int i=0; i<n; i++){
    if (produto[i].estoque > aux){
      aux = produto[i].estoque;
    }
  }
  return aux;
  
}

void liberaMemoria(tproduto *produto){
  free(produto);
}