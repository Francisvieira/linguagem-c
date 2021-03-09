#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	/* boletim dos alunos 
	@ autor Francisco Vieira */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	char aluno[50];
	char sexo;
	int idade; 
	float nota1,nota2,nota3,nota4,media;
	
	printf("Nome do Aluno:  ");
	gets (aluno);
	printf("Sexo: ");
	scanf("%c",&sexo);
	printf("idade: ");
	scanf("%f",&idade);
	system("pause");
	system("cls");
	printf("Digite nota1: ");
	scanf("%f",&nota1);
	printf("Digite nota2: ");
	scanf("%f",&nota2);
	printf("Digite nota3: ");
	scanf("%f",&nota3);
	printf("Digite nota4: ");
	scanf("%f",&nota4);
	//         média
	media = (nota1 +nota2+ nota3 +nota4) /4;
	printf("Média: %.1f\n", media);
	if (media>=5){
		printf("aprovado\n");
	} else {
		printf("reprovado\n");
	}
	system ("pause");
	
	
	return 0;
}
