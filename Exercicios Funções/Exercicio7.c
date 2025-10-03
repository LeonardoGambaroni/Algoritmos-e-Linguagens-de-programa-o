#include <stdio.h>
#include <string.h>

void copiar(char origem[], char destino[]){
    int tamanho = strlen(origem);
    for(int i = 0; i < tamanho; i++){
        destino[i] = origem[i];
    }
}

int main()
{
    char original[30];
    printf("Digite uma string: ");
    fgets(original, 30, stdin);
    
    char copia[30];
    
    printf("String Original: %s\n", original);
    
    copiar(original, copia);
    
    printf("Copia: %s\n", copia);

    return 0;
}
