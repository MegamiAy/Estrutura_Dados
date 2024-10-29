/* Lista estaticas homogenia*/

#include <stdlib.h>
#include <stdio.h>

int main(void){
	int lista[10];
	
	for(int i=0;i<10;i++){
		printf("Digite %i numero: ",i+1);
		scanf("%i",&lista[i]);
	}
	
	for(int i=0;i<10;i++){
		printf("%i\n",lista[i]);
	}
	
	return 0;
}
