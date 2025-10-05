#include <stdio.h>

int main()
{
    int X[20];
    int n, i;
    int cont_par, cont_mult_5;
    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &n);
    
    if (n > 20 || n <= 0) {
        printf("Tamanho invalido!\n");
        return 0;
    }
    
    for (i = 0; i < n; i++) {
        printf("Digite o valor da posição %d: ", i);
        scanf("%d", &X[i]);
    }
    cont_par = 0;
    cont_mult_5 = 0;
    for (i = 0; i < n; i++) {
        if (i % 2 == 0) {
            cont_par++;
        }
        if (i % 5 == 0) {
            cont_mult_5++;
        }
    }
    
    printf("A quantidade de numeros pares é %d\n", cont_par);
    printf("A quantidade de numeros multiplos de 5 é %d", cont_mult_5);

    return 0;
}