#include <stdio.h>
#include <stdlib.h>

#define TAM 10

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

  printf("\nRaca\tCor\tSexo\tPeso\n")
  for(int i=0;i<TAM; i++){
    printf("%s\t%s\t%c\t%f\n", , &dados[i].raca, &dados[i].cor, &dados[i].sexo, &dados[i].peso);
  }


    return 0;
}
