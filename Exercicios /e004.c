// Construa um programa que define um tipo novo de dados, para uma estrutura de um animal,
// deverá conter atributos como: raça, cor, peso e sexo.  
// E solicite ao usuário do programa 10 espécies e depois imprima em tela.  
#include <stdio.h>
#include <stdlib.h>

typedef struct animal {
    char raca[30], cor[20], sexo;
    float peso;
} Animal;

int main(void){
    Animal dados;
    
    printf("Digite a raça do animal: \n");
    gets(dados.raca);
    printf("Digite a cor do animal: \n");
    gets(dados.cor);
    printf("Digite o sexo(F/M) e o peso do animal: \n");
    scanf("%s %f", &dados.sexo, &dados.peso);

    printf("Adivinhe\nAnimal da raca: %s, cor: %s, sexo: %s e o peso: %f", dados.raca, dados.cor, dados.sexo, dados.peso);

    return 0;
}
