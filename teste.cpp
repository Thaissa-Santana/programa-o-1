#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	setlocale(LC_ALL, "");

// Crie um código C que leia um valor e mostre esse valor caso ele seja maior que zero.
	
	int num;	

	printf("DIGITE UM VALOR INTEIRO: \n");
	scanf("%d", &num);
	
		if (num > 0){
			//printf("%d", num);
			
			printf("O NÚMERO %d É MAIOR QUE ZERO!", num);
			printf("\n");
			
		} else {
			printf("DESCULPE.. O NÚMERO DIGITADO NÃO É MAIOR QUE ZERO! \n");
		}
		
	system("PAUSE");
	return 0;
}
