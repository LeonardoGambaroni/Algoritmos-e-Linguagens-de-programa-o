#include <stdio.h>

int main()
{
    char caractere;
    char string[21];
    int i, cont = 0;
    
    printf("Digite o caractere desejado: ");
    scanf("%c", &caractere);
    
    printf("Digite uma frase: ");
    scanf(" %s", string);
    
    for (i = 0; i < strlen(string); i++){
        if(string[i] == caractere){
            cont++;
        }
    }
    printf("O caractere '%c' aparece %d vezes na string.\n", caractere, cont);
    
    

    return 0;
}