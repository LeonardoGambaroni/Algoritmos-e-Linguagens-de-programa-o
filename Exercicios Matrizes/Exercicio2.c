#include <stdio.h>

int main()
{
    int linha = 0, coluna = 0;
    float matriz[5][5],maior;
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++){
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
    maior = matriz[0][0];
    for (int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if (matriz[i][j] > maior){
                maior = matriz[i][j];
                linha = i;
                coluna = j;
            }
        }
    }
    printf("\nO maior numero da matriz é: %.2f\n", maior);
    printf("\nA posição do maior numero é: linha %d e coluna %d\n", linha, coluna);
    
    return 0;
}