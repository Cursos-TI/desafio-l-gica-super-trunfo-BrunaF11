#include <stdio.h>

int main() {
    // ================================
    // Estrutura de dados para 2 cartas
    // ================================
    char estado1[3], estado2[3];
    char codigo1[4], codigo2[4];
    char cidade1[30], cidade2[30];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // ================================
    // Cadastro da primeira carta
    // ================================
    printf("=== Cadastro da Primeira Carta ===\n");
    printf("Digite o estado (ex: SP): ");
    scanf("%2s", estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%3s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // ================================
    // Cadastro da segunda carta
    // ================================
    printf("\n=== Cadastro da Segunda Carta ===\n");
    printf("Digite o estado (ex: RJ): ");
    scanf("%2s", estado2);

    printf("Digite o código da carta (ex: B02): ");
    scanf("%3s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // ================================
    // Exibição das cartas cadastradas
    // ================================
    printf("\n=== Dados da Primeira Carta ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n=== Dados da Segunda Carta ===\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    // ================================
    // Comparação (exemplo: população)
    // ================================
    printf("\n=== Resultado da Comparação ===\n");

    if (populacao1 > populacao2) {
        printf("Vencedora: %s (%s) - Maior População\n", cidade1, codigo1);
    } else if (populacao2 > populacao1) {
        printf("Vencedora: %s (%s) - Maior População\n", cidade2, codigo2);
    } else {
        printf("Empate em População!\n");
    }

    return 0;
}