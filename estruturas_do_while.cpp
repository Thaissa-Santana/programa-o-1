#include <stdio.h>

// Escreva um programa, usando a estrutura do..while, que imprima todos os n�mero pares at� 20; DO WHILE

int main(){
	
	int n;
	n = 2;
	
	do { //instru��es
		printf("%d \n", n);
		n = n + 2;
	}
	
	while(n <= 20); //condi��o
	
}

// Fa�a um c�digo que l� a idade de 15 pessoas e mostre a quantidade de pessoas que possui a idade entre 0 e 12 anos; WHILE

#include <stdio.h>

int main(){
	
	 int cont, idade, soma;
	 soma = 0;
	 cont = 1;
	 
	 while (cont <= 10){ //condi��o
	 	
		 printf("informe uma idade \n"); //instru��es
		 scanf("%d", &idade);
		 
		 if (idade >= 0 && idade <= 12)
		 soma += idade;
		 cont++;
	}
	
	printf("a soma das idades � %d", soma);
	
}


