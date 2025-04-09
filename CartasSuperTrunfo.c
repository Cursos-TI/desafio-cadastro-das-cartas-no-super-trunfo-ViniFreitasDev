#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis das cartas
    char estado1[50], cadigo1[50], cidade1[50];
    unsigned long int populacao1;
    int pontosTuristicos1;
    float area1, pib1, dencidade1, perCapita1;

    char estado2[50], cadigo2[50], cidade2[50];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2, pib2, dencidade2, perCapita2;

    // Cadastro da primeira carta
    printf("Vamos cadastrar a primeira carta! \n");
    printf("Digite o Estado: \n");
    scanf("%s", estado1);
    printf("Digite o Código do estado: \n");
    scanf("%s", cadigo1);
    getchar(); // Limpa o buffer de entrada
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


    // Cadastro da segunda carta
    printf("Agora vamos cadastrar a segunda carta! \n");
    printf("Digite o Estado: \n");
    scanf("%s", estado2);
    printf("Digite o Código do estado: \n");
    scanf("%s", cadigo2);
    getchar(); // Limpa o buffer de entrada
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

    if (populacao1 > populacao2) {
        printf("A carta 1 venceu! \n");
    } else {
        printf("A carta 2 venceu!\n");
    }

    return 0;
}
