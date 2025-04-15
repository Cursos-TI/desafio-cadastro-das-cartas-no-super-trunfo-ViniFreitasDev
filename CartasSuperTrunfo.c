#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis das cartas
    char pais1[50], pais2[50];
    unsigned long int populacao1, populacao2;
    int pontosTuristicos1, pontosTuristicos2, opcao;
    float area1, area2, pib1, pib2, densidade1, densidade2;

    // Cadastro da primeira carta
    printf("Vamos cadastrar a primeira carta! \n");
    getchar(); // Limpa o buffer de entrada
    printf("Digite o nome do País: \n");
    fgets(pais1, sizeof(pais1), stdin);
    pais1[strcspn(pais1, "\n")] = 0;
    printf("Digite o numero de habitantes: \n");
    scanf("%lu", &populacao1);
    printf("Digite a Área total da cidade: \n");
    scanf("%f", &area1);
    printf("Digite o PIB: \n");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos1);
    densidade1 = populacao1 / area1;

    // Cadastro da segunda carta
    printf("Agora vamos cadastrar a segunda carta! \n");
    getchar(); // Limpa o buffer de entrada
    printf("Digite o nome do País: \n");
    fgets(pais2, sizeof(pais2), stdin);
    pais2[strcspn(pais2, "\n")] = 0;
    printf("Digite o numero de habitantes: \n");
    scanf("%lu", &populacao2);
    printf("Digite a Área total da cidade: \n");
    scanf("%f", &area2);
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos2);
    densidade2 = populacao2 / area2;

    //Menu
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica (MENOR vence)\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    printf("Comparando %s e %s\n", pais1, pais2);

    switch (opcao) {
        case 1:
        printf("População: %s = %lu | %s = %lu\n", pais1, populacao1, pais2, populacao2);
        if (populacao1 > populacao2) {
            printf("Vencedor: %s\n", pais1);
        } else if (populacao2 > populacao1) {
            printf("Vencedor: %s\n", pais2);
        } else {
            printf("Empate!\n");
        }
            break;
        case 2:
            printf("Área: %s = %.2f km² | %s = %.2f km²\n", pais1, area1, pais2, area2);
            if (area1 > area2) {
                printf("Vencedor: %s\n", pais1);
            } else if (area2 > area1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 3:
            printf("PIB: %s = %.2f | %s = %.2f\n", pais1, pib1, pais2, pib2);
            if (pib1 > pib2) {
                printf("Vencedor: %s\n", pais1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 4:
            printf("Pontos turísticos: %s = %d | %s = %d\n", pais1, pontosTuristicos1, pais2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Vencedor: %s\n", pais1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 5:
            printf("Densidade demográfica: %s = %.2f | %s = %.2f\n", pais1, densidade1, pais2, densidade2);
            if (densidade1 < densidade2) {
                printf("Vencedor: %s\n", pais1);
            } else if (densidade2 < densidade1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}
