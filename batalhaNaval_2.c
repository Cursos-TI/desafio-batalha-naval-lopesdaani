#include <stdio.h>

int main(){
    
    int matriz[10][10]; //Declaração de uma matriz 10x10 de inteiros

    //Inicialização da matriz usando estruturas de repetição 'for' aninhadas
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++) {
            matriz[i][j] = i + j; //Atribuindo valores à matriz
            printf("matriz[%d][%d] = %d\n", i, j, matriz[i][j]);
        }
    }
    

    return 0;
}