#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//Slides - II unidade 

//Exerc�cio 4: Criar um c�digo que leia dois n�meros inteiros e calcule a diferen�a entre eles

/*
main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, calculeDif;
	
//	scanf("%d %d", &n1, &n2);
	
	printf("Digite o primeiro n�mero inteiro:\n");
	scanf("%d", &n1);
	
	printf("Digite o segundo n�mero inteiro:\n");
	scanf("%d", &n2);
	
	if (n1 > n2){
		calculeDif = n1 - n2;	
	} else {
		calculeDif = n2 - n1;		
	}
	
	printf("A diferen�a � %d. \n", calculeDif);
	system("PAUSE");
	
}
*/

/* Exerc�cio 5: ler as notas da primeira e segunda avalia��es de um aluno, calcular a media e escrever se este aluno foi 
	APROVADO (media maior ou igual a 7), REPROVADO (media inferior a 4), ou se est� em PROVA FINAL(entre 4 e 7).
	Escrever tamb�m a media calculada.*/ //7,8,9,10.    4,3,2,1.   5,6.	
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
	printf("Sua m�dia � %.1lf \n", media);
	
	if(media >= 7){
		printf("ALUNO APROVADO! \n");				
	} else if(media <= 4){
		printf("ALUNO REPROVADO! \n");			
	} else {
		printf("ALUNO EM PROVA FINAL! \n");
	}		
	system("PAUSE");
} */

// Exerc�cio 7: Crie um c�digo que leia tr�s n�meros inteiros e imprima o maior deles.
// Considere que n�o existem n�meros iguais!

main(){
	
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, n3;
	
	printf("Digite tr�s n�meros inteiros: \n");
	scanf("%d %d %d", &n1, &n2, &n3);
		
	if((n1 >= n2 ) && (n1 >= n3)){
		printf("%d � o maior! \n", n1);
		
	} else if((n2 >= n1) && (n2 >= n3)){
		printf("%d maior! \n", n2);
		
	} else {
		printf("%d � o maior! \n", n3);
	}

	system("PAUSE");
}
