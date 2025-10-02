#include <stdio.h>
#include <stdbool.h>

bool ehPar(int numero){
    return numero % 2 == 0;
}

int main()
{
    int x;
    printf("Digite um numero: ");
    scanf("%d", &x);
    
    bool resultado = ehPar(x);
    
    if (resultado){
        printf ("O numero é par");
    }
    else {
        printf ("O numero é ímpar");
    }

    return 0;
}