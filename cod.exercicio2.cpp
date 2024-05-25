#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

// entra com a média 
// Entrar com as 3 notas, e calcular automaticamente a média, e já dizer se foi reprovado ou aprovado.
		
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
	printf("A média foi %lf \n", media);
	
	if(media >= 7){
		printf("Aluno Aprovado! :) \n");
	} else {
		printf("Aluno Reprovado! :( \n");
		printf("Estude mais da próxima vez! \n");
	}
	
	return 0;
	
	system("PAUSE");
}

