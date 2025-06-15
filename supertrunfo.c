#include <stdio.h>

int main() {
    char estadoA[50], estadoB[50];
    char codigoA[5], codigoB[5];
    char cidadeA[100], cidadeB[100];
    int populacaoA, populacaoB;
    float areaA, areaB, pibA, pibB;
    int pontosTuristicosA, pontosTuristicosB;
    float densidadeA, densidadeB, pibPerCapitaA, pibPerCapitaB;

    printf("Digite as informações da carta A:\n");

    printf("Estado: ");
    scanf(" %s", estadoA); 
    printf("Código da carta (A01 – A10): ");
    scanf(" %s", codigoA);
    printf("Nome da cidade: ");
    scanf(" %s", cidadeA);
    printf("População: ");
    scanf("%d", &populacaoA);
    printf("Área (em km²): ");
    scanf("%f", &areaA);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pibA);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicosA);

    printf("\nDigite as informações da carta B:\n");

    printf("Estado: ");
    scanf(" %s", estadoB); 
    printf("Código da carta (A01 – A10): ");
    scanf(" %s", codigoB);
    printf("Nome da cidade: ");
    scanf(" %s", cidadeB);
    printf("População: ");
    scanf("%d", &populacaoB);
    printf("Área (em km²): ");
    scanf("%f", &areaB);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pibB);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicosB);

    densidadeA = populacaoA / areaA;
    pibPerCapitaA = pibA * 1000000000 / populacaoA;  // PIB convertido para reais

    densidadeB = populacaoB / areaB;
    pibPerCapitaB = pibB * 1000000000 / populacaoB;  // PIB convertido para reais

    printf("jogo Super Trunfo de Países \n");

    printf("\nCarta A:\n");
    printf("Estado: %s\n", estadoA);
    printf("Código: %s\n", codigoA);
    printf("Nome da Cidade: %s\n", cidadeA);
    printf("População: %d\n", populacaoA);
    printf("Área: %.2f km²\n", areaA);
    printf("PIB: %.2f bilhões de reais\n", pibA);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicosA);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadeA);
    printf("PIB per Capita: %.2f reais\n", pibPerCapitaA);

    printf("\nCarta B:\n");
    printf("Estado: %s\n", estadoB);
    printf("Código: %s\n", codigoB);
    printf("Nome da Cidade: %s\n", cidadeB);
    printf("População: %d\n", populacaoB);
    printf("Área: %.2f km²\n", areaB);
    printf("PIB: %.2f bilhões de reais\n", pibB);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicosB);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadeB);
    printf("PIB per Capita: %.2f reais\n", pibPerCapitaB);

    return 0;
}