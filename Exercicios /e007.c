#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void equacao(float *x1, float *x2, float a, float b, float c);

int main(){
	// vars
	float X1, X2, A, B, C;
	
	// entrada
	printf("Digite o valor de A: ");
	scanf("%f", &A);
	printf("Digite o valor de B: ");
	scanf("%f", &B);
	printf("Digite o valor de C: ");
	scanf("%f", &C);
	
	// processamento
	equacao(&X1, &X2, A, B, C);
	
	printf("Os valores sao: \nX1= %.2f\nX2= %.2f", X1, X2);
	
	
	return 0;
}

void equacao(float *x1, float *x2, float a, float b, float c){
	// pow -> potencição
	// sqrt -> raiz quadrada
	float delta = pow(b,2) - 4*a*c;
	*x1 = (-b + sqrt(delta))/2*a;
	*x2 = (-b - sqrt(delta))/2*a;
	
	
	
}
