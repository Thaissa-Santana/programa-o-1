#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    double notas[4];
    double media;

    printf("Digite as notas das quatro provas do aluno: ");
    
    for (int i = 0; i < 4; i++) {
        scanf("%lf", &notas[i]);
    }

    for (int i = 0; i < 3; i++) {
    	
        for (int j = i + 1; j < 4; j++) {
        	
            if (notas[i] > notas[j]) {
                double temp = notas[i];
                notas[i] = notas[j];
                notas[j] = temp;
                
            }
        }
    }

    media = (notas[0] + notas[1] + notas[2]) / 3;

    printf("A média considerando apenas as três melhores notas é: %.2lf\n", media);
    return 0;
}
