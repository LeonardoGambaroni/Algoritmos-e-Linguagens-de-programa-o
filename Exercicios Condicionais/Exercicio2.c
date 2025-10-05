#include <stdio.h>
#include <math.h>

int main(){
    flaot nota;
    
    printf("Digite sua nota: ");
    scanf("%d", &nota);
    
    if (nota < 5) {
        printf("Insuficiente!!!");
    }
    else if (nota < 7){
        printf("Regular!!!");
    }
    else if (nota < 9){
        printf("Bom!!!")
    }
    else if (nota <= 10){
        printf("Excelente!!!");
    }
    else {
        printf("Nota Inválida");
    }
    return 0;
}