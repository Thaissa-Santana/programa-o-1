#include <stdio.h>
#include <locale.h>

// Programa que leia 10 valores, um de cada vez, e conte quantos s�o positivos, mostrando o resultado da contagem ao final.

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int valor = 0, positivos = 0;
	float num;

	do{
		printf("Digite um n�mero: ");
		scanf("%f", &num);
		
		if(num > 0){
			positivos++;
		}
		
		valor++;
	}
	while (valor < 10);
	
	printf("O n�mero de positivos �: %d\n", positivos);
	return 0;
	
}




