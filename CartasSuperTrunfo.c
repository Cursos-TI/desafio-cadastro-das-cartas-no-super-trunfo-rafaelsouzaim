#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Variáveis para Carta 1
    char codigoEstado1[50], codigoCarta1[50], nomeCidade1[100];
    int populacao1, quantidadePontosTuristicos1;
    float area1, pib1;

    // Variáveis para Carta 2
    char codigoEstado2[50], codigoCarta2[50], nomeCidade2[100];
    int populacao2, quantidadePontosTuristicos2;
    float area2, pib2;
    
    // Cadastro das Cartas:

    // Cadastrar primeira carta
    printf("Cadastrando carta 1 \n");

    printf("Entre com o Código do Estado (Uma letra de 'A' a 'H'): \n");
    scanf("%s", codigoEstado1);

    printf("Entre com o Código da Carta (A letra do estado seguida de um número de 01 a 04): \n");
    scanf("%s", codigoCarta1);

    printf("Entre com o Nome da Cidade: \n");
    scanf(" %[^\n]s", nomeCidade1); // " %[^\n]s" nos possibilita usar espaços (ex: São Paulo)

    printf("Entre com a População: \n");
    scanf("%d", &populacao1);

    printf("Entre com a Área: \n");
    scanf("%f", &area1);

    printf("Entre com o PIB: \n");
    scanf("%f", &pib1);

    printf("Entre com o Número de Pontos Turísticos: \n");
    scanf("%d", &quantidadePontosTuristicos1);

    // Cadastrar segunda carta
    printf("Cadastrando carta 2 \n");

    printf("Entre com o Código do Estado (Uma letra de 'A' a 'H'): \n");
    scanf("%s", codigoEstado2);

    printf("Entre com o Código da Carta (A letra do estado seguida de um número de 01 a 04): \n");
    scanf("%s", codigoCarta2);

    printf("Entre com o Nome da Cidade: \n");
    scanf(" %[^\n]s", nomeCidade2);

    printf("Entre com a População: \n");
    scanf("%d", &populacao2);

    printf("Entre com a Área: \n");
    scanf("%f", &area2);

    printf("Entre com o PIB: \n");
    scanf("%f", &pib2);

    printf("Entre com o Número de Pontos Turísticos: \n");
    scanf("%d", &quantidadePontosTuristicos2);
    
    // Exibição dos Dados das Cartas:

    printf("\n");

    printf("Carta 1:\n");
    printf("Estado: %s\n", codigoEstado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", quantidadePontosTuristicos1);
    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %s\n", codigoEstado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", quantidadePontosTuristicos2);
    printf("\n");

    return 0;
}
