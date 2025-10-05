#include <stdio.h>

int main() {
    float vetor[20];
    int i, count = 0;
    float soma = 0, media;

    
    for (i = 0; i < 20; i++) {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%f", &vetor[i]);
        soma += vetor[i]; 
    }

   
    media = soma / 20;

    for (i = 0; i < 20; i++) {
        if (vetor[i] < media) {
            count++;
        }
    }

    
    printf("\nMedia dos elementos = %.2f", media);
    printf("\nQuantidade de elementos menores que a media = %d\n", count);

    return 0;
}

