#include <stdio.h>
#include <string.h>

// Definindo uma estrutura para representar uma cidade
typedef struct {
    int codigo;               // Código da cidade
    char nome[100];           // Nome da cidade
    int populacao;            // População da cidade
    float area;               // Área da cidade (em km²)
    float pib;                // PIB da cidade (em bilhões)
    int pontos_turisticos;    // Número de pontos turísticos da cidade
} Cidade;

int main() {
    // Definindo um vetor com 3 cidades inventadas para o exemplo
    Cidade cidades[3] = {
        {1, "Cidade das Palmeiras", 1200000, 1500.5, 45.8, 25},
        {2, "Cidade do Sol", 800000, 320.7, 25.3, 10},
        {3, "Capital Azul", 3500000, 900.4, 75.9, 50}
    };

    // Cadastro de novas cidades
    Cidade cidadeUsuario;
    printf("Cadastro de uma nova cidade:\n");
    printf("Digite o código da cidade: ");
    scanf("%d", &cidadeUsuario.codigo);
    getchar();  // Limpa o buffer após a leitura de um inteiro

    printf("Digite o nome da cidade: ");
    fgets(cidadeUsuario.nome, 100, stdin);
    cidadeUsuario.nome[strcspn(cidadeUsuario.nome, "\n")] = 0; // Remover o '\n'

    printf("Digite a população da cidade: ");
    scanf("%d", &cidadeUsuario.populacao);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &cidadeUsuario.area);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &cidadeUsuario.pib);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &cidadeUsuario.pontos_turisticos);

    // Exibindo as cartas cadastradas, incluindo a cidade inserida pelo usuário
    printf("\nCartas cadastradas:\n");

    // Exibindo as 3 cidades do vetor
    for (int i = 0; i < 3; i++) {
        printf("\nCidade %d:\n", i + 1);
        printf("Código: %d\n", cidades[i].codigo);
        printf("Nome: %s\n", cidades[i].nome);
        printf("População: %d habitantes\n", cidades[i].populacao);
        printf("Área: %.2f km²\n", cidades[i].area);
        printf("PIB: R$ %.2f bilhões\n", cidades[i].pib);
        printf("Pontos turísticos: %d\n", cidades[i].pontos_turisticos);
    }

    // Exibindo a cidade cadastrada pelo usuário
    printf("\nCidade cadastrada pelo usuário:\n");
    printf("Código: %d\n", cidadeUsuario.codigo);
    printf("Nome: %s\n", cidadeUsuario.nome);
    printf("População: %d habitantes\n", cidadeUsuario.populacao);
    printf("Área: %.2f km²\n", cidadeUsuario.area);
    printf("PIB: R$ %.2f bilhões\n", cidadeUsuario.pib);
    printf("Pontos turísticos: %d\n", cidadeUsuario.pontos_turisticos);

    // Comparação de Cartas:
    int escolha;
    printf("\nEscolha a cidade para comparar com a cidade cadastrada:\n");
    printf("1 - Cidade das Palmeiras\n");
    printf("2 - Cidade do Sol\n");
    printf("3 - Capital Azul\n");
    printf("Digite o número da cidade: ");
    scanf("%d", &escolha);

    Cidade cidadeEscolhida = cidades[escolha - 1]; // Seleciona a cidade escolhida pelo usuário

    // Comparação de populações
    printf("\nComparação de populações:\n");
    if (cidadeUsuario.populacao > cidadeEscolhida.populacao) {
        printf("A cidade %s tem maior população.\n", cidadeUsuario.nome);
    } else if (cidadeEscolhida.populacao > cidadeUsuario.populacao) {
        printf("A cidade %s tem maior população.\n", cidadeEscolhida.nome);
    } else {
        printf("As duas cidades têm a mesma população.\n");
    }

    // Comparação de áreas
    printf("\nComparação de áreas:\n");
    if (cidadeUsuario.area > cidadeEscolhida.area) {
        printf("A cidade %s tem maior área.\n", cidadeUsuario.nome);
    } else if (cidadeEscolhida.area > cidadeUsuario.area) {
        printf("A cidade %s tem maior área.\n", cidadeEscolhida.nome);
    } else {
        printf("As duas cidades têm a mesma área.\n");
    }

    // Comparação de PIBs
    printf("\nComparação de PIBs:\n");
    if (cidadeUsuario.pib > cidadeEscolhida.pib) {
        printf("A cidade %s tem o maior PIB.\n", cidadeUsuario.nome);
    } else if (cidadeEscolhida.pib > cidadeUsuario.pib) {
        printf("A cidade %s tem o maior PIB.\n", cidadeEscolhida.nome);
    } else {
        printf("As duas cidades têm o mesmo PIB.\n");
    }

    // Comparação de pontos turísticos
    printf("\nComparação de pontos turísticos:\n");
    if (cidadeUsuario.pontos_turisticos > cidadeEscolhida.pontos_turisticos) {
        printf("A cidade %s tem mais pontos turísticos.\n", cidadeUsuario.nome);
    } else if (cidadeEscolhida.pontos_turisticos > cidadeUsuario.pontos_turisticos) {
        printf("A cidade %s tem mais pontos turísticos.\n", cidadeEscolhida.nome);
    } else {
        printf("As duas cidades têm o mesmo número de pontos turísticos.\n");
    }

    return 0;
}
