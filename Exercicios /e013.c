/* lista dinamica homogenia */
#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
	int n;
	struct lista *p;
}LISTA;

int main(void){
	// variáveis
	LISTA *l = NULL;
	int numero=0;
	
	for(int i=1;numero!=-1;i++){
		LISTA *novo = (LISTA*) malloc(sizeof(LISTA));
		printf("Digite %i numero: (-1 para sair): ",i);
		scanf("%i",&numero);
		if(numero != -1){
			novo->n=numero;
			novo->p=l;
			l=novo;
		}else{
			break;
		}
	}
	
	while(l!=NULL){
		printf("%p = %i = %p\n",l,l->n,l->p);
		l=l->p;
	}
	return 0;
}
