#include <stdio.h>

int main()
{
    float X[20];
    float Y[20];
    float Z[20];
    float n;
    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%f", &n);
    
    for (int i = 0; i < n; i++) {
        printf("Digite os numeros do vetor x: ");
        scanf("%f", &X[i]);
    }
    for (int j = 0; j < n; j++) {
        printf("Digite os numeros do vetor y: ");
        scanf("%f", &Y[j]);
    }
    for (int d = 0; d < n; d++) {
        Z[d] = X[d] * Y[d];
        printf("O vetor Z é %.2f", Z[d]);
    }


    return 0;
}