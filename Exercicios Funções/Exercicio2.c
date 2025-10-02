#include <stdio.h>

double lerNumero() {

	double x;
	printf("Digite um numero: ");
	scanf("%lf", &x);

	return x;
}

double parteFracionada(double a) {
	int parteInteira = (int)a;
	return a - parteInteira;
}

int main()
{
	double valor = lerNumero();
	double fracionada = parteFracionada(valor);

	printf("O numero digitado C) %.2lf\n", valor);
	printf("A parte fracionada desse numero C) %.2lf\n", fracionada);
}