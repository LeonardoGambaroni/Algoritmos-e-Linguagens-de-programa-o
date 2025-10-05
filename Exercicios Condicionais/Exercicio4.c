#include <stdio.h>
#include <math.h>

int main(){
    int opcao_menu;
    flaot numero1, numero2, resultado;
    
    printf("Bem vindo ao programa!!\n");
    printf("1 - Adição\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("Escolha a opção desejada: \n");
    scanf("%d", &opcao_menu);
    
    if (opcao_menu >= 1 && opcao_menu <= 4) {
        printf("Digite o primeiro numero real: ");
        scanf("%f", &numero1);
        
        printf("Digite o segundo numero real: ");
        scanf("%f", &numero2);
    }
    
    switch case (opcao_menu){
        case 1:
            resultado = numero1 + numero2;
            printf("A soma dos números é %.2f\n", resultado);
            break;
        case 2:
            resultado = numero1 - numero2;
            printf("A subtração dos números é %.2f\n", resultado);
            break;
        case 3:
            resultado = numero1 * numero2;
            printf("A multiplicação dos números é %.2f\n", resultado);
            break;
        case 4:
            if (numero2 != 0) {
                resultado = numero1 / numero2;
                printf("A divisão dos números é %.2f\n", resultado);
            }
            else{
                printf("Erro: divisão por zero!\n");
            }
            break;
        default:
            printf("Opção Inválida!\n");
    }
    
    return 0;
}