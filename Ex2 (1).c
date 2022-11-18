#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n==================Inicio do Programa==================\n");
	float valor[10],valor2[10];
	int contador;
	
	
	for(contador=0; contador <10; contador++){
		printf("\nEntre com algum valor real: ");
		scanf("%f", &valor[contador]);
		
	}
	
	for(contador=0; contador <10; contador++){
		printf("\nValor imputado: %.2f",valor[contador]);
	}	
	printf("\n\n=======================================================\n");
	
	
	for(contador=0; contador <10; contador++){
		 		
		valor2[contador] = valor[contador] * valor[contador];
		
	}
	for(contador=0; contador <10; contador++){
		printf("\nValor ao quadrado: ");		
		printf("%.2f ", valor2[contador]);
	}


	
	printf("\n\n====================Fim do Programa====================\n");

	}
