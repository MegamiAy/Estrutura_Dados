/* lista dinamica heterogenia */
#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
	int x, y;
	struct lista *p;
}LISTA;

int main(void){
	LISTA *l = NULL;
	
	for(int i=1;i<=5;i++){
		LISTA *novo=(LISTA*) malloc(sizeof(LISTA));
		printf("Digite %i de x: ",i);
		scanf("%i",&novo->x);
		printf("Digite %i de y: ",i);
		scanf("%i",&novo->y);
		novo->p=l;
		l=novo;
	}
	
	while(l!=NULL){
		printf("%i = %i\n",l->x,l->y);
		l=l->p;
	}
	
	return 0;
}
