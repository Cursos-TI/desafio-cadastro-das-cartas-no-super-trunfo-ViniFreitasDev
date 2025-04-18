#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis das cartas
    char pais1[50], pais2[50];
    unsigned long int populacao1, populacao2;
    int pontosTuristicos1, pontosTuristicos2, opcao1, opcao2;
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
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade (MENOR vence)\n");;
    scanf("%d", &opcao1);

    printf("Comparando %s e %s\n", pais1, pais2);

    switch (opcao1) {
        case 1:
            printf("População: %s = %lu | %s = %lu\n", pais1, populacao1, pais2, populacao2);
            printf("%s\n", (populacao1 > populacao2) ? pais1 :
                           (populacao2 > populacao1) ? pais2 : "Empate!");
            break;
    
        case 2:
            printf("Área: %s = %.2f km² | %s = %.2f km²\n", pais1, area1, pais2, area2);
            printf("%s\n", (area1 > area2) ? pais1 :
                           (area2 > area1) ? pais2 : "Empate!");
            break;
    
        case 3:
            printf("PIB: %s = %.2f | %s = %.2f\n", pais1, pib1, pais2, pib2);
            printf("%s\n", (pib1 > pib2) ? pais1 :
                           (pib2 > pib1) ? pais2 : "Empate!");
            break;
    
        case 4:
            printf("Pontos turísticos: %s = %d | %s = %d\n", pais1, pontosTuristicos1, pais2, pontosTuristicos2);
            printf("%s\n", (pontosTuristicos1 > pontosTuristicos2) ? pais1 :
                           (pontosTuristicos2 > pontosTuristicos1) ? pais2 : "Empate!");
            break;
    
        case 5:
            printf("Densidade demográfica: %s = %.2f | %s = %.2f\n", pais1, densidade1, pais2, densidade2);
            printf("%s\n", (densidade1 < densidade2) ? pais1 :
                           (densidade2 < densidade1) ? pais2 : "Empate!");
            break;
    
        default:
            printf("Opção inválida.\n");
    }

        printf("Escolha outro atributo para comparar:\n");
        printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade (MENOR vence)\n");
        printf("Digite sua opção: ");
        scanf("%d", &opcao2);

        printf("Comparando %s e %s\n", pais1, pais2);
            if (opcao1 == opcao2) {
        printf("Opção ja escolhida!");
                return 1;
        } else {
            switch (opcao2) {
                case 1:
                    printf("População: %s = %lu | %s = %lu\n", pais1, populacao1, pais2, populacao2);
                    printf("%s\n", (populacao1 > populacao2) ? pais1 :
                                   (populacao2 > populacao1) ? pais2 : "Empate!");
                    break;
            
                case 2:
                    printf("Área: %s = %.2f km² | %s = %.2f km²\n", pais1, area1, pais2, area2);
                    printf("%s\n", (area1 > area2) ? pais1 :
                                   (area2 > area1) ? pais2 : "Empate!");
                    break;
            
                case 3:
                    printf("PIB: %s = %.2f | %s = %.2f\n", pais1, pib1, pais2, pib2);
                    printf("%s\n", (pib1 > pib2) ? pais1 :
                                   (pib2 > pib1) ? pais2 : "Empate!");
                    break;
            
                case 4:
                    printf("Pontos turísticos: %s = %d | %s = %d\n", pais1, pontosTuristicos1, pais2, pontosTuristicos2);
                    printf("%s\n", (pontosTuristicos1 > pontosTuristicos2) ? pais1 :
                                   (pontosTuristicos2 > pontosTuristicos1) ? pais2 : "Empate!");
                    break;
            
                case 5:
                    printf("Densidade demográfica: %s = %.2f | %s = %.2f\n", pais1, densidade1, pais2, densidade2);
                    printf("%s\n", (densidade1 < densidade2) ? pais1 :
                                   (densidade2 < densidade1) ? pais2 : "Empate!");
                    break;
            
                default:
                    printf("Opção inválida.\n");
            };

            float valor1_carta1 = 0, valor2_carta1 = 0; // valor da primeira comparação
            float valor1_carta2 = 0, valor2_carta2 = 0; // valor da segunda comparação
        
            valor1_carta1 = (opcao1 == 1) ? (float)populacao1 :
                       (opcao1 == 2) ? area1 :
                       (opcao1 == 3) ? pib1 :
                       (opcao1 == 4) ? (float)pontosTuristicos1 :
                       (opcao1 == 5) ? densidade1 : 0;
        
            valor2_carta1 = (opcao1 == 1) ? (float)populacao2 :
                       (opcao1 == 2) ? area2 :
                       (opcao1 == 3) ? pib2 :
                       (opcao1 == 4) ? (float)pontosTuristicos2 :
                       (opcao1 == 5) ? densidade2 : 0;
        
            valor1_carta2 = (opcao2 == 1) ? (float)populacao1 :
                       (opcao2 == 2) ? area1 :
                       (opcao2 == 3) ? pib1 :
                       (opcao2 == 4) ? (float)pontosTuristicos1 :
                       (opcao2 == 5) ? densidade1 : 0;
        
            valor2_carta2 = (opcao2 == 1) ? (float)populacao2 :
                       (opcao2 == 2) ? area2 :
                       (opcao2 == 3) ? pib2 :
                       (opcao2 == 4) ? (float)pontosTuristicos2 :
                       (opcao2 == 5) ? densidade2 : 0;
        
            printf("\nValores comparados:\n");
            printf("%s: %.2f + %.2f = %.2f\n", pais1, valor1_carta1, valor1_carta2, valor1_carta1 + valor1_carta2);
            printf("%s: %.2f + %.2f = %.2f\n", pais2, valor2_carta1, valor2_carta2, valor2_carta1 + valor2_carta2);
        
            // Soma total
            float soma1 = valor1_carta1 + valor1_carta2;
            float soma2 = valor2_carta1 + valor2_carta2;
        
            // Verificação quem venceu
            printf("\nResultado final da rodada:\n");
            if ((opcao1 == 5 && opcao2 == 5)) {
                // Se os dois forem densidade (onde MENOR vence), menor soma vence
                (soma1 < soma2) ? printf("Vence %s\n", pais1) :
                (soma2 < soma1) ? printf("Vence %s\n", pais2) :
                                  printf("Empate!\n");
            } else {
                // Para atributos normais, maior soma vence
                (soma1 > soma2) ? printf("Vence %s\n", pais1) :
                (soma2 > soma1) ? printf("Vence %s\n", pais2) :
                                  printf("Empate!\n");
            };

    return 0;
}
