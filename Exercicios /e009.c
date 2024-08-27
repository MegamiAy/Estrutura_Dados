// Construa um programa que contém duas variáveis inteiras, e cada uma destas variáveis deverá ter um valor atribuído nelas,
// através de uma entrada de dado do usuário. Também elaborem no mesmo programa três funções, que deveram usar o conceito de ponteiro para 
// manipular a passagem dos dados para as funções.
// As funções deverão ter as seguintes funcionalidades: a soma das duas variáveis, a diferença entre as duas variáveis e a multiplicação das duas variáveis.  

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void soma(int *a, int *b, int *r);
void diferenca(int *a, int *b, int *r);
void multi(int *a, int *b, int *r);

int main(){
	// vars
	int n1, n2, R;
	
	// entrada
	printf("Digite um numero inteiro: ");
	scanf("%i", &n1);
	printf("Digite outro numero inteiro: ");
	scanf("%i", &n2);	
	
	// processamento & saida
	void soma(&n1, &n2, &R);
	printf("soma: %i\n", R);
	void diferenca(&n1, &n2, &R);
	printf("diferenca: %i\n", R);
	void multi(&a, &b, &R);
	printf("multiplicacao: %i\n", R);
	
	return 0;
}


void soma(int *a, int *b, int *r){
	*r = *a + *b;
}

void diferenca(int *a, int *b, int *r){
	*r = *a - *b;
}

void multi(int *a, int *b, int *r){
	*r = *a * *b;
}
