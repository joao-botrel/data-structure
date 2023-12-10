#include <stdio.h>
#include <stdlib.h>

/*
Elabore uma função que inverta os elementos de um vetor de N números reais, o último elemento deve passar a ser o primeiro, o penúltimo elemento deve ser o segundo e assim por diante. Use a função no programa principal para inverter um vetor de tamanho N alocado dinamicamente. N deve ser fornecido pelo usuário.
*/


  void inverterVetor(int vetor[], int tamanho){
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio < fim){
      int troca = vetor[inicio];
      vetor[inicio] = vetor[fim];
      vetor[fim] = troca;
      inicio++;
      fim--;
    }
    
  }



int main(void) {
  int n;
  printf("Insira o tamanho do vetor n: ");
  scanf("%d", &n);
  int *vetor;
  vetor = (int*)malloc(n*sizeof(int));

  if (vetor == NULL){
    printf("Não tem memória");
  }

  for (int i=0; i<n; i++){
    printf("Insira o conteúdo do vetor na posição %d: \n", i);
    scanf("%d", &vetor[i]);
  }


  inverterVetor(vetor, n);

  printf("Vetor invertido: ");
  for (int i=0; i<n; i++){
    printf("%d", vetor[i]);
    printf("\n");
  }

  free(vetor);
  
  return 0;
  
}