#include <stdio.h>
#include <stdlib.h>

/*
Elabore uma função que receba uma cadeia de caracter de tamanho N e substitua toda
ocorrência de uma vogal por *. Utilize a função no programa principal para
“criptografar” uma cadeia de caracter fornecida pelo usuário. O tamanho da cadeia
também deve ser informado em tempo de execução. Use alocação dinâmica.
*/




void criptografar (char vetor[], int tamanho){
   for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == 'a' || vetor[i] == 'e' || vetor[i] == 'i' || vetor[i] == 'o' || vetor[i] == 'u' ||
            vetor[i] == 'A' || vetor[i] == 'E' || vetor[i] == 'I' || vetor[i] == 'O' || vetor[i] == 'U') {
            vetor[i] = '*';
        }
    }
  }



int main(void) {
  int n;
  char *vetor;
  printf("Digite a quantidade de caracteres: \n");
  scanf("%d", &n);
  vetor = (char*)malloc(n*sizeof(char));

  if(vetor == NULL){
    printf("Não tem memória");
    return 1;
  }
  
  for (int i=0; i<n; i++){
    printf("Digite o caracter: ");
    scanf(" %c", &vetor[i]);
  }

  criptografar(vetor, n);

  printf("Tamanho da cadeia: %d\n", n);
  printf("Cadeia criptografada: ");
  for (int i=0; i<n; i++){
    printf(" %c", vetor[i]);
  }

  free(vetor);
  
  return 0;
}