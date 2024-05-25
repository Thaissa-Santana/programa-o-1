#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h> 

main() {
	
	float preco_produto;
	float percentual_desconto;

   setlocale(LC_ALL, "Portuguese"); 
  
	printf("Informe o preço do produto: R$ "); 
    scanf("%f", &preco_produto);
    printf("\n");
        
    printf("Informe o percentual de desconto: ");
    scanf("%f", &percentual_desconto);
	printf("\n");
	
    printf("O valor a ser pago é: R$ %f ", preco_produto - (preco_produto / 100));
    printf("\n");

 	system("PAUSE");
   
}
