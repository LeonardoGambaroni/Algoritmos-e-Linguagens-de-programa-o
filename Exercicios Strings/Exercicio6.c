#include <stdio.h>

int main()
{
    char texto[101];
    int i, vogais = 0, consoantes = 0;
    
    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);
    
    texto[strcspn(texto, "\n")] = '\0';
    
    for (i = 0; texto[i] != '\0'; i++) {
        char c = tolower(texto[i]); 

        if (c >= 'a' && c <= 'z') { 
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vogais++;
            } 
            else {
                consoantes++;
            }
        }
    }
    
    printf("Quantidade de vogais: %d\n", vogais);
    printf("Quantidade de consoantes: %d\n", consoantes);
    
    return 0;
}