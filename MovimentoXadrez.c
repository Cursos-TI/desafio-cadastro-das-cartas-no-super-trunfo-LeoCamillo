#include <stdio.h>

    void moverTorre (int casas) {
        if (casas > 0)
        {
            printf("Direita \n");
            moverTorre(casas - 1);
        }
        
    }
    void moverBispo (int casas) {
       
        // Loop externo (movimento vertical)
    for (int i = 0; i < 5; i++) { 
        printf("Cima, "); 

        // Loop interno (movimento horizontal)
        for (int j = 0; j < 1; j++) { 
            printf("Direita\n"); 
        }
    }
        
    }
    void moverRainha (int casas) {
        if (casas > 0)
        {
            printf("Esquerda \n");
            moverRainha(casas - 1);
        }
        
    }

int main() {

    int cavalo = 1, Bispo = 1;

        // Movimento da Torre, mover 5 casas a direira

    printf("Torre: \n");
    moverTorre(5);

    printf("\n__________________________________________________\n");

        /* Movimento do Bispo, mover 5 casas pela diagona -
        externo para o movimento vertical, e o mais interno para o movimento horizontal.*/

    printf("Bispo: \n");
    moverBispo(5);

    printf("\n__________________________________________________\n");

        // Movimento da Rainha, mover 8 casas a esquerda

    printf("Rainha: \n");
    moverRainha(8);
    
    printf("\n__________________________________________________\n");

    // Movimento do Cavalo, 2 casas para baixo e uma a esquerda. Usando loops aninhados - while e for.

    while (cavalo <= 1)
    {
        printf("Cavalo: \n");
        for (int c = 0; c <= 3; c++)
        {
            if (c == 0) continue;
            if (c == 3) break;
            printf("%d - Cima\n", c);
        }
        printf("%d - Direita\n", cavalo);
        cavalo++;
    }
    
    printf("\n__________________________________________________\n");

    return 0;
}