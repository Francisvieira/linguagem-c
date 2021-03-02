#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
	Cálculo do IMC
	@author Professor José de Assis
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	system("color 1F");
	printf(" ___ __  __  ____ \n");
	printf("|_ _|  \\/  |/ ___|\n");
	printf(" | || |\\/| | |    \n");
	printf(" | || |  | | |___ \n");
	printf("|___|_|  |_|\\____|\n");
	printf("\n");
	//variáveis
	float imc,peso,altura;
	//entrada
	printf("Digite o seu peso em Kg: ");
	scanf("%f",&peso);
	printf("Digite a sua altura em metros: ");
	scanf("%f",&altura);
	//processamento
	imc = peso / (altura * altura);
	//saída
	printf("IMC: %.2f\n", imc);
	system("pause");
	return 0;
}
