// Faça um programa que peça um número para calcular o fatorial. Deve tem uma função para calcular o fatorial (por referência).  
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calcula(int *num, int *r);

int main(){
	// vars
	int n, res;
	
	// entrada
	printf("qual numero sera fatorado: ");
	scanf("%i", &n);	
	
	// processamento & saida
	fatorar(&n, &res);
	
	return 0;
}



void calcula(int *num, int *r){
	*r = 1;
	
	for(int i = *num; i<=1; i--){
		*r *= i;
	}
	
	printf("%i! = %i\n", *num, *r);
}
