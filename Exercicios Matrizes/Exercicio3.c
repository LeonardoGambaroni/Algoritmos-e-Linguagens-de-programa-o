#include <stdio.h>

int main()
{
    float matriz[5][3];
    float transposta[3][5];
    
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 3; j++){
            printf("Digite o elemento [%d][%d]", i,j);
            scanf("%f", &matriz[i][j]);
        }
    }
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 3; j++){
            transposta[j][i] = matriz[i][j];
        }
    }
    printf("\nMatriz original:\n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            printf("%d", matriz[i][j]);
        }
    }
    printf("\nMatriz transposta:\n")
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++){
            printf("%d", transposta[j][i]);
        }
    }
    
    
    return 0;
}