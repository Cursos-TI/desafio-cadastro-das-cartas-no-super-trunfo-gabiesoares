#include <stdio.h>

int main (){

    char letra1, letra2, codigo1[10], codigo2[10], cidade1[20], cidade2[20];
    int populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2;

//leitura dos dados da primeira carta

    printf("Preencha os dados para a criação da primeira carta do Super Trunfo\n");

    printf("\nInsira a letra equivalente ao estado (de A a H): ");
    scanf(" %c", &letra1);
    
    printf("Digite o código da carta (de 01 a 04): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²) da cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontos1);

//leitura dos dados da segunda carta
    
    printf("\nPreencha os dados para a criação da segunda carta do Super Trunfo\n");

    printf("\nInsira a letra equivalente ao estado (de A a H):  ");
    scanf(" %c", &letra2);

    printf("Digite o código da carta (de 01 a 04): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²) da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontos2);

//impressão dos dados obtidos para ambas as cartas

    printf("\nCaracteristicas das cartas cadastradas: \n");
    
    printf("\n> Carta 1\n");
    printf("- Estado: %c\n", letra1);
    printf("- Código: %c%s\n", letra1, codigo1);
    printf("- Nome da Cidade: %s\n", cidade1);
    printf("- População: %d\n", populacao1);
    printf("- Área: %.1f km²\n", area1);
    printf("- PIB: %.2f bilhões de reais\n", pib1);
    printf("- Número de Pontos Turísticos: %d\n", pontos1);

    printf("\n> Carta 2\n");
    printf("- Estado: %c\n", letra2);
    printf("- Código: %c%s\n", letra2, codigo2);
    printf("- Nome da Cidade: %s\n", cidade2);
    printf("- População: %d\n", populacao2);
    printf("- Área: %.1f km²\n", area2);
    printf("- PIB: %.2f bilhões de reais\n", pib2);
    printf("- Número de Pontos Turísticos: %d\n", pontos2);

    printf("\nCartas cadastradas com sucesso!\n");

    return 0;
}