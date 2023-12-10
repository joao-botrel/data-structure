#include <stdio.h>
#include <stdlib.h>

/*
Elabore um programa que aloque um vetor de tamanho N dinamicamente. N deve ser
fornecido pelo usuário. Preencha os elementos deste vetor com dados fornecidos pelo
usuário e imprima o vetor usando a notação de ponteiro.
*/


int main() {
    int N;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);

    // Aloca o vetor dinamicamente
    int *vetor = (int *)malloc(N * sizeof(int));

    if (vetor == NULL) {
        printf("Erro ao alocar memória para o vetor.\n");
        return 1;
    }

    // Preenche o vetor com dados fornecidos pelo usuário
    for (int i = 0; i < N; i++) {
        printf("Digite o valor para o elemento %d: ", i);
        scanf("%d", &vetor[i]);
    }

    // Imprime o vetor usando notação de ponteiro
    printf("Vetor: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", *(vetor + i));  // Notação de ponteiro
    }
    printf("\n");

    // Libera a memória alocada
    free(vetor);

    return 0;
}
