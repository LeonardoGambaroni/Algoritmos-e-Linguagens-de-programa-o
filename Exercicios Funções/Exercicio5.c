#include <stdio.h>
#include <string.h>

int tamanho(char str[]){
    int i = 0;
    
    while (str[i] != '\0'){
        i++;
    }
    return i;
}

int main()
{
    char string[100];
    printf("Digite uma string: ");
    fgets(string, 100, stdin);
    
    printf("O tamanho da string é %d\n", tamanho(string));

    return 0;
}
