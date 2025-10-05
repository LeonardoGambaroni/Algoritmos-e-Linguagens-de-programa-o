#include <stdio.h>

int main()
{
  char original[11];
  char invertida[11];
  int i;
  
  printf("Digite sua string: ");
  scanf("%s", original);
  
  printf("String original: %s", original);
  
  
  printf("\nString invertida: ");
  for(i = strlen(original) - 1; i >= 0; i--){
      printf("%c", original[i]);
  }
  
    return 0;
}