#include <stdio.h>

int main() {
    // =======================================================================


    // --- Ferramentas para a Carta 1 ---
    char nomeCidade1[50];
    unsigned long int populacao1; // Usamos 'unsigned long int' para caber populações gigantes!
    float area1;
    float pib1;
    int pontosTuristicos1;

    // --- Ferramentas para a Carta 2 ---
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // --- Ferramentas para guardar os resultados dos cálculos ---
    float densidade1, pibPerCapita1, superPoder1;
    float densidade2, pibPerCapita2, superPoder2;
    
    // --- Ferramentas para guardar o placar da batalha (1 ou 0) ---
    int vitoriaPopulacao, vitoriaArea, vitoriaPib, vitoriaPontos;
    int vitoriaDensidade, vitoriaPibPerCapita, vitoriaSuperPoder;

    // --- Um truque para mostrar o vencedor sem usar 'if' ---
    // Se o placar for 0, ele pega "Carta 2". Se for 1, pega "Carta 1".
    char* nomesVencedores[] = {"Carta 2", "Carta 1"};


    // =======================================================================
    // (Ler os dados)
    // =======================================================================
    printf("------ Super Trunfo de Cidades ------\n\n");

    // --- Entrevista com a Carta 1 ---
    printf("--- Dados da Carta 1 ---\n");
    printf("Nome da Cidade (use _ para espacos): ");
    scanf("%s", nomeCidade1);
    printf("Populacao: ");
    scanf("%lu", &populacao1); // Usamos "%lu" porque a variável é unsigned long int
    printf("Area em km2: ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes, ex: 350.5): ");
    scanf("%f", &pib1);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // --- Entrevista com a Carta 2 ---
    printf("\n--- Dados da Carta 2 ---\n");
    printf("Nome da Cidade (use _ para espacos): ");
    scanf("%s", nomeCidade2);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area em km2: ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes, ex: 150.2): ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);


    // =======================================================================
    // Fazer as contas)
  
    // --- Contas da Carta 1 ---
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0f) / (float)populacao1; // Multiplicamos por 1 bilhão para a conta dar certo
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);

    // --- Contas da Carta 2 ---
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / (float)populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);


    // =======================================================================
    // (Comparar os valores)
    // =======================================================================


    // Para estes, o MAIOR valor vence:
    vitoriaPopulacao   = populacao1 > populacao2;
    vitoriaArea        = area1 > area2;
    vitoriaPib         = pib1 > pib2;
    vitoriaPontos      = pontosTuristicos1 > pontosTuristicos2;
    vitoriaPibPerCapita= pibPerCapita1 > pibPerCapita2;
    vitoriaSuperPoder  = superPoder1 > superPoder2;

    // Para a Densidade, a regra é diferente: o MENOR valor vence!
    vitoriaDensidade   = densidade1 < densidade2;


    // =======================================================================
    // Mostrar os resultados

    printf("\n\n--------------------------------\n");
    printf("------ RESULTADO DA BATALHA ------\n");
    printf("--------------------------------\n");
    
    // Usamos o placar (0 ou 1) para escolher a palavra certa no array "nomesVencedores".
    printf("Populacao: %s venceu (%d)\n", nomesVencedores[vitoriaPopulacao], vitoriaPopulacao);
    printf("Area: %s venceu (%d)\n", nomesVencedores[vitoriaArea], vitoriaArea);
    printf("PIB: %s venceu (%d)\n", nomesVencedores[vitoriaPib], vitoriaPib);
    printf("Pontos Turisticos: %s venceu (%d)\n", nomesVencedores[vitoriaPontos], vitoriaPontos);
    printf("Densidade Populacional: %s venceu (%d)\n", nomesVencedores[vitoriaDensidade], vitoriaDensidade);
    printf("PIB per Capita: %s venceu (%d)\n", nomesVencedores[vitoriaPibPerCapita], vitoriaPibPerCapita);
    printf("Super Poder: %s venceu (%d)\n", nomesVencedores[vitoriaSuperPoder], vitoriaSuperPoder);
    printf("--------------------------------\n");

    return 0;
}

   return 0;
}
