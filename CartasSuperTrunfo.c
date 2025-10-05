#include <stdio.h>

int main (){

    char pais1[20], pais2[20];
    int pontos1, pontos2, opcao1, opcao2;
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, densidade1, densidade2, soma1 = 0, soma2 = 0;

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
   
    //menu de seleção do primeiro atributo para comparação entre cartas

    printf("\n***DUELO DE CARTAS***\n");
    
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade populacional");

    printf("\n\nSelecione o primeiro atributo a ser comparado:\n");
    scanf("%i", &opcao1);

    switch (opcao1){
        case 1: //população
            printf("\nAtributo escolhido: População\n");
            printf("%s: %lu habitantes\n", pais1, populacao1);
            printf("%s: %lu habitantes\n", pais2, populacao2);
        break;

        case 2: //área
            printf("\nAtributo escolhido: Área\n");
            printf("%s: %.2f km²\n", pais1, area1);
            printf("%s: %.2f km²\n", pais2, area2);          
        break;

        case 3: //PIB
            printf("\nAtributo escolhido: PIB\n");
            printf("%s: R$ %.2f\n", pais1, pib1);
            printf("%s: R$ %.2f\n", pais2, pib2);          
        break;

        case 4: //pontos turísticos
            printf("\nAtributo escolhido: Pontos turísticos\n");
            printf("%s: %d pontos\n", pais1, pontos1);
            printf("%s: %d pontos\n", pais2, pontos2);         
        break;

        case 5: //densidade populacional
            printf("\nAtributo escolhido: Densidade populacional\n");
            printf("%s: %.2f hab/km²\n", pais1, densidade1);
            printf("%s: %.2f hab/km²\n", pais2, densidade2);         
        break;

        default:
            printf("\nOpção inválida! Tente novamente.\n");
    }
    //menu de seleção do segundo atributo para comparação entre cartas

    printf("\n\nSelecione o segundo atributo a ser comparado:\n");
    
    //transforma o menu em dinâmico (não mostra o mesmo atributo)
    for (int i = 1; i <= 5; i++) {
      if (i == opcao1) continue; 
      switch(i){
        case 1: printf("1. População\n"); break;
        case 2: printf("2. Área\n"); break;
        case 3: printf("3. PIB\n"); break;
        case 4: printf("4. Pontos turísticos\n"); break;
        case 5: printf("5. Densidade populacional\n"); break;
      }
    }
    
    //não permite seleção do mesmo atributo
    scanf("%i", &opcao2);

    while (opcao2 == opcao1) {
        printf("\nVocê escolheu o mesmo atributo! Escolha outro:\n");
        scanf("%d", &opcao2);
        }

    switch (opcao2){
        case 1: //população
            printf("\nAtributo escolhido: População\n");
            printf("%s: %lu habitantes\n", pais1, populacao1);
            printf("%s: %lu habitantes\n", pais2, populacao2);         
        break;

        case 2: //área
            printf("\nAtributo escolhido: Área\n");
            printf("%s: %.2f km²\n", pais1, area1);
            printf("%s: %.2f km²\n", pais2, area2);          
        break;

        case 3: //PIB
            printf("\nAtributo escolhido: PIB\n");
            printf("%s: R$ %.2f\n", pais1, pib1);
            printf("%s: R$ %.2f\n", pais2, pib2);           
        break;

        case 4: //pontos turísticos
            printf("\nAtributo escolhido: Pontos turísticos\n");
            printf("%s: %d pontos\n", pais1, pontos1);
            printf("%s: %d pontos\n", pais2, pontos2);        
        break;

        case 5: //densidade populacional
            printf("\nAtributo escolhido: Densidade populacional\n");
            printf("%s: %.2f hab/km²\n", pais1, densidade1);
            printf("%s: %.2f hab/km²\n", pais2, densidade2);           
        break;

        default:
            printf("\nOpção inválida! Tente novamente.\n");
    }
    
    //somatória do primeiro atributo
    switch(opcao1){
        case 1: soma1 += populacao1; soma2 += populacao2; break;
        case 2: soma1 += area1; soma2 += area2; break;
        case 3: soma1 += pib1; soma2 += pib2; break;
        case 4: soma1 += pontos1; soma2 += pontos2; break;
        case 5: soma1 += 1/densidade1; soma2 += 1/densidade2; break; //menor densidade é melhor
    }

    //somatória do segundo atributo
    switch(opcao2){
        case 1: soma1 += populacao1; soma2 += populacao2; break;
        case 2: soma1 += area1; soma2 += area2; break;
        case 3: soma1 += pib1; soma2 += pib2; break;
        case 4: soma1 += pontos1; soma2 += pontos2; break;
        case 5: soma1 += 1/densidade1; soma2 += 1/densidade2; break;
    }

    //exibição dos resultados
    printf("\n***RESULTADO FINAL***\n");
    printf("País 1: %s\n", pais1);
    printf("País 2: %s\n\n", pais2);

    printf("Atributos usados: %d e %d\n", opcao1, opcao2);
    printf("Soma dos atributos:\n");
    printf("%s: %.2f\n", pais1, soma1);
    printf("%s: %.2f\n", pais2, soma2);

    if (soma1 > soma2) {
        printf("\nVencedor: %s!\n", pais1);
    } else if (soma2 > soma1) {
        printf("\nVencedor: %s!\n", pais2);
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}
