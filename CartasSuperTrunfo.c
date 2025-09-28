#include <stdio.h>

int main (){

    char pais1[20], pais2[20];
    int pontos1, pontos2, opcao;
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, densidade1, densidade2;

    //leitura dos dados da primeira carta

    printf("*** SUPER TRUNFO DA ESTÁCIO ***\n");

    printf("\nPreencha os dados para a criação da primeira carta do Super Trunfo\n");

    printf("Digite o nome do país: ");
    scanf("%s", pais1);

    printf("Digite o número de habitantes do país: ");
    scanf("%lu", &populacao1);

    printf("Digite a área (em km²) do país: ");
    scanf("%f", &area1);

    printf("Digite o PIB do país (em reais): ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos do país: ");
    scanf("%d", &pontos1);

    //leitura dos dados da segunda carta
    
    printf("\nPreencha os dados para a criação da segunda carta do Super Trunfo\n");

    printf("Digite o nome do país: ");
    scanf("%s", pais2);

    printf("Digite o número de habitantes do país: ");
    scanf("%lu", &populacao2);

    printf("Digite a área (em km²) do país: ");
    scanf("%f", &area2);

    printf("Digite o PIB do país (em reais): ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos do país: ");
    scanf("%d", &pontos2);

    printf("\nCartas cadastradas com sucesso!\n");

    //definição da função que irá calcular a densidade populacional (hab/km²)

    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;

    //impressão dos dados obtidos para ambas as cartas

    printf("\nCaracteristicas das cartas cadastradas: \n");
    printf("> Carta 1\n");
    printf("- Nome do País: %s\n", pais1);
    printf("- População: %lu\n", populacao1);
    printf("- Área: %.2f km²\n", area1);
    printf("- PIB: R$ %.2f\n", pib1);
    printf("- Número de Pontos Turísticos: %d\n", pontos1);
    printf("- Densidade Populacional: %.2f hab/km²\n", densidade1);

    printf("\n> Carta 2\n");
    printf("- Nome do País: %s\n", pais2);
    printf("- População: %lu\n", populacao2);
    printf("- Área: %.2f km²\n", area2);
    printf("- PIB: R$ %.2f\n", pib2);
    printf("- Número de Pontos Turísticos: %d\n", pontos2);
    printf("- Densidade Populacional: %.2f hab/km²\n", densidade2);
   
    //menu de seleção do atributo para comparação entre cartas

    printf("\n***DUELO DE CARTAS***\n");
    
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade populacional");

    printf("\n\nSelecione o atributo a ser comparado:\n");
    scanf("%i", &opcao);

    switch (opcao){
        case 1: //população
            printf("\nAtributo escolhido: População\n");
            printf("%s: %lu habitantes\n", pais1, populacao1);
            printf("%s: %lu habitantes\n", pais2, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", pais1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
        break;

        case 2: //área
            printf("\nAtributo escolhido: Área\n");
            printf("%s: %.2f km²\n", pais1, area1);
            printf("%s: %.2f km²\n", pais2, area2);
            if (area1 > area2) {
                printf("Vencedor: %s\n", pais1);
            } else if (area2 > area1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
        break;

        case 3: //PIB
            printf("\nAtributo escolhido: PIB\n");
            printf("%s: R$ %.2f\n", pais1, pib1);
            printf("%s: R$ %.2f\n", pais2, pib2);
            if (pib1 > pib2) {
                printf("Vencedor: %s\n", pais1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
        break;

        case 4: //pontos turísticos
            printf("\nAtributo escolhido: Pontos turísticos\n");
            printf("%s: %d pontos\n", pais1, pontos1);
            printf("%s: %d pontos\n", pais2, pontos2);
            if (pontos1 > pontos2) {
                printf("Vencedor: %s\n", pais1);
            } else if (pontos2 > pontos1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
        break;

        case 5: //densidade populacional
            printf("\nAtributo escolhido: Densidade populacional\n");
            printf("%s: %.2f hab/km²\n", pais1, densidade1);
            printf("%s: %.2f hab/km²\n", pais2, densidade2);
            if (densidade1 < densidade2) {
                printf("Vencedor: %s\n", pais1);
            } else if (densidade2 < densidade1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
        break;

        default:
            printf("\nOpção inválida! Tente novamente.\n");
    }
    
    return 0;
}
