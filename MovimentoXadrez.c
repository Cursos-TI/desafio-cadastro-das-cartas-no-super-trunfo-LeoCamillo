#include <stdio.h>

int main() {

    int torre, bispo = 1, rainha = 1, cavalo = 1;

            // Dados do loop da Torre usando for, mover 5 casas a direira

    printf("Torre: \n");
    for (torre = 1; torre <= 5; torre++)
    {
        printf("%d - Direita\n", torre);
    }

    printf("\n__________________________________________________\n");

            // Dados do loop usando while do Bispo, mover 5 casas pela diagona

    printf("Bispo: \n");
    while (bispo <= 5)
    {
        printf("%d - Cima, direita\n", bispo);
        bispo++;

    }

    printf("\n__________________________________________________\n");

            // Dados do loop da Rainha usando do-while, mover 8 casas a esquerda
    printf("Rainha: \n");
    do
    {
        printf("%d - Esquerda\n", rainha);
        rainha++;

    } while (rainha <= 8);

    printf("\n__________________________________________________\n");

    // Movimento do Cavalo, 2 casas para baixo e uma a esquerda. Usando loops aninhados - while e for.

    while (cavalo <= 1)
    {
        printf("Cavalo: \n");
        for (int c = 1; c <= 2; c++)
        {
            printf("%d - Baixo\n", c);
        }
        printf("%d - Esquerda\n", cavalo);
        cavalo++;
    }
    
    printf("\n__________________________________________________\n");

    return 0;
}
