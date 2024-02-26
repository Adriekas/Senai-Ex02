#include<stdio.h>
int main(void)
{
	double base, altura;
	double area;
	
	printf("\n=================================\n\n");
	printf("           Codigo 01 \n");
	printf("\n=================================\n\n");
	
	printf("Para calcular o triangulo, digite a base: \n");
	scanf("%lf", &base);
	
	printf("Digite a altura do triangulo: \n");
	scanf("%lf", &altura);
	
	area = (base * altura) / 2;
	printf("A area do triangulo é: %.1lf", area);
	
	return(0);
}
