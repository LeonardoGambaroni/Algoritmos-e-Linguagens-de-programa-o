#include <stdio.h>

int main()
{
    int var1 = 10;
    int var2 = 20;
    int var3;
    int *pt1, *pt2;

    pt1 = &var1;
    pt2 = &var2;
    var3 = *pt1 + *pt2;
    pt1 = &var3;
    *pt1 = 31;
    printf("var1 = %d , var2 = %d , var3 = %d\n", var1 , var2, var3);
    printf("pt1 = %d e pt2 = %d\n", *pt1 , *pt2);

    return 0;
}

