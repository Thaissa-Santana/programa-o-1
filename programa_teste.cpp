#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	printf("Qual a sua idade?\n");
	scanf("%d", &idade);
	
	if(idade >= 18){
		printf("Você é de maior.. Parabéns, seja bem vindo e divirta-se!:)\n", idade);
	} else {
		printf("Sinto muito.. você é menor de idade!:(\n", idade);
	}
	system("pause");	
}
