//Quest�o 4 - projeto

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Crie um c�digo C que leia um valor e mostre esse valor caso ele seja maior que zero.
	
main(){
	
	setlocale(LC_ALL, "");
	
	int num;	

	printf("DIGITE UM VALOR INTEIRO: \n");
	scanf("%d", &num);
	
		if (num > 0){		
			printf("O N�MERO %d � MAIOR QUE ZERO! \n", num);
			
		} else {
			printf("DESCULPE.. O N�MERO DIGITADO N�O � MAIOR QUE ZERO! \n");
			printf("TENTE NOVAMENTE :)) \n");
		}
		
	system("PAUSE");
	return 0;
	
}

