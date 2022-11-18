#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n==================Inicio do Programa==================\n");
	int valor[10];
	int contador,x,y,soma;
	
	printf("\nInsira 10 valores inteiros: \n",contador);
	for(contador=1; contador <11; contador++){
		printf("\nValor %d: ",contador);
		scanf("%d", &valor[contador]);
		}

	
	printf("\n\n=======================================================\n");
	for(contador=10; contador>0; contador--){
		printf("\nValor %d: %d",contador,valor[contador]);

		}

	printf("\n\n====================Fim do Programa====================\n");
	}
