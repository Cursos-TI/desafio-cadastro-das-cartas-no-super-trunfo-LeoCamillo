#include <stdio.h>

int main() {

    char codigo[3];
    char cidade[20];
    int populacao;
    float area;
    float pib;
    int pontos;

    //Informações da carta!

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

    //Dados à serem exibidos na carta!

    printf("\n# Dados da carta\n");
    printf("Código da Carta: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f dólares\n", pib);
    printf("Pontos Turísticos: %d", pontos);

    return 0;
}