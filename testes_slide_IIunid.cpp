#include <stdio.h>
#include <locale.h>

// 			EXERC�CIOS - CONTADORES - REPETI��O COM FOR (3� UNIDADE)

// Fa�a um programa que receba um n�mero e calcule o fatorial desse n�mero.

int main(){
	
	setlocale(LC_ALL, "Portuguese");	
	
	int num, cont, resultado;
	
	printf("Ol�, vamos come�ar a fatorar! :)) \n");
	
	printf("Informe um n�mero: \n");
	scanf("%d", &num);
	
	resultado = 1;
	
		for(cont = 1; cont <= num; cont++){
			resultado = resultado * cont;
			printf("O resultado da fatora��o: %d \n", resultado);
		}	
}

/*
//Fa�a um programa que solicite 2 n�meros n1 e n2 e calcula a pot�ncia de (n1)n2 - n1 elevado a n2, sem usar a fun��o de pot�ncia.

int main (){

	int base, expoente, resultado, cont;
	
	printf("Informe a base: \n");
	scanf("%d", &base);
	
	printf("Informe o expoente: \n");
	scanf("%d", &expoente);
	
	resultado = 1;
	
	for(cont = 1; cont <= expoente; cont++){
		resultado = resultado * base;
	}
	
	printf("Resultado: %d \n", resultado);
		
}
*/

/*
// Fa�a um programa que receba as 10 notas dos alunos de uma turma e calcule a m�dia da turma;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float nota, soma, media;
	int cont;
	
	soma = 0;
	
		for(cont = 1; cont <= 10; cont++){
			printf("Informe uma nota: \n");
			scanf("%f", &nota);
			soma = soma + nota;
		}

	media = soma/4;
	printf("A m�dia foi: %.2f \n", media);
		
}
*/

/*
// Escreva um c�digo que some os n�meros entre 1 e 10, escrevendo o resultado final

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n, soma;
	soma = 0;
	
	for (n = 1; n <= 10; n++){	
		soma = soma + n;
		printf("O resultado final �: %d \n", soma);	
	}
}
*/

/*
int main(){	

	setlocale(LC_ALL, "Portuguese");	
	int i;			
	for (i = 1; i <= 50; i++){
		printf("Bahia Campe�o!!! \n");
	}			
}*/
