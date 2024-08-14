#include <stdio.h>
#include <stdlib.h>

// estrutura
typedef struct ponto {
    int x, y;
} Ponto;

// prototipo
Ponto entrada();
void impressao(Ponto a);

int main(){
    // var
    Ponto bd[5];
    
    // entrada
    for(int i=0; i<5; i++){
        printf("Digite dados do ponto %i\n \n", i+1);
        bd[i]=entrada();
        system("cls");
    }
    
    // saida
    for(int i=0; i<5; i++){
        impressao(bd[i]);
    }
    
    return 0;
}

Ponto entrada(){
    Ponto a;
    printf("Digite o valor de x: ");
    scanf("%i", &a.x);
    printf("Digite o valor de y: ");
    scanf("%i", &a.y);
    return a;
}

void impressao(Ponto a){
    printf("x: %i, y: %i", a.x, a.y);
}
