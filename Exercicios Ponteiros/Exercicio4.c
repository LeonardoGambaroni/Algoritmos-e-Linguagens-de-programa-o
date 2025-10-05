#include <stdio.h>

int main()
{
    int num1 = 10, num2 = 20, num3 = 30;
    int *pt1, *pt2, *pt3;

    pt1 = &num1;
    pt2 = &num2;
    pt3 = &num3;

    *pt1 = 100;

    pt1 = pt2;
    *pt2 = 200;

    pt1 = pt3;
    *pt3 = 300;

    printf("Valor dos numeros: \n");
    printf("num1 = %d , num2 = %d e num3 = %d", num1, num2 , num3);

    return 0;
}