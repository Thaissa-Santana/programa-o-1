//Questão 4 - projeto

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Crie um código C que leia um valor e mostre esse valor caso ele seja maior que zero.
	
main(){
	
	setlocale(LC_ALL, "");
	
	int num;	

	printf("DIGITE UM VALOR INTEIRO: \n");
	scanf("%d", &num);
	
		if (num > 0){		
			printf("O NÚMERO %d É MAIOR QUE ZERO! \n", num);
			
		} else {
			printf("DESCULPE.. O NÚMERO DIGITADO NÃO É MAIOR QUE ZERO! \n");
			printf("TENTE NOVAMENTE :)) \n");
		}
		
	system("PAUSE");
	return 0;
	
}

