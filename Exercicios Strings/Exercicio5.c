#include <stdio.h>

int main()
{
    char nome[101];
    int i;
    
    printf("Digite o nome completo: ");
    fgets(nome, sizeof(nome), stdin);
    
    nome[strcspn(nome, "\n")] = '\0';
    
    printf("Iniciais: ");
    
    if (nome[0] != ' ') {
        printf("%c", toupper(nome[0]));
    }
    
    for (i = 0; nome[i] != '\0'; i++) {
        if (nome[i] == ' ' && nome[i+1] != '\0' && nome[i+1] != ' ') {
            printf("%c", toupper(nome[i+1]));
        }
    }
    printf("\n");
    
    return 0;
}