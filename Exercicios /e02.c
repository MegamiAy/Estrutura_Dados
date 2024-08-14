#include <stdio.h>
#include <stdlib.h>

struct pessoa {
    char nome[100];
    int cpf;
};

int main(void){
    struct pessoa dados;
    
    printf("Digite (nome, cpf): ");
    scanf("%s %i", &dados.nome, &dados.cpf);
    fflush(stdin);
    
    printf("Dados: %s, %i \n", dados.nome, dados.cpf);

    return 0;
}
