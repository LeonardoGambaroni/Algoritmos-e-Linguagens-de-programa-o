#include <stdio.h>

int main() {
    char frase[101];
    char *palavra;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    
    frase[strcspn(frase, "\n")] = '\0';

    
    palavra = strtok(frase, " ");
    while (palavra != NULL) {
        printf("%s\n", palavra);
        palavra = strtok(NULL, " ");
    }

    return 0;
}