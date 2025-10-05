#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main3() {
    int numero;

    printf("Digite um numero (negativo para parar): ");
    scanf("%d", &numero);

    while (numero >= 0) {
        int fatorial = 1;

        for (int i = 1; i <= numero; i++) {
            fatorial *= i;
        }

        printf("O fatorial de %d eh %d\n", numero, fatorial);

        printf("Digite outro numero (negativo para parar): ");
        scanf("%d", &numero);
    }

    printf("Programa encerrado.\n");
    return 0;
}

