#include <stdio.h>
#include <string.h>

int ehPalindromo(char string[]){
    int tamanho = strlen(string);
    char inversa[tamanho];
    for (int i = 0; i < tamanho; i++){
        inversa[i] = string[tamanho - 1 - i];
    }
    if(strcmp(string, inversa) == 0){
        return 1;
    }
    else {
        return 0;
    }
    
}

int main()
{
    char string[30];
    printf("Digite uma string: ");
    fgets(string, 30, stdin);
    
    int resultado = ehPalindromo(string);
    
    if (resultado == 1){
        printf("É palindromo");
    }
    else{
        printf("Não é palindromo");
    }
    
    

    return 0;
}
