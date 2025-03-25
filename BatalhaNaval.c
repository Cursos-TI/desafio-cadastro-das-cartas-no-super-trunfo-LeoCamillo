#include <stdio.h>

int main() {

    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; 
    int tabuleiro[10][10]; //Matriz de 10x10

    printf("Tabuleiro do jogo Batalha Naval! \n");

    for (int i = 0; i < 10; i++)
    {
    for (int j = 0; j < 10; j++){
        tabuleiro[i][j] = 0;
        tabuleiro[2][2] = 3;
        tabuleiro[2][3] = 3;
        tabuleiro[2][4] = 3;
        tabuleiro[6][8] = 3;
        tabuleiro[7][8] = 3;
        tabuleiro[8][8] = 3;

    }
    }
    printf("   ");
    for (int i = 0; i < 10; i++) {
        printf("%c  ", linha[i]); // Imprime a letra da linha
    }
    printf("\n");

    // Imprime o tabuleiro 
    for (int i = 0; i < 10; i++) {
        printf("%d  ", i+1);  // Imprime o numero da coluna
        for (int j = 0; j < 10; j++) {
            printf("%d  ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
