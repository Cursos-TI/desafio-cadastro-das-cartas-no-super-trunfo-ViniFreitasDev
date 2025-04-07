#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis das cartas
    char estado1[50], cadigo1[50], cidade1[50];
    unsigned long int populacao1;
    int pontosTuristicos1;
    float area1, pib1, dencidade1, perCapita1, superPoder1;

    char estado2[50], cadigo2[50], cidade2[50];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2, pib2, dencidade2, perCapita2, superPoder2;

    // Cadastro da primeira carta
    printf("Vamos cadastrar a primeira carta! \n");
    printf("Digite o Estado: \n");
    scanf("%s", estado1);
    printf("Digite o Código do estado: \n");
    scanf("%s", cadigo1);
    getchar(); // Limpa o buffer
    printf("Digite o nome da cidade: \n");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;
    printf("Digite o numero de habitantes: \n");
    scanf("%lu", &populacao1);
    printf("Digite a Área total da cidade: \n");
    scanf("%f", &area1);
    printf("Digite o PIB: \n");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos1);
    dencidade1 = populacao1 / area1;
    perCapita1 = pib1 / populacao1;

    // Super Poder da cidade 1
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + perCapita1 + (1.0 / dencidade1);

    // Cadastro da segunda carta
    printf("Agora vamos cadastrar a segunda carta! \n");
    printf("Digite o Estado: \n");
    scanf("%s", estado2);
    printf("Digite o Código do estado: \n");
    scanf("%s", cadigo2);
    getchar(); // Limpa o buffer
    printf("Digite o nome da cidade: \n");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;
    printf("Digite o numero de habitantes: \n");
    scanf("%lu", &populacao2);
    printf("Digite a Área total da cidade: \n");
    scanf("%f", &area2);
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos2);
    dencidade2 = populacao2 / area2;
    perCapita2 = pib2 / populacao2;

    // Super Poder da cidade 2
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + perCapita2 + (1.0 / dencidade2);

    // Comparações dos atributos

    // Comparando População
    printf("População: ");
    printf("%d\n", populacao1 > populacao2 ? 1 : 0);

    // Comparando Área
    printf("Área: ");
    printf("%d\n", area1 > area2 ? 1 : 0);

    // Comparando PIB
    printf("PIB: ");
    printf("%d\n", pib1 > pib2 ? 1 : 0);

    // Comparando Pontos Turísticos
    printf("Pontos Turísticos: ");
    printf("%d\n", pontosTuristicos1 > pontosTuristicos2 ? 1 : 0);

    // Comparando Densidade Populacional (menor é melhor)
    printf("Densidade Populacional: ");
    printf("%d\n", dencidade1 < dencidade2 ? 1 : 0);

    // Comparando PIB per Capita
    printf("PIB per Capita: ");
    printf("%d\n", perCapita1 > perCapita2 ? 1 : 0);

    // Comparando Super Poder
    printf("Super Poder: ");
    printf("%d\n", superPoder1 > superPoder2 ? 1 : 0);

    return 0;
}
