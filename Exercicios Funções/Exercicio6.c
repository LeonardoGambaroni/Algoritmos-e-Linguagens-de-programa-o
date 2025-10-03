#include <stdio.h>
#include <string.h>

int quantidade(char str[], char c){
    int i;
    int cont = 0;
    int tamanho = strlen(str);
    for (int i = 0; i < tamanho; i++){
        if(str[i] == c){
            cont++;
        }
    }
    return cont;
}

int main()
{
    char string[100];
    printf("Digite uma string: ");
    fgets(string, 100, stdin);
    
    char b;
    printf("Digite o caractere: ");
    scanf("%c", &b);
    
    printf("O caractere %c aparece %d vezes na string", b, quantidade(string, b));

    return 0;
}
