#include <stdio.h>

int main() {
    int vetor[20];
    int i, j, temp;


    for (i = 0; i < 20; i++) {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    
    for (i = 0; i < 20 - 1; i++) {
        for (j = 0; j < 20 - 1 - i; j++) {
            if (vetor[j] < vetor[j + 1]) { 
                
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    
    printf("\nVetor ordenado em ordem decrescente:\n");
    for (i = 0; i < 20; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
