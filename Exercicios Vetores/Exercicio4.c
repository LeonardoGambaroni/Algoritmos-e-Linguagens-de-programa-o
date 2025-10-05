#include <stdio.h>

int main()
{
    int X[20];
    int Y[20];
    int n, i;
    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &n);
    
    if (n > 20 || n <= 0) {
        printf("Tamanho invalido!\n");
        return 0;
    }
    
    for (i = 0; i < n; i++) {
        printf("Digite o valor da posição %d: ", i);
        scanf("%d", &X[i]);
    }
    for (int i = 0; i < n; i++) {
        Y[i] = X[n - 1 - i];
    }
    
    printf("\nVetor X: ");
    for (i = 0; i < n; i++){
        printf("%d", X[i]);
    }
    
    printf("\nVetor Y: ");
    for (i = 0; i < n; i++) {
        printf("%d", Y[i]);
    }

    return 0;
}