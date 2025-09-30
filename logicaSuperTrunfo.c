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
    double somaCarta1 = 0, somaCarta2 = 0;
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
    //printf("SuperTrunfo: %.2f\n", superpoderdois); 

    int parametro, parametrodois;
    printf("Escolha o parametro a ser comparado!\n");
    printf("1 - Polulação!\n");
    printf("2 - Pontos Turísticos!\n");
    printf("3 - Área da cidade!\n");
    printf("4 - PIB da cidade!\n");
    printf("5 - Densidade populacional!\n");
    printf("6 - PIB per capita!\n");
    printf("7 - SuperTrunfo!\n");
    scanf("%d", &parametro);

    switch (parametro)
    {
    case 1:
        somaCarta1 += populacaoum;
        somaCarta2 += populacaodois;
        printf("\nAtributo: Populacao\n");
        printf("%s: %lu | %s: %lu\n", nomeum, populacaoum, nomedois, populacaodois);
        if (populacaoum > populacaodois) {
            printf("Vencedor: %s\n", nomeum);
        } else if (populacaoum < populacaodois) {
            printf("Vencedor: %s\n", nomedois);
        } else {
            printf("Resultado: Empate!\n");
        }
        break;

    case 2:
        somaCarta1 += pontosturisticosum;
        somaCarta2 += pontosturisticosdois;
        printf("\nAtributo: Pontos Turisticos\n");
        printf("%s: %d | %s: %d\n", nomeum, pontosturisticosum, nomedois, pontosturisticosdois);
        if (pontosturisticosum > pontosturisticosdois) {
            printf("Vencedor: %s\n", nomeum);
        } else if (pontosturisticosum < pontosturisticosdois) {
            printf("Vencedor: %s\n", nomedois);
        } else {
            printf("Resultado: Empate!\n");
        }
        break;

    case 3:
        somaCarta1 += areaum;
        somaCarta2 += areadois;
        printf("\nAtributo: Area\n");
        printf("%s: %.2f km² | %s: %.2f km²\n", nomeum, areaum, nomedois, areadois);
        if (areaum > areadois) {
            printf("Vencedor: %s\n", nomeum);
        } else if (areaum < areadois) {
            printf("Vencedor: %s\n", nomedois);
        } else {
            printf("Resultado: Empate!\n");
        }
        break;

    case 4:
        somaCarta1 += pibum;
        somaCarta2 += pibdois; 
        printf("\nAtributo: PIB\n");
        printf("%s: R$%.2lf | %s: R$%.2lf\n", nomeum, pibum, nomedois, pibdois);
        if (pibum > pibdois) {
            printf("Vencedor: %s\n", nomeum);
        } else if (pibum < pibdois) {
            printf("Vencedor: %s\n", nomedois);
        } else {
            printf("Resultado: Empate!\n");
        }
        break;

    case 5:
        somaCarta1 += densidadepopum;
        somaCarta2 += densidadepopdois;
        printf("\nAtributo: Densidade Demografica\n");
        printf("%s: %.1f hab/km² | %s: %.1f hab/km²\n", nomeum, densidadepopum, nomedois, densidadepopdois);
        if (densidadepopum < densidadepopdois) {
            printf("Vencedor: %s (menor densidade vence)\n", nomeum);
        } else if (densidadepopum > densidadepopdois) {
            printf("Vencedor: %s (menor densidade vence)\n", nomedois);
        } else {
            printf("Resultado: Empate!\n");
        }
        break;

    case 6:
        somaCarta1 += pibcapitaum;
        somaCarta2 += pibcapitadois;
        printf("\nAtributo: PIB per capita\n");
        printf("%s: R$%.2lf | %s: R$%.2lf\n", nomeum, pibcapitaum, nomedois, pibcapitadois);
        if (pibcapitaum > pibcapitadois) {
            printf("Vencedor: %s\n", nomeum);
        } else if (pibcapitaum < pibcapitadois) {
            printf("Vencedor: %s\n", nomedois);
        } else {
            printf("Resultado: Empate!\n");
        }
        break;

    case 7:
        somaCarta1 += superpoderum;
        somaCarta2 += superpoderdois;
        printf("\nAtributo: SuperTrunfo\n");
        printf("%s: %.2f | %s: %.2f\n", nomeum, superpoderum, nomedois, superpoderdois);
        if (superpoderum > superpoderdois) {
            printf("Vencedor: %s\n", nomeum);
        } else if (superpoderum < superpoderdois) {
            printf("Vencedor: %s\n", nomedois);
        } else {
            printf("Resultado: Empate!\n");
        }
        break;
        
    default:
        printf("Opcao invalida! Escolha um numero do menu.\n");
        break;
    }

     printf("Escolha o segundo parametro para comparar\n");

     if (parametro != 1)
     {
        printf("1 - População\n");
     }
     if (parametro != 2)
     {
        printf("2 - Pontos Turísticos\n");
     }
     if (parametro != 3)
     {
        printf("3 - Área da cidade\n");
     }
     if (parametro != 4)
     {
        printf("4 - PIB da cidade\n");
     }
     if (parametro != 5)
     {
        printf("5 - Densidade populacional\n");
     }
     if (parametro != 6)
     {
        printf("6 - PIB per capita\n");
     }
     if (parametro != 7)
     {
        printf("7 - SuperTrunfo\n");
     }
     
     printf("Escolha:");
     scanf("%d", &parametrodois);

     if (parametrodois == parametro || parametrodois < 1 || parametrodois > 7)
     {
        printf("Erro, opção invalida ou repetida!");
     }
     else {
        switch (parametrodois){
    case 1:
        somaCarta1 += populacaoum;
        somaCarta2 += populacaodois;
        printf("\nAtributo: Populacao\n");
        printf("%s: %lu | %s: %lu\n", nomeum, populacaoum, nomedois, populacaodois);
        if (populacaoum > populacaodois) {
            printf("Vencedor: %s\n", nomeum);
        } else if (populacaoum < populacaodois) {
            printf("Vencedor: %s\n", nomedois);
        } else {
            printf("Resultado: Empate!\n");
        }
        break;

    case 2:
        somaCarta1 += pontosturisticosum;
        somaCarta2 += pontosturisticosdois;
        printf("\nAtributo: Pontos Turisticos\n");
        printf("%s: %d | %s: %d\n", nomeum, pontosturisticosum, nomedois, pontosturisticosdois);
        if (pontosturisticosum > pontosturisticosdois) {
            printf("Vencedor: %s\n", nomeum);
        } else if (pontosturisticosum < pontosturisticosdois) {
            printf("Vencedor: %s\n", nomedois);
        } else {
            printf("Resultado: Empate!\n");
        }
        break;

    case 3:
        somaCarta1 += areaum;
        somaCarta2 += areadois;
        printf("\nAtributo: Area\n");
        printf("%s: %.2f km² | %s: %.2f km²\n", nomeum, areaum, nomedois, areadois);
        if (areaum > areadois) {
            printf("Vencedor: %s\n", nomeum);
        } else if (areaum < areadois) {
            printf("Vencedor: %s\n", nomedois);
        } else {
            printf("Resultado: Empate!\n");
        }
        break;

    case 4:
        somaCarta1 += pibum;
        somaCarta2 += pibdois; 
        printf("\nAtributo: PIB\n");
        printf("%s: R$%.2lf | %s: R$%.2lf\n", nomeum, pibum, nomedois, pibdois);
        if (pibum > pibdois) {
            printf("Vencedor: %s\n", nomeum);
        } else if (pibum < pibdois) {
            printf("Vencedor: %s\n", nomedois);
        } else {
            printf("Resultado: Empate!\n");
        }
        break;

    case 5:
        somaCarta1 += densidadepopum;
        somaCarta2 += densidadepopdois;
        printf("\nAtributo: Densidade Demografica\n");
        printf("%s: %.1f hab/km² | %s: %.1f hab/km²\n", nomeum, densidadepopum, nomedois, densidadepopdois);
        if (densidadepopum < densidadepopdois) {
            printf("Vencedor: %s (menor densidade vence)\n", nomeum);
        } else if (densidadepopum > densidadepopdois) {
            printf("Vencedor: %s (menor densidade vence)\n", nomedois);
        } else {
            printf("Resultado: Empate!\n");
        }
        break;

    case 6:
        somaCarta1 += pibcapitaum;
        somaCarta2 += pibcapitadois;
        printf("\nAtributo: PIB per capita\n");
        printf("%s: R$%.2lf | %s: R$%.2lf\n", nomeum, pibcapitaum, nomedois, pibcapitadois);
        if (pibcapitaum > pibcapitadois) {
            printf("Vencedor: %s\n", nomeum);
        } else if (pibcapitaum < pibcapitadois) {
            printf("Vencedor: %s\n", nomedois);
        } else {
            printf("Resultado: Empate!\n");
        }
        break;

    case 7:
        somaCarta1 += superpoderum;
        somaCarta2 += superpoderdois;
        printf("\nAtributo: SuperTrunfo\n");
        printf("%s: %.2f | %s: %.2f\n", nomeum, superpoderum, nomedois, superpoderdois);
        if (superpoderum > superpoderdois) {
            printf("Vencedor: %s\n", nomeum);
        } else if (superpoderum < superpoderdois) {
            printf("Vencedor: %s\n", nomedois);
        } else {
            printf("Resultado: Empate!\n");
        }
        break;
        
    default:
        printf("Opção inválida! Escolha um numero do menu.\n");
        break;
    }
    printf("RESULTADO FINAL\n");
    printf("Soma da Carta '%s': %.2lf\n", nomeum, somaCarta1);
    printf("Soma da Carta '%s': %.2lf\n", nomedois, somaCarta2);

    if (somaCarta1 > somaCarta2) {
        printf("VENCEDOR DA RODADA: %s!\n", nomeum);
    } else if (somaCarta2 > somaCarta1) {
        printf("VENCEDOR DA RODADA: %s!\n", nomedois);
    } else {
        printf("RESULTADO DA RODADA: Empate!\n");
    }
}

    //if(pontosturisticosum > pontosturisticosdois){
        //printf("A Carta N1 tem mais pontos turisticos que a Carta N2\n");
        //printf("Pontos turisticos Carta N1: %d  Pontos turisticos Carta N2 %d",pontosturisticosum, pontosturisticosdois);
    //}
    //else{
        //printf("A Carta N2 tem mais pontos turisticos que a Carta N1\n");
        //printf("Pontos turisticos Carta N2: %d  Pontos turisticos Carta N1: %d",pontosturisticosdois, pontosturisticosum);
    //}
    return 0;
}