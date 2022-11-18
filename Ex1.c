#include <stdio.h>
#include <locale.h>

float printmedia(float media, float valor1, float valor2);

float main(){
	
	setlocale(LC_ALL, "Portuguese");
	printf("\n==================Inicio do Programa==================\n\n");
	float valor1,valor2,resultmedia,media;
	
	printf("Entre com um valor reais: \n");
	scanf("%f",&valor1);
	printf(" Entre com um valor reais: \n");
	scanf("%f",&valor2);
	printf("\n\n=======================================================\n");	
	resultmedia = printmedia(media,valor1,valor2);
	printf("\n Media dos valores %.2f e %.2f = %.2f",valor1,valor2,resultmedia);
	printf("\n\n====================Fim do Programa====================\n");	
	
}

float printmedia(float media,float valor1, float valor2){

	media=valor1 + valor2;
	media = media/2;
	
	return media;
	}
