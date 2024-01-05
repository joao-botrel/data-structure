#include <stdio.h>
#include <stdlib.h>

/*
Crie uma estrutura para armazenar dados de um produto (código – inteiro/preço-float).
Elabore um tipo definido baseado na estrutura criada. Aloque um vetor de tamanho n
dinamicamente para armazenar uma lista de produtos. O tamanho da lista deverá ser
fornecido pelo usuário.
Depois de preenchido o vetor, elabore funções para:
a. Verificar se o produto de código X (X deve ser digitado pelo usuário) foi
armazenado. Caso seja encontrado, imprima o preço do produto.
b. Ajustar preço de todos os produtos. O valor do ajuste em porcentagem deverá
ser fornecido pelo usuário.
c. Imprimir os dados dos produtos;
*/


 typedef struct produto{
    int codigo;
    float preco;
  } tproduto;


void verificaCodigo (tproduto *p, int n){
  int verifCod;
  int aux=0;
  printf("Qual código você quer verificar? \n");
  scanf("%d", &verifCod);
  for (int i=0; i<n; i++){
    if (verifCod == p[i].codigo){
      printf("Produto encontrado! Seu preço é: %f\n", p[i].preco);
      aux = 1;
    }
  if (aux == 0){
    printf("Produto não encontrado!\n");
    }
  }
}

void ajustePreco (tproduto *p, int n){
  float porcentagem;
  printf("Quanto você quer modificar o preço (em porcentagem): \n");
  scanf("%f", &porcentagem);
  for (int i=0; i<n; i++){
    p[i].preco = p[i].preco*(1+(porcentagem/100));
  }
}

void imprimeDados (tproduto *p, int n){
  for (int i=0; i<n; i++){
    printf("Código do produto: %d\n", p[i].codigo);
    printf("Preço do produto; %f\n", p[i].preco);
  }
}


int main(void) {
  int n;
  printf("Digite o tamanho da lista: \n");
  scanf("%d", &n);
  tproduto *p;
  p = (tproduto*)malloc(n*sizeof(tproduto));
  for (int i=0; i<n; i++){
    printf("Digite o codigo do produto numero %d: \n", i+1);
    scanf("%d", &p[i].codigo);
    printf("Digite o preço do produto numero %d: \n", i+1);
    scanf("%f", &p[i].preco);
  }
  
  verificaCodigo(p, n);
  ajustePreco(p, n);
  imprimeDados(p, n);

  free(p);
  
  return 0;
}