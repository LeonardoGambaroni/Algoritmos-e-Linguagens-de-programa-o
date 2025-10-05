#include <stdio.h>

int main()
{
    int X[20];
    int n;
    int maior, menor;
    
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
    
    for (int i = 1; i < n; i++) {
        if (X[i] < menor) {
            menor = X[i];
        }
        if (X[i] > maior) {
            maior = X[i];
        }
    }
    
    printf("\nVetor lido: ");
    for (int i = 0; i < n; i++) {
        printf("%d", X[i]);
    }
    
    printf("Maior valor é %d", maior);
    printf("Menor valor é %d\n", menor);
    


    return 0;
}