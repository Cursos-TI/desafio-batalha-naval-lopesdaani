#include <stdio.h>

int main(){
    int tabuleiro[3][3]; //Declaração de uma matriz 3x3
    tabuleiro[0][0] = 1; //Inicializando as coordenadas do tabuleiro
    tabuleiro[0][1] = 2;
    tabuleiro[0][2] = 3;
    tabuleiro[1][0] = 4;
    tabuleiro[1][1] = 5;
    tabuleiro[1][2] = 6;
    tabuleiro[2][0] = 7;
    tabuleiro[2][1] = 8;
    tabuleiro[2][2] = 9;
    //Acessando as coordenadas dos navios
    printf("As coordenadas do navio 1 [0][0]: %d\n", tabuleiro[0][0]);
    printf("As coordenadas do navio 2 [1][1]: %d\n", tabuleiro[1][1]);
    
    return 0;

}