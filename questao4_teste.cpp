#include <stdio.h>
#include <locale.h>

/*
main(){

	int fatorial, nr;
	scanf("%d", &nr);
	
	fatorial = 1;
	
	while (nr > 1) {
	fatorial = fatorial * nr;
	    nr = nr - 1;
	}
	  
	printf("%d", fatorial);
}*/

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int fatorial, nr;
	printf("Informe um número para fatorar: ");	
	scanf("%d", &nr);
	
	fatorial = 1;
	
	while (nr > 1) {	
		fatorial = fatorial * nr;
		nr = nr - 1;
	  }
	  
	 printf("R-> %d", fatorial);
}
