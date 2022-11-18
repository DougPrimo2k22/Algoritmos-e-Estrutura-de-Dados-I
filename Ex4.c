#include <stdio.h>
#include <locale.h>

float printmaior(float valor1, float valor2);

float main(){
	
	setlocale(LC_ALL, "Portuguese");
	printf("\n==================Inicio do Programa==================\n\n");
	float valor1,valor2,maior;
	
	printf("Entre com um valor real: \n");
	scanf("%f",&valor1);
	printf(" Entre com um valor real: \n");
	scanf("%f",&valor2);
	printf("\n\n=======================================================\n");	
	maior = printmaior(valor1,valor2);
	printf("\n O menor valor entre %.2f e %.2f = %.2f",valor1,valor2,maior);
	printf("\n\n====================Fim do Programa====================\n");	
	
}

float printmaior(float valor1, float valor2){

	if ( valor1 > valor2)
	
	return valor1;
	return valor2;
	}
