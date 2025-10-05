#include <stdio.h>

int main()
{
    char texto[50];
    int i, j, eh_palindromo = 1;
    
    printf("Digite uma string: ");
    scanf("%s", texto);
    
    int tamanho = strlen(texto);
    
    for (i = 0, j = tamanho - 1; i < j; i++, j--) {
        if (texto[i] != texto[j]) {
            eh_palindromo = 0; 
            break;
        }
    }
    if (eh_palindromo) {
        printf("A string '%s' eh um palindromo.\n", texto);
    } 
    else {
        printf("A string '%s' NAO eh um palindromo.\n", texto);
    }
    return 0;
}