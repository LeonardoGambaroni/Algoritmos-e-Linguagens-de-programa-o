#include <stdio.h>

int main() {
    int linA, colA, linB, colB;
    int A[20][20], B[20][20], C[20][20];


    printf("Digite as dimensoes da matriz A (linhas colunas): ");
    scanf("%d %d", &linA, &colA);

    printf("Digite as dimensoes da matriz B (linhas colunas): ");
    scanf("%d %d", &linB, &colB);

   
    if (colA != linB) {
        printf("Multiplicacao impossivel! O numero de colunas de A deve ser igual ao numero de linhas de B.\n");
        return 0;
    }

   
    printf("\nDigite os elementos da matriz A:\n");
    for (int i = 0; i < linA; i++) {
        for (int j = 0; j < colA; j++) {
            scanf("%d", &A[i][j]);
        }
    }

   
    printf("\nDigite os elementos da matriz B:\n");
    for (int i = 0; i < linB; i++) {
        for (int j = 0; j < colB; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    
    for (int i = 0; i < linA; i++) {
        for (int j = 0; j < colB; j++) {
            C[i][j] = 0;
        }
    }

    
    for (int i = 0; i < linA; i++) {
        for (int j = 0; j < colB; j++) {
            for (int k = 0; k < colA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    
    printf("\nMatriz A:\n");
    for (int i = 0; i < linA; i++) {
        for (int j = 0; j < colA; j++) {
            printf("%4d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz B:\n");
    for (int i = 0; i < linB; i++) {
        for (int j = 0; j < colB; j++) {
            printf("%4d ", B[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz C = A x B:\n");
    for (int i = 0; i < linA; i++) {
        for (int j = 0; j < colB; j++) {
            printf("%4d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}