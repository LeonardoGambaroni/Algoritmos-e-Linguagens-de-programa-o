#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int num1, num2, num3, num4, num5;
    bool mustStop = false;
    int temp;

    // Lendo os 5 n�meros
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);
    printf("Digite o quarto numero: ");
    scanf("%d", &num4);
    printf("Digite o quinto numero: ");
    scanf("%d", &num5);

    // Loop para ordenar
    while (!mustStop) {
        mustStop = true;

        if (num1 > num2) { temp = num1; num1 = num2; num2 = temp; mustStop = false; }
        if (num2 > num3) { temp = num2; num2 = num3; num3 = temp; mustStop = false; }
        if (num3 > num4) { temp = num3; num3 = num4; num4 = temp; mustStop = false; }
        if (num4 > num5) { temp = num4; num4 = num5; num5 = temp; mustStop = false; }
    }

    // Imprimindo os n�meros ordenados
    printf("Numeros ordenados: %d %d %d %d %d\n", num1, num2, num3, num4, num5);

    return 0;
}


