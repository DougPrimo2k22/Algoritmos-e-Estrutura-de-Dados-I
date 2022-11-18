#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n==================Inicio do Programa==================\n");
	float valor[15],soma=0,media;
	int contador,i;
	
	printf("\nInsira a nota de 15 alunos: ",contador);
	for(contador=1; contador <16; contador++){
		printf("\nAluno %d: ",contador);
		scanf("%f", &valor[contador]);
		soma = soma + valor[contador];
		}

	media = soma/15;
	
	printf("\n\n=======================================================\n");
	
		printf("\nNota media dos 15 alunos: %.2f ",media);
	printf("\n\n=======================================================\n");
	
	for(contador=1; contador <16; contador++){
		
		if (media > valor[contador]){
		++i;
		}
			
		}
		printf("\nTotal de Alunos com notas abaixo da media: %d ",i);
		

	printf("\n\n====================Fim do Programa====================\n");
	}
