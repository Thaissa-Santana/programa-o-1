#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	setlocale(LC_ALL, "");

// Crie um c�digo C que leia um valor e mostre esse valor caso ele seja maior que zero.
	
	int num;	

	printf("DIGITE UM VALOR INTEIRO: \n");
	scanf("%d", &num);
	
		if (num > 0){
			//printf("%d", num);
			
			printf("O N�MERO %d � MAIOR QUE ZERO!", num);
			printf("\n");
			
		} else {
			printf("DESCULPE.. O N�MERO DIGITADO N�O � MAIOR QUE ZERO! \n");
		}
		
	system("PAUSE");
	return 0;
}
