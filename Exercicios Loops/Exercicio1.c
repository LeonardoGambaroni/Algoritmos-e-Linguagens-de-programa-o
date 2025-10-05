#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main1 () {
    int num;
    printf("Digite um numero positivo: ");
    scanf("%d", &num);

    bool ehprimo = true;

    for (int i = 2; i < num; i++) {
        if (num%i == 0) {
            ehprimo = false;
            break;
        }
    }

    if (ehprimo) {
        printf("O numero eh primo\n");
    }
    else {
        printf("O numero nao eh primo\n");
    }
}

