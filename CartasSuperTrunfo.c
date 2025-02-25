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

    int resupopulacao = populacao > populacao2;
    int resuarea = area > area2;
    int resupib = pib > pib2;
    int resupontos = pontos > pontos2;
    int resudensidade = densidade < densidade2;
    int resupercapita = percapita > percapita2;
    int resusuperpoder = superpoder > superpoder2;

    // Exibbição dos Resultados

    printf("\n# Resultado Final\n");

    printf("População: Carta %d venceu!\n", resupopulacao);
    printf("Área: Carta %d venceu!\n", resuarea);
    printf("PIB: Carta %d venceu!\n", resupib);
    printf("Pontos Turísticos: Carta %d venceu!\n", resupontos);
    printf("Densidade Populacional: Carta %d venceu!\n", resudensidade);
    printf("PIB per Capita: Carta %d venceu!\n", resupercapita);
    printf("Super Poder: Carta %d venceu!\n", resusuperpoder);
    printf("\n__________________________________________________\n");
    printf("Critério de Comparação:\n");
    printf("- 1 = A primeira carta venceu\n");
    printf("- 0 = A segunda carta venceu\n");
    printf("\n__________________________________________________\n");

    return 0;
}