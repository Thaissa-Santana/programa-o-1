#include <stdio.h>
#include <locale.h>

// 			EXERCÍCIOS - CONTADORES - REPETIÇÃO COM FOR (3ª UNIDADE)

// Faça um programa que receba um número e calcule o fatorial desse número.

int main(){
	
	setlocale(LC_ALL, "Portuguese");	
	
	int num, cont, resultado;
	
	printf("Olá, vamos começar a fatorar! :)) \n");
	
	printf("Informe um número: \n");
	scanf("%d", &num);
	
	resultado = 1;
	
		for(cont = 1; cont <= num; cont++){
			resultado = resultado * cont;
			printf("O resultado da fatoração: %d \n", resultado);
		}	
}

/*
//Faça um programa que solicite 2 números n1 e n2 e calcula a potência de (n1)n2 - n1 elevado a n2, sem usar a função de potência.

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
// Faça um programa que receba as 10 notas dos alunos de uma turma e calcule a média da turma;

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
	printf("A média foi: %.2f \n", media);
		
}
*/

/*
// Escreva um código que some os números entre 1 e 10, escrevendo o resultado final

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n, soma;
	soma = 0;
	
	for (n = 1; n <= 10; n++){	
		soma = soma + n;
		printf("O resultado final é: %d \n", soma);	
	}
}
*/

/*
int main(){	

	setlocale(LC_ALL, "Portuguese");	
	int i;			
	for (i = 1; i <= 50; i++){
		printf("Bahia Campeão!!! \n");
	}			
}*/
