#include <stdio.h>
#include <string.h>

// Definindo uma estrutura para representar uma cidade
typedef struct {
    int codigo;         // Código da cidade
    char nome[100];     // Nome da cidade
    int populacao;      // População da cidade
    float area;         // Área da cidade (em km²)
    float pib;          // PIB da cidade (em bilhões)
    int pontos_turisticos; // Número de pontos turísticos da cidade
} Cidade;

int main() {
    // Definindo um vetor com 3 cidades inventadas para o exemplo
    Cidade cidades[3] = {
        {1, "Cidade das Palmeiras", 1200000, 1500.5, 45.8, 25},
        {2, "Cidade do Sol", 800000, 320.7, 25.3, 10},
        {3, "Capital Azul", 3500000, 900.4, 75.9, 50}
    };

    // Exibindo os dados das cartas cadastradas
    printf("Cartas cadastradas:\n");

    for (int i = 0; i < 3; i++) {
        printf("\nCidade %d:\n", i + 1);
        printf("Código: %d\n", cidades[i].codigo);
        printf("Nome: %s\n", cidades[i].nome);
        printf("População: %d habitantes\n", cidades[i].populacao);
        printf("Área: %.2f km²\n", cidades[i].area);
        printf("PIB: R$ %.2f bilhões\n", cidades[i].pib);
        printf("Pontos turísticos: %d\n", cidades[i].pontos_turisticos);
    }

    return 0;
}
