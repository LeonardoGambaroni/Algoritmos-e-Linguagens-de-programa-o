#include <stdio.h>

int main()
{
    int X[20];
    int n;
    int maior, menor;
    int posicao_maior, posicao_menor;
    
    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &n);
    
    if (n > 20 || n <= 0) {
        printf("Tamanho invalido!\n");
        return 0;
    }
    
    for (int i = 0; i < n; i++) {
        printf("Digite o valor da posição %d: ", i);
        scanf("%d", &X[i]);
    }
    menor = X[0];
    maior = X[0];
    posicao_menor = 0;
    posicao_maior = 0;
    
    for (int i = 1; i < n; i++) {
        if (X[i] < menor) {
            menor = X[i];
            posicao_menor = i;
        }
        if (X[i] > maior) {
            maior = X[i];
            posicao_maior = i;
        }
    }
    
    printf("\nVetor lido: ");
    for (int i = 0; i < n; i++) {
        printf("%d", X[i]);
    }
    
    printf("\nMenor valor = %d (posicao %d)", menor, posMenor);
    printf("\nMaior valor = %d (posicao %d)\n", maior, posMaior);
    


    return 0;
}