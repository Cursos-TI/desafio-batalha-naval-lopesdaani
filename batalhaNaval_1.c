#include <stdio.h>

int main(){
    int tabuleiro[2][2]; //Declaração de uma matriz 2x2
    tabuleiro[0][0] = 1; //Inicializando as coordenadas do tabuleiro
    tabuleiro[0][1] = 2;
    tabuleiro[1][0] = 3;
    tabuleiro[1][1] = 4;
   
    //Acessando as coordenadas dos navios
    printf("As coordenadas do navio 1 [0][0] é %d\n", tabuleiro[0][0]);
    printf("As coordenadas do navio 2 [1][1] é %d\n", tabuleiro[1][1]);
    
    return 0;

}