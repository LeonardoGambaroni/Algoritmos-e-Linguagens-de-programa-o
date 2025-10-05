#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main2 () {
    int maximo, minimo, numero, cont;

    printf("Digite um numero (0 para parar): ");
    scanf("%d", &numero);

    if(numero != 0) {
        maximo = numero;
        minimo = numero;
        cont++;
    }

    while (numero != 0) {
        printf("Digite um numero (0 para parar): ");
        scanf("%d", &numero);

        if (numero != 0) {
            cont++;
            if (numero > maximo) {
                maximo = numero;
            }
            else if (numero < minimo) {
                minimo = numero;
            }
        }
    }

    printf("A quantidade de numeros digitados eh %d \n O maior numero eh %d \n O menor numero eh %d \n", cont, maximo, minimo);
}

