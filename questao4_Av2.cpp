#include <stdio.h>

#include <stdlib.h>

#include <conio.h>

//Calculo do IMC
//fazer depois, está errado.

main(){

               float peso, altura, imc, peso_ideal;
               char sexo;
               char nome[40];
               String msg="";
               
               peso = StrToFloat(edtPeso)

               printf("Informe a sua altura: ");
               scanf("%f", &altura);
			   printf("\n");

               printf("Informe o seu sexo (F- feminino ou M - masculino): ");
               sexo = getche();
               printf("\n");

               printf("Informe o seu nome: ");
               scanf("%s", nome);
               printf("\n");
               
               printf("Informe seu peso: ");
               scanf("%f", peso);
			   printf("\n");
               

               imc = peso / (altura * altura);
														//%.2f \n
               printf("O sexo foi %c e seu imc ideal é %f \n", sexo, imc);

               printf("Seu nome é %s \n", nome);

               system("PAUSE");

}

