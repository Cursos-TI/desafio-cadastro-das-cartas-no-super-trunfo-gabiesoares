#include <stdio.h>

int main (){

    char letra1, letra2, codigo1[10], codigo2[10], cidade1[20], cidade2[20];
    int pontos1, pontos2, populacao1, populacao2;
    float area1, area2, pib1, pib2, densidade1, densidade2, percapita1, percapita2, poder1, poder2;

    //leitura dos dados da primeira carta

    printf("*** SUPER TRUNFO DA ESTÁCIO ***\n");

    printf("\nPreencha os dados para a criação da primeira carta do Super Trunfo\n");

    printf("\nInsira a letra equivalente ao estado (de A a H): ");
    scanf(" %c", &letra1);
    
    printf("Digite o código da carta (de 01 a 04): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%i", &populacao1);

    printf("Digite a área (em km²) da cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em reais): ");
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
    scanf("%i", &populacao2);

    printf("Digite a área (em km²) da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em reais): ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontos2);

    printf("\nCartas cadastradas com sucesso!\n");

    //definição da função que irá calcular a densidade populacional (hab/km²)

    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;

    //definição da função que irá calcular o PIB per capita

    percapita1 = pib1 / populacao1;
    percapita2 = pib2 / populacao2;

    //cálculo do super poder

    poder1 = (float) populacao1 + area1 + pib1 + pontos1 + percapita1 + (1 / densidade1);
    poder2 = (float) populacao2 + area2 + pib2 + pontos2 + percapita2 + (1 / densidade2);

    //impressão dos dados obtidos para ambas as cartas

    printf("\nCaracteristicas das cartas cadastradas: \n");
    printf("> Carta 1\n");
    printf("- Estado: %c\n", letra1);
    printf("- Código: %c%s\n", letra1, codigo1);
    printf("- Nome da Cidade: %s\n", cidade1);
    printf("- População: %i\n", populacao1);
    printf("- Área: %.2f km²\n", area1);
    printf("- PIB: R$ %.2f\n", pib1);
    printf("- Número de Pontos Turísticos: %d\n", pontos1);
    printf("- Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("- PIB per Capita: R$ %.2f\n", percapita1);
    printf("- Super Poder: %.2f\n", poder1);

    printf("\n> Carta 2\n");
    printf("- Estado: %c\n", letra2);
    printf("- Código: %c%s\n", letra2, codigo2);
    printf("- Nome da Cidade: %s\n", cidade2);
    printf("- População: %i\n", populacao2);
    printf("- Área: %.2f km²\n", area2);
    printf("- PIB: R$ %.2f\n", pib2);
    printf("- Número de Pontos Turísticos: %d\n", pontos2);
    printf("- Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("- PIB per Capita: R$ %.2f\n", percapita2);
    printf("- Super Poder: %.2f\n", poder2);

    //comparação de UM atributo utilizado o IF

    printf("\n\nComparação Entre as Cartas - Atributo: População\n");

    printf("Carta 1 - %s: %i\n", cidade1, populacao1);
    printf("Carta 2 - %s: %i\n", cidade2, populacao2);
    if(populacao1 > populacao2){
        printf("A carta um venceu!");
    }else {
        if(populacao1 < populacao2){
            printf("A carta dois venceu!");
        }else{
            printf("Houve um empate técnico!");
        }
    }

    return 0;
}
