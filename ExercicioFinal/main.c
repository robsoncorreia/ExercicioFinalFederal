#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int vetor[5], soma, i, multiplicacao = 1;
	char tipoSoma[8];
	char tipoMult[8];
	
	for (i = 0 ; i < 5; i++) {
		
		printf("Digite um valor inteiro para a posicao: %d\n", i);
		scanf("%d",&vetor[i]);
		
		soma += vetor[i];
		//escolhi usar operadores ternarios só para fixar o conteudo
		//usei strcpy para atrituir a variavel do tipo char positivo ou negativo dependo do valor de soma
		strcpy(tipoSoma, soma >= 0 ? "positivo":"negativo");
		
		multiplicacao = multiplicacao * vetor[i];
		strcpy(tipoMult, multiplicacao >= 0 ? "positivo":"negativo");
	}
		printf("O valor da soma eh: %d\n", soma);
		printf("O valor da soma eh %s\n", tipoSoma);
		
		printf("O valor da  multiplicacao eh: %d\n", multiplicacao);
		printf("o valor da multiplicacao eh %s\n", tipoMult);
	return 0;
}
