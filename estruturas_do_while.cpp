#include <stdio.h>

// Escreva um programa, usando a estrutura do..while, que imprima todos os número pares até 20; DO WHILE

int main(){
	
	int n;
	n = 2;
	
	do { //instruções
		printf("%d \n", n);
		n = n + 2;
	}
	
	while(n <= 20); //condição
	
}

// Faça um código que lê a idade de 15 pessoas e mostre a quantidade de pessoas que possui a idade entre 0 e 12 anos; WHILE

#include <stdio.h>

int main(){
	
	 int cont, idade, soma;
	 soma = 0;
	 cont = 1;
	 
	 while (cont <= 10){ //condição
	 	
		 printf("informe uma idade \n"); //instruções
		 scanf("%d", &idade);
		 
		 if (idade >= 0 && idade <= 12)
		 soma += idade;
		 cont++;
	}
	
	printf("a soma das idades é %d", soma);
	
}


