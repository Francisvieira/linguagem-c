#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");	
	system("color 04");
	char aluno[50];
	char sexo;
	int idade;
	float imc, peso, altura;
	printf("fff                                 iii                         \n" );          
	printf("fff   rr rr    aa aa  nn nnn    cccc       sss    gggggg yy   yy mm mm mmmm \n");
	printf("ffff rrr  r  aa aaa  nnn  nn cc      iii s      gg   gg yy   yy mmm  mm  mm \n");
	printf("ff   rr     aa  aaa  nn   nn cc      iii  sss   ggggggg  yyyyyy mmm  mm  mm \n");
	printf("ff   rr      aaa aa  nn   nn  ccccc  iii     s       gg      yy mmm  mm  mm \n");
    printf("                                         sss    ggggg   yyyyy   \n");
	printf("CADASTRO DE ALUNO \n\n");
	printf("Nome do aluno(a): ");
	gets(aluno);
	printf("Sexo(M/F): ");
	scanf("%c",&sexo);
	printf("Idade: ");
	scanf("%d", &idade);
	printf("Peso(kg): ");
	scanf("%f", &peso);
	printf("Altura(m): ");
	scanf("%f", &altura);
	imc = peso/(altura*altura);
	printf("\n");
	system("pause");
	system("cls");
	printf("Ficha do aluno(a):\n");
	printf("______________________________\n");
	printf("Aluno: %s\n", aluno);
	printf("Sexo: %c\n", sexo);
	printf("Idade: %d\n", idade);
	printf("Peso: %.f\n", peso);
	printf("Altura: %.2f\n", altura);
	printf("imc: %.2f\n", imc);
	printf("______________________________\n");
	system("pause"); 
	return 0;
	
}
