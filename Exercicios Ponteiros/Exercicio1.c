#include <stdio.h>

int main()
{
    int var1 = 10;
    int var2 = 40;
    int *pt1, *pt2;
    int temp;

    pt1 = &var1;
    pt2 = &var2;

    printf("Antes do swap: \n");
    printf("var1 = %d e var2 = %d\n", var1, var2);
    printf("pt1 = %d e pt2 = %d\n", *pt1, *pt2);

    temp = *pt1;
    *pt1= *pt2;
    *pt2 = temp;

    printf("Depois do swap: \n");
    printf("var1 = %d e var2 = %d\n", var1, var2);
    printf("pt1 = %d e pt2 = %d", *pt1, *pt2);
    return 0;
}

