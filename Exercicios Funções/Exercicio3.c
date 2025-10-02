#include <stdio.h>

long long fatorial(int n){
    long long resultado = 1;
    for (int i = 1; i <= n; i++){
        resultado *= i;
    }
    
    return resultado;
}



int main()
{
   int num;
   printf("Digite um numero: ");
   scanf("%d", &num);
   
   if (num < 0){
       printf("Fatorial de numero negativo nao existe");
   }
   else {
       printf("O fatorial de %d é %lld\n", num, fatorial(num));
   }
}