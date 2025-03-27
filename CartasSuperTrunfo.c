#include <stdio.h>

    int main(){ 

            char estado1[50],cadigo1[50], cidade1[50];
            int populacao1, pontosTuristicos1;
            float area1, pib1;

            char estado2[50], cadigo2[50], cidade2[50];
            int populacao2, pontosTuristicos2;
            float area2, pib2;

            printf("Vamos cadastrar a primeira carta! \n");
            printf("Digite o Estado: \n");
            scanf("%s", &estado1);
            printf("Digite o Código do estado: \n");
            scanf("%s", &cadigo1);
            printf("Digite o nome da cidade: \n");
            scanf("%s", &cidade1);
            printf("Digite o numero de habitates: \n");
            scanf("%d", &populacao1);
            printf("Digite a Área total da cidade: \n");
            scanf("%f", &area1);
            printf("Digite o PIB: \n");
            scanf("%f", &pib1);
            printf("Digite o numero de pontos turisticos: \n");
            scanf("%d", &pontosTuristicos1);

            printf("Agora vamos cadastrar a segunda carta! \n");
            printf("Digite o Estado: \n");
            scanf("%s", &estado2);
            printf("Digite o Código do estado: \n");
            scanf("%s", &cadigo2);
            printf("Digite o nome da cidade: \n");
            scanf("%s", &cidade2);
            printf("Digite o numero de habitates: \n");
            scanf("%d", &populacao2);
            printf("Digite a Área total da cidade: \n");
            scanf("%f", &area2);
            printf("Digite o PIB: \n");
            scanf("%f", &pib2);
            printf("Digite o numero de pontos turisticos: \n");
            scanf("%d", &pontosTuristicos2);

            printf("Carta 1: \n");
            printf("Estado: %c \n", estado1);
            printf("Código: %s \n", cadigo1);
            printf("Nome da Cidade: %s \n", cidade1);
            printf("População: %d \n", populacao1);
            printf("Área: %.2f \n", area1);
            printf("PIB: %.2f \n", pib1);
            printf("Número de Pontos Turísticos: %d \n", pontosTuristicos1);

            printf("Carta 2: \n");
            printf("Estado: %c \n", estado2);
            printf("Código: %s \n", cadigo2);
            printf("Nome da Cidade: %s \n", cidade2);
            printf("População: %d \n", populacao2);
            printf("Área: %.2f \n", area2);
            printf("PIB: %.2f \n", pib2);
            printf("Número de Pontos Turísticos: %d \n", pontosTuristicos2);

    return 0;

    }