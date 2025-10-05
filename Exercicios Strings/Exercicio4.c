#include <stdio.h>

int main()
{
    char nome[30], sobrenome[30], completo[61];
    
    printf("Digite o nome: ");
    scanf("%s", nome);

    printf("Digite o sobrenome: ");
    scanf("%s", sobrenome);
    
    strcpy(completo, nome);        
    strcat(completo, " ");         
    strcat(completo, sobrenome);
    
    printf("String final: %s\n", completo);
    
    int tamanho = strlen(completo);
    printf("Tamanho da string: %d\n", tamanho);
    
    printf("Primeira letra: %c\n", completo[0]);
    printf("Ultima letra: %c\n", completo[tamanho - 1]);
    
    return 0;
}