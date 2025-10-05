#include <stdio.h>
#include <math.h>

int main(){
    int lado1;
    int lado2;
    int lado3;
    
    printf("Digite o valor do primeiro lado: ");
    scanf("%d", &lado1);
    
    printf("Digite o valor do segundo lado: ");
    scanf("%d", &lado2);
    
    printf("Digite o valor do terceiro lado: ");
    scanf("%d", &lado3);
    
    if (lado1 + lado2 > lado3 && lado2 + lado3 > lado1 && lado1 + lado3 > lado2){
        printf("É possivel formar um triangulo.");
    }
    else {
        printf("Não é possivel formar um triangulo.");
    }
    return 0;
}