#include <stdio.h>
#include <math.h>

int main(){
    int idade;
    flaot peso;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    
    if (idade > 16 && idade < 69 && peso >= 50){
        printf("Voce pode doar sangue!!!");
    }
    else {
        printf("Voce nao pode doar sangue!!!");
    }
    
    return 0;
}