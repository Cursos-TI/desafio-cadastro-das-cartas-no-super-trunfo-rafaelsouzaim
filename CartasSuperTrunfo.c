#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

// Nível Mestre

int main() {
    // Variáveis para Carta 1
    char codigoEstado1[50], codigoCarta1[50], nomeCidade1[100];
    int quantidadePontosTuristicos1;
    unsigned long int populacao1;
    float area1, pib1, densidadePopulacional1, pibPerCapita1, superPoder1;

    // Variáveis para Carta 2
    char codigoEstado2[50], codigoCarta2[50], nomeCidade2[100];
    int quantidadePontosTuristicos2;
    unsigned long int populacao2;
    float area2, pib2, densidadePopulacional2, pibPerCapita2, superPoder2;

    // Variáveis resultados
    int resultado, cartaVencedora;
    
    // Cadastro das Cartas:
    printf("|-------------------------------------------|\n");
    printf("|------ Desafio Super Trunfo - Países ------|\n");
    printf("|-------------------------------------------|\n\n");

    // Cadastrar primeira carta
    printf("Cadastrando carta 1 ...\n\n");

    printf("Entre com o Código do Estado (Uma letra de 'A' a 'H'): \n");
    scanf("%s", codigoEstado1);

    printf("Entre com o Código da Carta (A letra do estado seguida de um número de 01 a 04): \n");
    scanf("%s", codigoCarta1);

    printf("Entre com o Nome da Cidade: \n");
    scanf(" %[^\n]s", nomeCidade1); // " %[^\n]s" nos possibilita usar espaços (ex: São Paulo)

    printf("Entre com a População (Número inteiro): \n");
    scanf("%lu", &populacao1);

    printf("Entre com a Área (Número decimal): \n");
    scanf("%f", &area1);

    printf("Entre com o PIB (Número decimal): \n");
    scanf("%f", &pib1);

    printf("Entre com o Número de Pontos Turísticos (Número inteiro): \n");
    scanf("%d", &quantidadePontosTuristicos1);

    // Cadastrar segunda carta
    printf("\nCadastrando carta 2 ...\n\n");

    printf("Entre com o Código do Estado (Uma letra de 'A' a 'H'): \n");
    scanf("%s", codigoEstado2);

    printf("Entre com o Código da Carta (A letra do estado seguida de um número de 01 a 04): \n");
    scanf("%s", codigoCarta2);

    printf("Entre com o Nome da Cidade: \n");
    scanf(" %[^\n]s", nomeCidade2);

    printf("Entre com a População (Número inteiro): \n");
    scanf("%lu", &populacao2);

    printf("Entre com a Área (Número decimal): \n");
    scanf("%f", &area2);

    printf("Entre com o PIB (Número decimal): \n");
    scanf("%f", &pib2);

    printf("Entre com o Número de Pontos Turísticos (Número inteiro): \n");
    scanf("%d", &quantidadePontosTuristicos2);

    // Calculando valores:
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    
    // Exibição dos Dados das Cartas:
    printf("\n");
    printf("Cartas cadastradas:\n\n");

    printf("Carta 1:\n");
    printf("Estado: %s\n", codigoEstado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", quantidadePontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %s\n", codigoEstado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", quantidadePontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    printf("\n");

    // Calculando super poderes:
    superPoder1 = (float) populacao1 + area1 + pib1 + 
        quantidadePontosTuristicos1 + pibPerCapita1 + (1/densidadePopulacional1);
    superPoder2 = (float) populacao2 + area2 + pib2 + 
        quantidadePontosTuristicos2 + pibPerCapita2 + (1/densidadePopulacional2);

    // Comparando atributos das cartas:
    printf("Comparação de Cartas:\n\n");

    // _ População
    resultado = populacao1 > populacao2;
    if (resultado == 1) {
        cartaVencedora = 1;
    } else {
        cartaVencedora = 2;
    }
    printf("População: Carta %d venceu (%d)\n", cartaVencedora, resultado);

    // _ Área
    resultado = area1 > area2;
    if (resultado == 1) {
        cartaVencedora = 1;
    } else {
        cartaVencedora = 2;
    }
    printf("Área: Carta %d venceu (%d)\n", cartaVencedora, resultado);

    // _ PIB
    resultado = pib1 > pib2;
    if (resultado == 1) {
        cartaVencedora = 1;
    } else {
        cartaVencedora = 2;
    }
    printf("PIB: Carta %d venceu (%d)\n", cartaVencedora, resultado);

    // _ Pontos Turísticos
    resultado = quantidadePontosTuristicos1 > quantidadePontosTuristicos2;
    if (resultado == 1) {
        cartaVencedora = 1;
    } else {
        cartaVencedora = 2;
    }
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", cartaVencedora, resultado);

    // _ Densidade Populacional
    resultado = densidadePopulacional1 < densidadePopulacional2;
    if (resultado == 1) {
        cartaVencedora = 1;
    } else {
        cartaVencedora = 2;
    }
    printf("Densidade Populacional: Carta %d venceu (%d)\n", cartaVencedora, resultado);

    // _ PIB per Capita
    resultado = pibPerCapita1 > pibPerCapita2;
    if (resultado == 1) {
        cartaVencedora = 1;
    } else {
        cartaVencedora = 2;
    }
    printf("PIB per Capita: Carta %d venceu (%d)\n", cartaVencedora, resultado);

    // _ Super Poder
    resultado = superPoder1 > superPoder2;
    if (resultado == 1) {
        cartaVencedora = 1;
    } else {
        cartaVencedora = 2;
    }
    printf("Super Poder: Carta %d venceu (%d)\n", cartaVencedora, resultado);

    printf("\n");

    return 0;
}
