#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int senha_correta = 1234; // senha hardcoded
    int tentativa;
    int contador = 0;

    while (contador < 3) {
        printf("Digite a senha: ");
        scanf("%d", &tentativa);

        if (tentativa == senha_correta) {
            printf("Acesso liberado.\n");
            return 0; // encerra o programa
        } else {
            printf("Acesso negado.\n");
        }

        contador++;
    }

    printf("Limite maximo de tentativas excedido. Usuario bloqueado!\n");

    return 0;
}


