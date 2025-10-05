#include <stdio.h>

int main() {
    int vetor[10];
    int contador = 0;
    int num;

    printf("Digite numeros inteiros positivos (negativo para parar):\n");

    while (1) {
        printf("Numero %d: ", contador + 1);
        scanf("%d", &num);

        if (num < 0) { 
            break;
        }

        if (contador < 10) {
            vetor[contador] = num; 
            contador++;
        } else {
            printf("Vetor cheio! Nao eh possivel adicionar mais numeros.\n");
            break;
        }
    }

    
    printf("\nValores armazenados no vetor:\n");
    for (int i = 0; i < contador; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
