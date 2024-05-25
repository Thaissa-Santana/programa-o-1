#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float valor1, valor2, resultado;
	int op;
	
	do{
	printf("Informe dois valores: \n");
	scanf("%f", &valor1);
	scanf("%f", &valor2);
	
	printf("Informe sua opção: \n");
	scanf("%d", &op);
	
		if (op < 4){

            if (op == 1)
				resultado = valor1 + valor2;

                else if (op == 2)
					resultado = valor1 - valor2;

                else if (op == 3)
					resultado = valor1 * valor2;

                printf("Resultado: %f \n", resultado);
                printf("\n");
		}
}
	while (op != 4);
	
	system("PAUSE");       

}
