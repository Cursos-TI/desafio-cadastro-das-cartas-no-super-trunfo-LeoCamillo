#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

void inicializarTabuleiro(int tabuleiro[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            tabuleiro[i][j] = 0;  // Inicializa com água
        }
    }
}

int podePosicionar(int tabuleiro[LINHAS][COLUNAS], int x, int y, int tamanho, int dx, int dy) {
    for (int i = 0; i < tamanho; i++) {
        int nx = x + i * dx;
        int ny = y + i * dy;
        if (nx < 0 || nx >= LINHAS || ny < 0 || ny >= COLUNAS || tabuleiro[nx][ny] != 0) {
            return 0; // Posição inválida ou já ocupada
        }
    }
    return 1;
}

void posicionarNavio(int tabuleiro[LINHAS][COLUNAS], int x, int y, int tamanho, int dx, int dy) {
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[x + i * dx][y + i * dy] = 3;
    }
}

void aplicarHabilidade(int tabuleiro[LINHAS][COLUNAS], int origemX, int origemY, char tipo) {
    int i, j;
    switch (tipo) {
        case 'C':  // Cone
            for (i = 0; i < 3; i++) {  
                for (j = -i; j <= i; j++) {  
                    int x = origemX + i;
                    int y = origemY + j;
                    if (x >= 0 && x < LINHAS && y >= 0 && y < COLUNAS) {
                        if (tabuleiro[x][y] == 0) tabuleiro[x][y] = 5;
                    }
                }
            }
            break;
        case 'X':  // Cruz
            for (i = -2; i <= 2; i++) {
                if (origemX + i >= 0 && origemX + i < LINHAS && tabuleiro[origemX + i][origemY] == 0)
                    tabuleiro[origemX + i][origemY] = 5;
                if (origemY + i >= 0 && origemY + i < COLUNAS && tabuleiro[origemX][origemY + i] == 0)
                    tabuleiro[origemX][origemY + i] = 5;
            }
            break;
        case 'O':  // Octaedro
            for (i = -2; i <= 2; i++) {
                for (j = -2; j <= 2; j++) {
                    if (((i < 0 ? -i : i) + (j < 0 ? -j : j)) <= 2) {  
                        int x = origemX + i;
                        int y = origemY + j;
                        if (x >= 0 && x < LINHAS && y >= 0 && y < COLUNAS) {
                            if (tabuleiro[x][y] == 0) tabuleiro[x][y] = 5;
                        }
                    }
                }
            }
            break;
    }
}

void imprimirTabuleiro(int tabuleiro[LINHAS][COLUNAS]) {
    char linha[COLUNAS] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; 
    printf("\n   ");
    for (int i = 0; i < COLUNAS; i++) {
        printf("%c   ", linha[i]); 
    }
    printf("\n");

    for (int i = 0; i < LINHAS; i++) {
        printf("%2d  ", i + 1);  
        for (int j = 0; j < COLUNAS; j++) {
            if (tabuleiro[i][j] == 0)
                printf("~   ");  // Água
            else if (tabuleiro[i][j] == 3)
                printf("#   ");  // Navio
            else if (tabuleiro[i][j] == 5)
                printf("*   ");  // Área afetada
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[LINHAS][COLUNAS];
    inicializarTabuleiro(tabuleiro);

    // Posicionar navios
    int navios[4][4] = {
        {2, 2, 1, 0},  
        {6, 8, 0, -1}, 
        {1, 1, 1, 1},  
        {8, 2, -1, 1}  
    };

    for (int i = 0; i < 4; i++) {
        int x = navios[i][0], y = navios[i][1];
        int dx = navios[i][2], dy = navios[i][3];
        if (podePosicionar(tabuleiro, x, y, 3, dx, dy)) {
            posicionarNavio(tabuleiro, x, y, 3, dx, dy);
        }
    }

    // Aplicar habilidades em posições mais afastadas
    aplicarHabilidade(tabuleiro, 2, 3, 'C');  // Cone em um canto
    aplicarHabilidade(tabuleiro, 7, 7, 'X');  // Cruz longe dos outros
    aplicarHabilidade(tabuleiro, 4, 1, 'O');  // Octaedro isolado

    printf("Tabuleiro do jogo Batalha Naval!\n");
    imprimirTabuleiro(tabuleiro);

    return 0;
}
