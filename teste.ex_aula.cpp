#include <stdio.h>
#include <locale.h>

//Programa: lê o ano de nascimento, ano atual e o seu salário, assim calcula a sua idade > 18 / idade < 18 e imprime na tela.

main(){
		
	setlocale(LC_ALL, "Portuguese"); 
	
	// Declaração de variáveis	
	int anoNascimento, idade, anoAtual;
	
	float salario;
	
	printf("Informe o ano em que você nasceu: \n");	
	scanf("%d", &anoNascimento);
	
	printf("Informe o ano atual: \n");	
	scanf("%d", &anoAtual);
	
	printf("Informe o seu salário: \n");	
	scanf("%f", &salario);
	
	idade = anoAtual - anoNascimento;

	if (idade < 18){
		salario = 0;
		
		if (idade <= 12){
			printf("Você ainda é criança! \n");	
		} else {
			printf("Você ainda é adolescente! \n");
		}
		
	} else if (idade >= 18 && idade < 60) {
		printf("Você já responde por seus atos! \n");
		printf("Você é adulto! \n");
		
		} else {
		printf("Você é idoso!\n");
		}		
	
	// Imprime o resultado		
	printf("\n Sua idade atual é %d e seu salário é %.2f", idade, salario);
	
}
