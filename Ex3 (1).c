#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n==================Inicio do Programa==================\n");
	int valor[8];
	int contador,x,y,soma;
	
	printf("\nValores declarados: \n",contador);
	for(contador=1; contador <11; contador++){
		valor[contador] = contador;
		printf("\nPosição %d: %d",contador,valor[contador]);
		
	}
	printf("\n\nInsira um valor inteiro de 1 a 8 para X: ");
	scanf("\n%d",&x);
	
	printf("\nInsira um valor inteiro para 1 a 8 para y: ");
	scanf("\n%d",&y);
	
	if (x<=8 && x>=1 && y<=8 && y>=1){

	soma = valor[x] + valor[y];
	
	printf("\n\n=======================================================\n");
	
	printf("\n Soma das posições de x e y: %d + %d = %d",valor[x],valor[y],soma);

	printf("\n\n====================Fim do Programa====================\n");
	}
		else{
			printf("\n\n=======================================================\n");
			printf("\nValor digitado fora da escala\n");
			printf("\n====================Fim do Programa====================\n");
		}
	}
