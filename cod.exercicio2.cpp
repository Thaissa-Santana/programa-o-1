#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

// entra com a m�dia 
// Entrar com as 3 notas, e calcular automaticamente a m�dia, e j� dizer se foi reprovado ou aprovado.
		
main(void)
{
	
	double n1, n2, nf, media;
	//scanf("%lf %lf %lf", &n1, &n2, &nf);
	
	setlocale(LC_ALL, "Portuguese"); 
	//setlocale(LC_ALL, "");	
	
	printf("Digite a primeira nota: \n");
	scanf("%lf", &n1);
	
	printf("Digite a segunda nota: \n");
	scanf("%lf", &n2);
	
	printf("Digite a terceira nota: \n");
	scanf("%lf", &nf);
	
	media = (n1 + n2 + nf) / 3;
	printf("%lf", media);
	printf("\n");
	printf("A m�dia foi %lf \n", media);
	
	if(media >= 7){
		printf("Aluno Aprovado! :) \n");
	} else {
		printf("Aluno Reprovado! :( \n");
		printf("Estude mais da pr�xima vez! \n");
	}
	
	return 0;
	
	system("PAUSE");
}

