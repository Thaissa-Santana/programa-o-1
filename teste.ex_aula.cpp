#include <stdio.h>
#include <locale.h>

//Programa: l� o ano de nascimento, ano atual e o seu sal�rio, assim calcula a sua idade > 18 / idade < 18 e imprime na tela.

main(){
		
	setlocale(LC_ALL, "Portuguese"); 
	
	// Declara��o de vari�veis	
	int anoNascimento, idade, anoAtual;
	
	float salario;
	
	printf("Informe o ano em que voc� nasceu: \n");	
	scanf("%d", &anoNascimento);
	
	printf("Informe o ano atual: \n");	
	scanf("%d", &anoAtual);
	
	printf("Informe o seu sal�rio: \n");	
	scanf("%f", &salario);
	
	idade = anoAtual - anoNascimento;

	if (idade < 18){
		salario = 0;
		
		if (idade <= 12){
			printf("Voc� ainda � crian�a! \n");	
		} else {
			printf("Voc� ainda � adolescente! \n");
		}
		
	} else if (idade >= 18 && idade < 60) {
		printf("Voc� j� responde por seus atos! \n");
		printf("Voc� � adulto! \n");
		
		} else {
		printf("Voc� � idoso!\n");
		}		
	
	// Imprime o resultado		
	printf("\n Sua idade atual � %d e seu sal�rio � %.2f", idade, salario);
	
}
