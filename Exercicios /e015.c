/* lista estatica heterogenia */
#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int x,y;
}Lista;

int main(void){
	Lista l[5];
	
	for(int i=0;i<5;i++){
		printf("Digite %i x:",i);
		scanf("%i",&l[i].x);
		printf("Digite %i y:",i);
		scanf("%i",&l[i].y);
	}
	
	for(int i=0;i<5;i++){
		printf("x = %i, y = %i\n",l[i].x,l[i].y);
	}
	
	return 0;
}
