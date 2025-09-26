#include <stdio.h>

int main() {
    // Dados das Cartas
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nome_cidade1[50], nome_cidade2[50];
    int populacao1, populacao2;
    float area_km2_1, area_km2_2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;

    printf("=== Cadastro das Cartas do Super Trunfo ===\n\n");

    // Estados
    printf("Escolha uma letra de A a H para representar os estados da Carta 1 e da Carta 2, respectivamente (ex: A B): ");
    scanf(" %c %c", &estado1, &estado2);

    // Códigos
    printf("Digite o código (letra representado o estado seguido de número) da Carta 1 e da Carta 2, respectivamente (ex: A01 B02): ");
    scanf("%s %s", codigo1, codigo2);

    // Nome das cidades
    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %[^\n]", nome_cidade1);

    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %[^\n]", nome_cidade2);

    // População
    printf("Digite a população total das cidades da Carta 1 e da Carta 2, respectivamente (ex: 12325000 6748000): ");
    scanf("%d %d", &populacao1, &populacao2);

    // Área
    printf("Digite a área total das cidades da Carta 1 e da Carta 2, respectivamente (em km²) (ex: 1521.11 1200.25): ");
    scanf("%f %f", &area_km2_1, &area_km2_2);

    // PIB
    printf("Digite o PIB das cidades da Carta 1 e da Carta 2, respectivamente (em bilhões de reais) (ex: 699.28 300.50): ");
    scanf("%f %f", &pib1, &pib2);

    // Pontos turísticos
    printf("Digite o número de pontos turísticos das cidades da Carta 1 e da Carta 2, respectivamente (ex: 50 30): ");
    scanf("%d %d", &pontos_turisticos1, &pontos_turisticos2);


    // ===== Saída =====
    printf("\n=== Dados da Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area_km2_1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("\n=== Dados da Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area_km2_2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}
