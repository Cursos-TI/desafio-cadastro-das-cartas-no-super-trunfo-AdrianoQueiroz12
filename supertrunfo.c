#include <stdio.h>

int main() {
    char estadoA[50], estadoB[50];
    char codigoA[5], codigoB[5];
    char cidadeA[100], cidadeB[100];
    unsigned long int populacaoA, populacaoB;
    float areaA, areaB, pibA, pibB;
    int pontosTuristicosA, pontosTuristicosB;
    float densidadeA, densidadeB, pibPerCapitaA, pibPerCapitaB;
    float superPoderA, superPoderB;

    printf("Digite as informações da carta A:\n");

    printf("Estado: ");
    scanf(" %s", estadoA);
    printf("Código da carta (A01 – A10): ");
    scanf(" %s", codigoA);
    printf("Nome da cidade: ");
    scanf(" %s", cidadeA);
    printf("População: ");
    scanf("%lu", &populacaoA);
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
    scanf("%lu", &populacaoB);
    printf("Área (em km²): ");
    scanf("%f", &areaB);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pibB);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicosB);

    densidadeA = populacaoA / areaA;
    pibPerCapitaA = (pibA * 1000000000) / populacaoA;

    densidadeB = populacaoB / areaB;
    pibPerCapitaB = (pibB * 1000000000) / populacaoB;

    superPoderA = populacaoA + areaA + pibA + pontosTuristicosA + pibPerCapitaA + (1 / densidadeA);
    superPoderB = populacaoB + areaB + pibB + pontosTuristicosB + pibPerCapitaB + (1 / densidadeB);

    printf("Comparação de Cartas:\n");
    printf("População: %s venceu (%d)\n", (populacaoA > populacaoB) ? "Carta A" : "Carta B", (populacaoA > populacaoB) ? 1 : 0);
    printf("Área: %s venceu (%d)\n", (areaA > areaB) ? "Carta A" : "Carta B", (areaA > areaB) ? 1 : 0);
    printf("PIB: %s venceu (%d)\n", (pibA > pibB) ? "Carta A" : "Carta B", (pibA > pibB) ? 1 : 0);
    printf("Pontos Turísticos: %s venceu (%d)\n", (pontosTuristicosA > pontosTuristicosB) ? "Carta A" : "Carta B", (pontosTuristicosA > pontosTuristicosB) ? 1 : 0);
    printf("Densidade Populacional: %s venceu (%d)\n", (densidadeA < densidadeB) ? "Carta A" : "Carta B", (densidadeA < densidadeB) ? 1 : 0);
    printf("PIB per Capita: %s venceu (%d)\n", (pibPerCapitaA > pibPerCapitaB) ? "Carta A" : "Carta B", (pibPerCapitaA > pibPerCapitaB) ? 1 : 0);
    printf("Super Poder: %s venceu (%d)\n", (superPoderA > superPoderB) ? "Carta A" : "Carta B", (superPoderA > superPoderB) ? 1 : 0);

    return 0;
}