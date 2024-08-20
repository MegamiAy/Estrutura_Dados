// Construa um programa que define um tipo novo de dados, para uma estrutura de um animal,
// deverá conter atributos como: raça, cor, peso e sexo.  
// E solicite ao usuário do programa 10 espécies e depois imprima em tela.  
#include <stdio.h>
#include <stdlib.h>

#define TAM 2

typedef struct animal {
    char raca[30], cor[20], sexo;
    float peso;
} Animal;

int main(void){
    Animal dados[TAM];

  for(int i=0; i<TAM; i++){
    printf("Digite a raça do animal: \n");
    gets(dados[i].raca);
    fflush(stdin);
    printf("Digite a cor do animal: \n");
    gets(dados[i].cor);
    fflush(stdin);
    printf("Digite o sexo(F/M)\n");
    scanf("%c", &dados[i].sexo);
    fflush(stdin);
    printf("e o peso do animal: \n");
    scanf("%f", &dados[i].peso);
    fflush(stdin);
  }

  printf("Raca\tCor\tSexo\tPeso\n")
  for(int i=0;i<TAM; i++){
    printf("%s\t%s\t%c\t%f\n", , &dados[i].raca, &dados[i].cor, &dados[i].sexo, &dados[i].peso);
  }


    return 0;
}
