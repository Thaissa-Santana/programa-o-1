#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
//#include <locale.h>

/*
int main(){
	
//	setlocale(LC_ALL, "Portuguese");
	
	int a,b,c,x,y,z;
	
	printf("Digite um numero: ");
	scanf("%d", &x);
	
	printf("Digite um numero: ");
	scanf("%d", &y);
	
	printf("Digite um numero: ");
	scanf("%d", &z);
	
	if (((x % 2) == 1) && (((y % 3) == 0) || ((z % 2) == 0))){
		a = x;
		b = y*2;
		c = z/2;
	}
	else {
		if(((x % 3) == 1) || ((y % 4) == 0) || ((z % 5) == 0)) {
			a = z;
			b = x*2;
			c = y/2;	
		}
		else {
			a = y/2;
			b = z*2;
			c = x/2;
		}
	}
			
	printf("Resposta: %d \n", a+b+c);
	getch();
	return 0;	
} */
/*
main(){
	float altura, peso;
    char sexo;
    char nome[40];
	    printf("Informe a sua altura:");
	    scanf("%f",&altura);
		printf("Informe o seu sexo: F- feminino ou M - masculino:");
		sexo = getche();	
		printf("informe o seu nome");
	    scanf("%s",&nome);
	    peso = (72.7*altura)-58;
		printf("O seu peso ideal é ", peso);
	    printf("seu nome é ", nome);
		system("PAUSE");
} */ 
/*
main(){
				float val1, val2, resultado;
			    int op;

               printf("informe dois valores");
               scanf("%f", &val1);
               scanf("%f", &val2);
               printf("informe sua opcao");
               scanf("%d", &op);

               if (op<4){
                 if (op==1)
                    resultado = val1 + val2;
                    
                 else if (op==2)
                    resultado = val1 - val2;
                    
                 else if (op==3)
                    resultado = val1 * val2;
                    printf("%f",resultado);
               }
}*/

main(){
	
	float salario, perc;
	int tempo;

       printf("Informe o seu salario:");
       scanf("%f",&salario);

       printf("Informe ha quantos anos você está na empresa:");
       scanf("%d",&tempo);

       if (salario < 3000)

           if (tempo < 5)

              perc = 10;

           else

             perc = 15;

    else if (salario >=3000 && salario < 5000)

           if (tempo < 5)

              perc = 6;

          else

             perc = 8;

       else

           perc = 4;

       printf("seu percentual de aumento será de %f \n",perc);
       system("PAUSE");
}
