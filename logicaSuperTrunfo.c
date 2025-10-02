#include <stdio.h>
#include <string.h>

/*
 * DESAFIO 2 - SUPER TRUNFO: COMPARAÇÃO DE CARTAS
 * 
 * Este programa implementa a lógica do jogo Super Trunfo, permitindo:
 * 1. Cadastrar duas cartas com informações de cidades
 * 2. Calcular densidade populacional e PIB per capita
 * 3. Comparar as cartas com base em um atributo escolhido
 * 4. Determinar a carta vencedora
 * 
 * Regras de comparação:
 * - Para todos os atributos exceto densidade populacional: maior valor vence
 * - Para densidade populacional: menor valor vence (menos densidade = melhor)
 */

int main() {
    // Variáveis para a Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    
    // Variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    
    // Variáveis calculadas
    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;
    
    printf("=== SUPER TRUNFO - JOGO DE CARTAS ===\n\n");
    
    // Cadastro da Carta 1
    printf("--- CADASTRO DA CARTA 1 ---\n");
    
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    
    printf("Digite a área (km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    
    printf("\n");
    
    // Cadastro da Carta 2
    printf("--- CADASTRO DA CARTA 2 ---\n");
    
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    
    printf("Digite a área (km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    
    // Cálculo da densidade populacional e PIB per capita
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;
    
    pib_per_capita1 = pib1 / ((float)populacao1 / 1000000);  // PIB em bilhões / população em milhões
    pib_per_capita2 = pib2 / ((float)populacao2 / 1000000);
    
    // Exibição das cartas cadastradas com dados calculados
    printf("\n=== CARTAS CADASTRADAS ===\n\n");
    
    // Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f mil reais\n", pib_per_capita1);
    
    printf("\n");
    
    // Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f mil reais\n", pib_per_capita2);
    
    // COMPARAÇÃO DAS CARTAS
    printf("\n=== COMPARAÇÃO DE CARTAS ===\n\n");
    
    /*
     * ATRIBUTO ESCOLHIDO PARA COMPARAÇÃO: POPULAÇÃO
     * 
     * Você pode alterar esta seção para comparar outros atributos:
     * - populacao1 vs populacao2 (maior vence)
     * - area1 vs area2 (maior vence)  
     * - pib1 vs pib2 (maior vence)
     * - pontos_turisticos1 vs pontos_turisticos2 (maior vence)
     * - pib_per_capita1 vs pib_per_capita2 (maior vence)
     * - densidade1 vs densidade2 (MENOR vence - menos densidade é melhor)
     */
    
    printf("Comparação de cartas (Atributo: População):\n\n");
    
    printf("Carta 1 - %s (%c): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %d\n", cidade2, estado2, populacao2);
    
    printf("\n");
    
    // Lógica de comparação usando if-else
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }
    
    return 0;
}
