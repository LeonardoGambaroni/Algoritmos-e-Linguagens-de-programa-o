#include <stdio.h>

int pares_intervalo(int a, int b){
    int inicio, fim;
    
    if (a < b){
        inicio = a;
        fim = b;
    }
    else {
        fim = a;
        inicio = b;
    }
    
    printf("Numeros pares entre %d e %d\n", inicio, fim);
    
    for(int i = inicio; i <= fim; i++){
        if (i % 2 == 0){
            printf("%d\n", i);
        }
    }
    printf("\n");
}



int main()
{
   int num1, num2;
   printf("Digite um numero inteiro: ");
   scanf("%d", &num1);
   
   printf("Digite outro numero inteiro: ");
   scanf("%d", &num2);
   
   pares_intervalo(num1, num2);
   
}
