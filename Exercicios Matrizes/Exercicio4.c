#include <stdio.h>

int main()
{
    float matriz[10][10], soma, menor, maior;
    int linha = 0, coluna = 0;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            printf("Digite o elemento [%d][%d]", i,j);
            scanf("%f", &matriz[i][j]);
        }
    }
    for (int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            soma += matriz[3][j];
        }
    }
    menor = matriz[0][4];
     for (int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if (matriz[i][5] < menor){
                menor = matriz[i][5];
            }
        }
    }
    
    maior = matriz[0][0];
    for (int i = 0; i < 10; i++){
        if(matriz[i][i] > maior){
            maior = matriz[i][i];
            linha = i;
            coluna = i;
        }
    }
    printf("\nA soma dos elementos da linha 4 é %.2f\n", soma);
    printf("\nO menor elemento da coluna 5 é %.2f\n", menor);
    printf("\nO maior elemento da diagonal principal é %.2f e sua posição é linha %d e coluna %d", maior, linha, coluna);
    
    
    return 0;
}
