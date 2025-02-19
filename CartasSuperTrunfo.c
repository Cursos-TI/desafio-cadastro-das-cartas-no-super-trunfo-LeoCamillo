#include <stdio.h>

int main() {
    
    char estado, estado2;
    char codigo[4], codigo2[4];
    char cidade[30], cidade2[30];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontos, pontos2;
    float densidade, densidade2;
    float percapita, percapita2;

    //Informações da primeira carta!

    printf("Digite o estado (sigla, ex: A): ");
    scanf(" %c", &estado);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", &cidade);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao); 

    printf("Digite a Área em km²: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite os pontos turísticos: ");
    scanf("%d", &pontos);

    //Calculos da primeira carta
    densidade = (float) populacao/area;
    percapita = (float) pib/populacao;

    //Dados da primeira carta!

    printf("\n# Dados da Primeira carta\n");
    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f reais\n", pib);
    printf("Pontos Turísticos: %d\n", pontos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f reais", percapita);

    printf("\n__________________________________________________\n");

    //Informações da Segunda carta!
    
    printf("\n# Dados da Segunda Carta\n");
    
    printf("Digite o estado (sigla, ex: B):");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: B01): ");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", &cidade2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2); 

    printf("Digite a Área em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite os pontos turísticos: ");
    scanf("%d", &pontos2);

    //Calculos da Segunda carta
    densidade = (float) populacao2/area2;
    percapita = (float) pib2/populacao2;

    //Dados da Segunda Carta

    printf("\n# Dados da Segunda carta\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais", percapita2);

    return 0;
}