#include <stdio.h>

int main() {
    
    char estado, estado2;
    char codigo[4], codigo2[4];
    char cidade[30], cidade2[30];
    unsigned long int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontos, pontos2;
    float densidade, densidadein, densidade2, densidadein2;
    float percapita, percapita2;
    float superpoder, superpoder2;

    //Informações da primeira carta!

    printf("Digite o estado (sigla, ex: A): ");
    scanf(" %c", &estado);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade);

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao); 

    printf("Digite a Área em km²: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite os pontos turísticos: ");
    scanf("%d", &pontos);

    //Calculos da primeira carta
    densidade = (float) populacao / area;
    percapita = (float) pib / populacao;
    densidadein = 1 / densidade; 
    superpoder = (float) populacao + area + pib + percapita + densidadein + pontos;

    //Dados da primeira carta!
    printf("\n__________________________________________________\n");
    printf("\n# Dados da Primeira carta\n");
    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f reais\n", pib);
    printf("Pontos Turísticos: %d\n", pontos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n", percapita);
    printf("Super Poder: %.2f", superpoder);

    printf("\n__________________________________________________\n");

    //Informações da Segunda carta!
    
    printf("\n# Dados da Segunda Carta\n");
    
    printf("Digite o estado (sigla, ex: B): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: B01): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao2); 

    printf("Digite a Área em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite os pontos turísticos: ");
    scanf("%d", &pontos2);

    //Calculos da Segunda carta
    densidade2 = (float) populacao2 / area2;
    percapita2 = (float) pib2 / populacao2;
    densidadein2 = 1 / densidade2; 
    superpoder2 = (float) populacao2 + area2 + pib2 + percapita2 + densidadein2 + pontos2;

    //Dados da Segunda Carta

    printf("\n__________________________________________________\n");
    printf("\n# Dados da Segunda carta\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", percapita2);
    printf("Super Poder: %.2f", superpoder2);
    printf("\n__________________________________________________\n");

    //Comparação das Cartas
    printf("\n# Resultado da Comparação das Cartas #\n");
    printf("\nPopulação: \n");
    if (populacao > populacao2)
    {
        printf("Carta 1 - %s: %lu.\n", cidade, populacao);
        printf("Carta 2 - %s: %lu.\n", cidade2, populacao2);
        printf("Resultado: Carta 1 - %s Ganhou!\n", cidade);
    
    } else {
        printf("Carta 1 - %s: %lu.\n", cidade, populacao);
        printf("Carta 2 - %s: %lu.\n", cidade2, populacao2);
        printf("Resultado: Carta 2 - %s Ganhou!\n", cidade2);
    }

    printf("\nÁrea: \n");

    if (area > area2)
    {
        printf("Carta 1 - %s: %2.f.\n", cidade, area);
        printf("Carta 2 - %s: %2.f.\n", cidade2, area2);
        printf("Resultado: Carta 1 - %s Ganhou!\n", cidade);
    
    } else {
        printf("Carta 1 - %s: %2.f.\n", cidade, area);
        printf("Carta 2 - %s: %2.f.\n", cidade2, area2);
        printf("Resultado: Carta 2 - %s Ganhou!\n", cidade2);
    }

    printf("\nPIB: \n");

    if (pib > pib2)
    {
        printf("Carta 1 - %s: %2.f.\n", cidade, pib);
        printf("Carta 2 - %s: %2.f.\n", cidade2, pib2);
        printf("Resultado: Carta 1 - %s Ganhou!\n", cidade);
    
    } else {
        printf("Carta 1 - %s: %2.f.\n", cidade, pib);
        printf("Carta 2 - %s: %2.f.\n", cidade2, pib2);
        printf("Resultado: Carta 2 - %s Ganhou!\n", cidade2);
    }

    printf("\nPontos Turísticos: \n");

    if (pontos > pontos2)
    {
        printf("Carta 1 - %s: %d.\n", cidade, pontos);
        printf("Carta 2 - %s: %d.\n", cidade2, pontos2);
        printf("Resultado: Carta 1 - %s Ganhou!\n", cidade);
    
    } else {
        printf("Carta 1 - %s: %d.\n", cidade, pontos);
        printf("Carta 2 - %s: %d.\n", cidade2, pontos2);
        printf("Resultado: Carta 2 - %s Ganhou!\n", cidade2);
    }

    printf("\nDensidade Populacional: \n");

    if (densidade < densidade2)
    {
        printf("Carta 1 - %s: %2.f.\n", cidade, densidade);
        printf("Carta 2 - %s: %2.f.\n", cidade2, densidade2);
        printf("Resultado: Carta 1 - %s Ganhou!\n", cidade);
    
    } else {
        printf("Carta 1 - %s: %2.f.\n", cidade, densidade);
        printf("Carta 2 - %s: %2.f.\n", cidade2, densidade2);
        printf("Resultado: Carta 2 - %s Ganhou!\n", cidade2);
    }
    
    printf("\nPIB per Capita: \n");

    if (percapita > percapita2)
    {
        printf("Carta 1 - %s: %2.f.\n", cidade, percapita);
        printf("Carta 2 - %s: %2.f.\n", cidade2, percapita2);
        printf("Resultado: Carta 1 - %s Ganhou!\n", cidade);
    
    } else {
        printf("Carta 1 - %s: %2.f.\n", cidade, percapita);
        printf("Carta 2 - %s: %2.f.\n", cidade2, percapita2);
        printf("Resultado: Carta 2 - %s Ganhou!\n", cidade2);
    }

    printf("\nSuper Poder: \n");

    if (superpoder > superpoder2)
    {
        printf("Carta 1 - %s: %2.f.\n", cidade, superpoder);
        printf("Carta 2 - %s: %2.f.\n", cidade2, superpoder2);
        printf("Resultado: Carta 1 - %s Ganhou!\n", cidade);
    
    } else {
        printf("Carta 1 - %s: %2.f.\n", cidade, superpoder2);
        printf("Carta 2 - %s: %2.f.\n", cidade2, superpoder2);
        printf("Resultado: Carta 2 - %s Ganhou!\n", cidade2);
    }
    printf("\n__________________________________________________\n");

    return 0;
}