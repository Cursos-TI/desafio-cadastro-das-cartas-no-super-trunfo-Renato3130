#include <stdio.h>

int main(){
    char estado1[50];
    char codigodacarta1[5];                                             //variaveis da primeira carta
    char nomecidade1[50];

    int populacao1;
    float area1;
    float pib1;
    int numerodepontosturisticos1;
//----------------------------------------------------------------------------
    char estado2[50];
    char codigodacarta2[5];
    char nomecidade2[50];                                              //variaveis da segunda carta

    int populacao2;
    float area2;
    float pib2;
    int numerodepontosturisticos2;

    printf("------Seja bem vindo ao Super Trunfo!------\n\n");

    printf("Para começar precisamos que você nos forneça algumas informações sobre a carta!\n\n");              //Inicialização

    printf("Vamos começar com a primeira carta\n\n");




    printf("Digite o estado (Exemplo: Matogrosso): ");
    scanf("%s", estado1);

    printf("Digite o código da carta (1 letra e 2 números ex A01 ): ");                                 //inserir dados carta 1
    scanf("%s", codigodacarta1);

    printf("Digite o nome da cidade sem espaços: ");
    scanf("%s", nomecidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numerodepontosturisticos1);


    printf("Vamos para a segunda carta\n\n");

   printf("--------------------------------\n");

    printf("Digite o estado (Exemplo: Rio de janeiro): ");
    scanf("%s", estado2);

    printf("Digite o código da carta (1 letra e 2 números ex A02 ): ");
    scanf("%s", codigodacarta2);

    printf("Digite o nome da cidade sem espaços: ");                                                    // inserir dados carta 2
    scanf("%s", nomecidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numerodepontosturisticos2);


    printf("--------------------------------\n");

    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);                                                // mostrando dados obtido da primeira carta
    printf("Código da Carta: %s\n", codigodacarta1);                               // printf("codigo da carta: %s(tipo da varivel que to puxando)\n pula linha, dps de qual variavel quero puxar o dado
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área em km²: %.2f\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numerodepontosturisticos1);



    printf("--------------------------------\n");

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);                                                // mostrando dados obtido da segunda carta
    printf("Código da Carta: %s\n", codigodacarta2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km²: %.2f\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numerodepontosturisticos2);

   return 0;
