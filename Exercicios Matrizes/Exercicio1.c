#include <stdio.h>

int main()
{
    int n;
    float matriz[20][20], soma;
    printf("Digite o tamanho da matriz: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            printf("Digite o elemento [%d][%d]", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
    for (int i = 0; i < n; i++){
        soma += matriz[i][i];
    }
    printf("\nMatriz:\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%.2f", matriz[i][j]);
        }
    }
    printf("A soma das diagonais da matriz é %.2f\n ", soma);
    
    return 0;
}