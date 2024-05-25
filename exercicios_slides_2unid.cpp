#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//Slides - II unidade 

//Exercício 4: Criar um código que leia dois números inteiros e calcule a diferença entre eles

/*
main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, calculeDif;
	
//	scanf("%d %d", &n1, &n2);
	
	printf("Digite o primeiro número inteiro:\n");
	scanf("%d", &n1);
	
	printf("Digite o segundo número inteiro:\n");
	scanf("%d", &n2);
	
	if (n1 > n2){
		calculeDif = n1 - n2;	
	} else {
		calculeDif = n2 - n1;		
	}
	
	printf("A diferença é %d. \n", calculeDif);
	system("PAUSE");
	
}
*/

/* Exercício 5: ler as notas da primeira e segunda avaliações de um aluno, calcular a media e escrever se este aluno foi 
	APROVADO (media maior ou igual a 7), REPROVADO (media inferior a 4), ou se está em PROVA FINAL(entre 4 e 7).
	Escrever também a media calculada.*/ //7,8,9,10.    4,3,2,1.   5,6.	
/*

main(){

	setlocale(LC_ALL, "Portuguese");
	
	double n1, n2, media;
	
	printf("Informe a primeira nota do aluno: \n");
	scanf("%lf", &n1);
	
	printf("Informe a segunda nota do aluno: \n");
	scanf("%lf", &n2);
	
//	printf("Informe a primeira nota: %lf, e a segunda nota do aluno: %lf /n");
//	scanf("%lf %lf", &n1, &n2);

	media = (n1 + n2) / 2;
	printf("Sua média é %.1lf \n", media);
	
	if(media >= 7){
		printf("ALUNO APROVADO! \n");				
	} else if(media <= 4){
		printf("ALUNO REPROVADO! \n");			
	} else {
		printf("ALUNO EM PROVA FINAL! \n");
	}		
	system("PAUSE");
} */

// Exercício 7: Crie um código que leia três números inteiros e imprima o maior deles.
// Considere que não existem números iguais!

main(){
	
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, n3;
	
	printf("Digite três números inteiros: \n");
	scanf("%d %d %d", &n1, &n2, &n3);
		
	if((n1 >= n2 ) && (n1 >= n3)){
		printf("%d é o maior! \n", n1);
		
	} else if((n2 >= n1) && (n2 >= n3)){
		printf("%d maior! \n", n2);
		
	} else {
		printf("%d é o maior! \n", n3);
	}

	system("PAUSE");
}
