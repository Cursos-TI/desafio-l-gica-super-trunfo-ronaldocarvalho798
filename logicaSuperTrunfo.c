#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    
    //Variáveis da Carta 1
    char codigocidadeum[5], nomeum[50];
    int pontosturisticosum;
    float areaum, densidadepopum, superpoderum;
    double pibum, pibcapitaum;
    unsigned long int populacaoum;

    //Variáveis da Carta 2
    char codigocidadedois[5], nomedois[50];
    int pontosturisticosdois;
    float areadois, densidadepopdois, superpoderdois;
    double pibdois, pibcapitadois;
    unsigned long int populacaodois;    

    // Variáveis de resultado das comparações
    int resultadopopulacao;
    int resultadopontosturisticos;
    int resultadoarea;
    int resultadopib;
    int resultadopibpercapita;
    int resultadodensidade;
    int resultadosuperpoder;


    //Leitura dos dados da Carta 1 
    printf("Digite o código da cidade 1: ");
    scanf("%s", codigocidadeum);

    printf("Digite o nome da cidade 1: ");
    scanf("%s", nomeum);

    printf("Digite a população da cidade 1: ");
    scanf("%lu", &populacaoum);

    printf("Digite o número de pontos turísticos da cidade 1: ");
    scanf("%d", &pontosturisticosum);

    printf("Digite a área da cidade 1 em km²: ");
    scanf("%f", &areaum);

    printf("Digite o PIB da cidade 1: ");
    scanf("%lf", &pibum);


    //Calculos Carta 1
    densidadepopum = populacaoum / areaum;
    pibcapitaum = pibum / populacaoum;
    float inversodensidadeum = 1.0f / densidadepopum;
    superpoderum = populacaoum + areaum + pibum + pontosturisticosum + pibcapitaum + inversodensidadeum;


    // Retorno dos dados da Carta 1
    //printf("Dados da Carta 1 \n");
    //printf("Código da cidade: %s\n", codigocidadeum);
    //printf("Nome da cidade: %s\n", nomeum);
    //printf("População da cidade: %lu habitantes\n", populacaoum);
    //printf("Pontos turísticos: %d\n", pontosturisticosum);
    //printf("Área da cidade: %.2f km²\n", areaum);
    //printf("PIB da cidade: R$%.2lf\n", pibum); 
    //printf("Densidade populacional: %.1f\n", densidadepopum);
    //printf("PIB per capita: R$%.2lf\n", pibcapitaum); 
    //printf("SuperPoder %.2f\n", superpoderum); 



    //Leitura dos dados da Carta 2 
    printf("Digite o código da cidade 2: ");
    scanf("%s", codigocidadedois);

    printf("Digite o nome da cidade 2: ");
    scanf("%s", nomedois);

    printf("Digite a população da cidade 2: ");
    scanf("%lu", &populacaodois);

    printf("Digite o número de pontos turísticos da cidade 2: ");
    scanf("%d", &pontosturisticosdois);

    printf("Digite a área da cidade 2 em km²: ");
    scanf("%f", &areadois);

    printf("Digite o PIB da cidade 2: ");
    scanf("%lf", &pibdois);


    // Calculos da Carta 2
    densidadepopdois = populacaodois / areadois;
    pibcapitadois = pibdois / populacaodois;
    float inversodensidadedois = 1.0f / densidadepopdois;
    superpoderdois = populacaodois + areadois + pibdois + pontosturisticosdois + pibcapitadois + inversodensidadedois;

     // Retorno dos dados da Carta 2
    //printf("Dados da Carta 2\n");
    //printf("Código da cidade: %s\n", codigocidadedois);
    //printf("Nome da cidade: %s\n", nomedois);
    //printf("População da cidade: %lu habitantes\n", populacaodois);
    //printf("Pontos turísticos: %d\n", pontosturisticosdois);
    //printf("Área da cidade: %.2f km²\n", areadois); 
    //printf("PIB da cidade: R$%.2lf\n", pibdois);
    //printf("Densidade populacional: %.1f\n", densidadepopdois); 
    //printf("PIB per capita: R$%.2lf\n", pibcapitadois); 


    if(pontosturisticosum > pontosturisticosdois){
        printf("A Carta N1 tem mais pontos turisticos que a Carta N2\n");
        printf("Pontos turisticos Carta N1: %d  Pontos turisticos Carta N2 %d",pontosturisticosum, pontosturisticosdois);
    }
    else{
        printf("A Carta N2 tem mais pontos turisticos que a Carta N1\n");
        printf("Pontos turisticos Carta N2: %d  Pontos turisticos Carta N1: %d",pontosturisticosdois, pontosturisticosum);
    }
    return 0;
}