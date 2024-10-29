/******************************************************************************
lista dinâmica heterogênea onde o usuário deverá informar quantidade de disciplinas que ele tem e os dados de cada 
disciplina como: sala, dia da semana, nome disciplina e semestre e depois o algoritmo deve imprimir estes dados em tela. 
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

typedef struct disciplinas{
    int sala, semestre;
    char dia[10], nome[20];
    struct disciplinas *p;
} DISCIPLINAS;

int main(void){
    // vars
    DISCIPLINAS *l = NULL;
    int tam;
    
    printf("De quantas disciplinas você participa? ");
    scanf("%i", &tam);
    
    for(int i=1; i<=tam; i++){
        DISCIPLINAS *novo = (DISCIPLINAS*) malloc(sizeof(DISCIPLINAS));
        printf("Digite o nome (%i): ", i+1);
        scanf("%s", l[i]->nome);
        fflush(stdin);
        printf("Digite o dia (%i): ", i+1);
        scanf("%s", l[i]->dia);
        fflush(stdin);
        printf("Digite a sala (%i): ", i+1);
        scanf("%i", &l[i]->sala);
        fflush(stdin);
        printf("Digite a sala (%i): ", i+1);
        scanf("%i", &l[i]->semestre);
        fflush(stdin);
        novo->p=l;
        l->novo;
    }

    while(l!=NULL){
        printf("%s - %s - %i - %i\n", l->nome, l->dia, l->sala, l->semestre);
        l=l->p;
    }

    return 0;
}
