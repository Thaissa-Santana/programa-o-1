#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
 int main(){
 	
   int num,n;

   printf("informe um número");
   scanf("%d",&num);

   for (n = 1; n<num; n++)
		printf("%d", n);

   for (n=num; n>0; n--)
   		printf("%d", n);

   return 0;
}*/


/*
int main(){
	
	int a, b, c, d, e;
	a = 0;
	b = 1;
	e = a+b;

		for (c=3; c<=7; c++){
		e = e + (a + b);
		d = a;
		a = b;
		b = b + d;
		}
		
	printf("o valor de e=%d",e);
}
*/

/*
int main(){
	
	setlocale(LC_ALL, "Portuguese");

   	int n;

	   for (n = 9; n != 0; n--)
	   		printf("n = %d", n--);
	
	   return 0;
	   	
}*/  


main(){
	
				setlocale(LC_ALL, "Portuguese");
			
               float salario, x;
               int cont;              
               x = 0;
               
               for (cont=1;cont <=5; cont++){
               	
                              printf("informe o seu salario");
                              scanf("%f", &salario);
                              
                              if (salario<x){
                                 x = salario;      
                              }
               }
               
               printf("%f",x);
               system("PAUSE"); 
}


/*
main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int contador, num;
	
	printf("Informe um número:\n");
	scanf("%d", &num);
	contador = 1;
	
	while(contador <= num){
		printf("%d Olá pessoal!\n", contador);
		contador++;
	}
	
	printf("\n");

	
	for(contador = 1; contador <= num; contador++){
		printf("%d Como vocês estão? :)) \n", contador);
	}
		printf("\n");
	
	for(contador = 10; contador >= 1; contador--){
		printf("%d Hidratem-se! Bebam bastante água e tenham um bom dia. :)) \n", contador);	
	}
	
}*/
