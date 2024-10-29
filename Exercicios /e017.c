/******************************************************************************
lista dinâmica homogênea para guardar números digitados pelo usuário, 
solicite ao usuário a quantidade de número e os números e depois os imprima em tela. 
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
    int n;
    struct lista *p;
} LISTA;

int main(void){
    // vars
    LISTA *l = NULL;
    int tam;
    
    printf("Digite quantos numeros quer para lista: ");
    scanf("%i", &tam);
    
    for(int i=1; i<=tam; i++){
        LISTA *novo = (LISTA*) malloc(sizeof(LISTA));   // cast
        printf("Digite %i numero: ", i);
        scanf("%i", &novo->n);
        novo->p=l;
        l->novo;
    }

    while(l!=NULL){
        printf("%p = %i = %p\n", l,l->n, l->p); // n precisa dos %p, mas é para demonstrar melhor como funciona
        l=l->p;
    }

    return 0;
}
