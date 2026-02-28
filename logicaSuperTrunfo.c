#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
      // ===== CARTA 1 =====
    char nomeA[50];
    int populacaoA;
    float areaA;
    float pibA;

    // ===== CARTA 2 =====
    char nomeB[50];
    int populacaoB;
    float areaB;
    float pibB;
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
      // ===== Cadastro Carta 1 =====
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Nome da cidade: ");
    scanf("%s", nomeA);

    printf("Populacao: ");
    scanf("%d", &populacaoA);

    printf("Area (km2): ");
    scanf("%f", &areaA);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pibA);

    // ===== Cadastro Carta 2 =====
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Nome da cidade: ");
    scanf("%s", nomeB);

    printf("Populacao: ");
    scanf("%d", &populacaoB);

    printf("Area (km2): ");
    scanf("%f", &areaB);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pibB);

    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    //
     printf("Digite o código da cidade: ");
    //
     scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
     printf("\n=== Resultado das Comparacoes ===\n");
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // população
    if (populacaoA > populacaoB) {
        printf("Maior Populacao: %s venceu!\n", nomeA);
    } else if (populacaoB > populacaoA) {
        printf("Maior Populacao: %s venceu!\n", nomeB);
    } else {
        printf("Populacao: Empate!\n");
    }

    //    area
      if (areaA > areaB) {
        printf("Maior Area: %s venceu!\n", nomeA);
    } else if (areaB > areaA) {
        printf("Maior Area: %s venceu!\n", nomeB);
    } else {
        printf("Area: Empate!\n");
    }
    // 
    //     
    // 

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
