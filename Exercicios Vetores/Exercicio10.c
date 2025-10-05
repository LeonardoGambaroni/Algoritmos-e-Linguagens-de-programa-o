#include <stdio.h>

int main() {
    int vec[10] = {10, 20, 30, 40, 50, 60}; 
    int contador = 6;
    int novo = 99;
    int i;

    
    for (i = contador; i > 3; i--) {
        vec[i] = vec[i - 1];
    }

    
    vec[3] = novo;
    contador++;

   
    printf("Vetor apos insercao:\n");
    for (i = 0; i < contador; i++) {
        printf("%d ", vec[i]);
    }
    return 0;
}
