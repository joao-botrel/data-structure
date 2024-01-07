#include <stdio.h>
#include <stdlib.h>
#include "tadproduto.h"

/*
Considere um cadastro de produtos de um estoque, com as seguintes informações para
cada produto:
• Código de identificação do produto: representado por um valor inteiro
• Quantidade disponível no estoque: representado por um número inteiro
• Preço de venda: representado por um valor real
Elabore um TAD para representar o produto com as seguintes operações:
a. Alocar dinamicamente um conjunto de n produtos (n é um valor fornecido
pelo usuário)
b. Preencher as informações dos n produtos.
c. Imprimir o (s) código do (s) produto (s) com o maior preço de venda
d. Aumentar de X % o preço de todos os produtos. X deve ser fornecido pelo
usuário.
e. Retornar o valor da maior quantidade de produto em estoque;
*/


int main(void) {
  int n;
  int resultado;
  tproduto *produto;
  
  printf("Qual a quantidade de produtos você quer criar? \n");
  scanf("%d", &n);
  
  produto = criarProduto(n);
  getData(produto, n);
  imprimirProdutoMaisCaro(produto, n);
  aumentarPreco(produto, n);
  resultado = procuraProdutoComMaisEstoque(produto, n);
  printf("Maior quantidade de produtos: %d\n", resultado);
  
  liberaMemoria(produto);
  
  return 0;
}