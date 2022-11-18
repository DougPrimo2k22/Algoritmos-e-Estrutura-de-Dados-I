#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n==================Inicio do Programa==================\n");
	int valor[10],contador,i=0;
	float media=0,soma=0;
	
	for(contador=0; contador <10; contador++){
		printf("\nEntre com algum valor inteiro: ");
		scanf("%d", &valor[contador]);
		
	}
	printf("\n=======================================================");
	printf("\nValores negatios: ");
	
	for(contador=0; contador <10; contador++){
		 
		if (valor[contador] < 0){
		i++;
		soma = soma + valor[contador];
		printf("%d ", valor[contador]);
		}

	}
	media = soma/i;
		
	
	printf("\n\nMedia dos valores negativos: %f\n", media);
	printf("\n====================Fim do Programa====================\n");

}
