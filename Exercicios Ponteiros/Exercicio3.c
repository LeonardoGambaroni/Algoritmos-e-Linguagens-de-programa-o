#include <stdio.h>

int main()
{
    double var1 = 5.0;
    double var2 = 3.0;
    double var3;
    double *pt1, *pt2;

    pt1 = &var1;
    pt2 = &var2;


    var3 = (*pt1) * (*pt2);

    pt2 = &var3;

    *pt2 = *pt2 / 2;

    printf("Valores das variaveis: \n");
    printf("var1 = %.2lf , var2 = %.2lf , var3 = %.2lf\n", var1 , var2 , var3);
    printf("Valores dos ponteiros: \n");
    printf("pt1 = %.2lf e pt2 = %.2lf", *pt1, *pt2);

    return 0;
}