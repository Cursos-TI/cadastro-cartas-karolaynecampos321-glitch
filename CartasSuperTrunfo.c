#include <stdio.h>

//novato, aventureiro, mestre(parte 2) fundamentos e tecnicas 

int main() {

    // Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;

    float densidade1, percapita1, super1;
    float densidade2, percapita2, super2;

    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // Cadastro Carta 1
    printf("Cadastro da Carta 1\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da carta: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos turísticos: ");
    scanf("%d", &pontos1);

    // Cadastro Carta 2
    printf("\nCadastro da Carta 2\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da carta: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos turísticos: ");
    scanf("%d", &pontos2);

      // Area de processamento(calculo)

      densidade2 = populacao2/ area2;
      percapita2 = pib2 / populacao2;
      
      densidade1 = populacao1 / area1;
      percapita1 = pib1 / populacao1;

      super1 = populacao1 + pib1 + pontos1 + area1 + percapita1 (1.0/densidade1);
      super2 = populacao2 + pib2 + pontos2 + area2 + percapita2 (1.0/densidade2);

    // Exibição Carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Densidade: %.2f\n", densidade1);
    printf("Percapita: %.2f\n", percapita1);

    // Exibição Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade: %.2f\n", densidade2);
    printf("Percapita: %.2f\n", percapita2);

 // Comparação de cartas(nivel mestre)


    printf("\n COMPARAÇÃO DE CARTAS \n");
    printf("População: carta 1 venceu %d\n", populacao1 > populacao2);
    printf("Area: carta 1 venceu %d\n", area1 > area2);
    printf("Pib: carta 1 venceu %d\n", pib1 > pib2);
    printf("Pontos turisticos: carta 1 venceu %d\n", pontos1 > pontos2);
    printf("densidade populacional: carta 2 venceu %d\n", densidade1 < densidade2);
    printf("Percapita: Carta 1 venceu %d\n", percapita1 > percapita2);
    printf("Super poder: Carta 1 venceu %d\n, super1 > super2");
  
return 0;
} 
