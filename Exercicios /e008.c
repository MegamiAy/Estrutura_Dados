// construa um programa para calcular a área de um circulo, a Área deve ser do tipo poteiro

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void area(float *a, float raio);

int main(){
	// vars
	float A, R;
	
	// entrada
	printf("digite o raio: ");
	scanf("%f", &R);	
	
	// processamento
	// & referencia onde esta/vai ser usado o *area, sem que ele esteja sendo definido aqui
	area(&A, R);
	
	// saida
	printf("a area e: %.2f", A);
	
	
	return 0;
}

void area(float *a, float raio){
	// M_PI -> pi: 3.1415
	*a = M_PI*pow(raio, 2);
}
