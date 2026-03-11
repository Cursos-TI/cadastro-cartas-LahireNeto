/*
Matéria: Introdução à Programação de Computadores
Aluno: Lahire Neto

Desafio: "Super Trunfo em c: Fundamentos e Técnicas Avançadas"
Nível: Mestre
*/

#include <stdio.h>
#include <stdbool.h>

int main(){
    
    //declaração e inicialização de variáveis
    char estado_01 = 'O', estado_02 = 'O';
    char codigo_carta_01[4] = "O00", codigo_carta_02[4] = "O00";
    char nome_cidade_01[20] = "Cidade", nome_cidade_02[20] = "Cidade";
    unsigned long int populacao_01 = 0, populacao_02 = 0;
    float area_01 = 1.0, area_02 = 1.0, PIB_01 = 1000.0, PIB_02 = 1000.0;
    int num_pontos_turisticos_01 = 1, num_pontos_turisticos_02 = 1;
    float densidade_populacional_01 = 0, densidade_populacional_02 = 0, PIB_per_capita_01 = 0, PIB_per_capita_02 = 0; 
    float super_poder_01 = 0, super_poder_02 = 0;
    bool comparacao_populacao = false, comparacao_area = false, comparacao_PIB = false, comparacao_pontos_turisticos = false, 
    comparacao_densidade_populacional = false, comparacao_PIB_per_capita = false, comparacao_super_poder = false;
    
    //Aquisição de informações
    printf("Olá! Bem vindo ao cadastro das cartas do jogo Super Trunfo: Estados.\n");
    //cadastro da Carta 1
    printf("Vamos iniciar o cadastro das informações da 1ª Carta.\n");
    printf("Digite o Estado da Carta 1: ");
    scanf(" %c", &estado_01);

    printf("Digite o Código da Carta 1: ");
    scanf("%s", codigo_carta_01);

    printf("Digite o Nome da cidade da Carta 1: ");
    scanf("%s", nome_cidade_01);

    printf("Digite o número da População da Carta 1: ");
    scanf("%d", &populacao_01);

    printf("Digite a Área (em km²) da Carta 1: ");
    scanf("%f", &area_01);

    printf("Digite o PIB (em bilhões de R$) da Carta 1: ");
    scanf("%f", &PIB_01);

    printf("Digite o número de Pontos Turísticos da Carta 1: ");
    scanf("%d", &num_pontos_turisticos_01);

    //cadastro da Carta 2
    printf("\nAgora, vamos iniciar o cadastro das informações da 2ª Carta.\n");
    printf("Digite o Estado da Carta 2: ");
    scanf(" %c", &estado_02);

    printf("Digite o Código da Carta 2: ");
    scanf("%s", codigo_carta_02);

    printf("Digite o Nome da cidade da Carta 2: ");
    scanf("%s", nome_cidade_02);

    printf("Digite o número da População da Carta 2: ");
    scanf("%d", &populacao_02);

    printf("Digite a Área (em km²) da Carta 2: ");
    scanf("%f", &area_02);

    printf("Digite o PIB (em bilhões de R$) da Carta 2: ");
    scanf("%f", &PIB_02);

    printf("Digite o número de Pontos Turísticos da Carta 2: ");
    scanf("%d", &num_pontos_turisticos_02);

/*  
    //Inicialização das variáveis com valores pré-definidos para teste
    char estado_01 = 'A', estado_02 = 'B';
    char codigo_carta_01[4] = "A01", codigo_carta_02[4] = "B02";
    char nome_cidade_01[20] = "Sampa", nome_cidade_02[20] = "Rio";
    unsigned long int populacao_01 = 12325000, populacao_02 = 6748000;
    float area_01 = 1521.11, area_02 = 1200.25, PIB_01 = 699.28, PIB_02 = 300.50;
    int num_pontos_turisticos_01 = 50, num_pontos_turisticos_02 = 30;
    float densidade_populacional_01 = 0, densidade_populacional_02 = 0, PIB_per_capita_01 = 0, PIB_per_capita_02 = 0; 
    float super_poder_01 = 0, super_poder_02 = 0;
    bool comparacao_populacao = false, comparacao_area = false, comparacao_PIB = false, comparacao_pontos_turisticos = false, 
    comparacao_densidade_populacional = false, comparacao_PIB_per_capita = false, comparacao_super_poder = false;
*/
    //Definindo o código das cartas
    codigo_carta_01[0] = estado_01;
    codigo_carta_02[0] = estado_02;

    //Cálculo da Densidade Populacional
    //Cálculo da carta 01
    densidade_populacional_01 = populacao_01 / area_01;
    //Cálculo da carta 02
    densidade_populacional_02 = populacao_02 / area_02;

    //Cálculo do PIB per Capita
    //Cálculo da carta 01
    PIB_per_capita_01 = (PIB_01 * (1e9)) / populacao_01;
    //Cálculo da carta 02
    PIB_per_capita_02 = (PIB_02 * (1e9)) / populacao_02;

    //Cálculo do Super Poder
    super_poder_01 = (float) populacao_01 + area_01 + PIB_01 + num_pontos_turisticos_01 + (1 / densidade_populacional_01) + PIB_per_capita_01;
    super_poder_02 = (float) populacao_02 + area_02 + PIB_02 + num_pontos_turisticos_02 + (1 / densidade_populacional_02) + PIB_per_capita_02;

    //Comparação das Cartas
    comparacao_populacao = populacao_01 > populacao_02;
    comparacao_area = area_01 > area_02;
    comparacao_PIB = PIB_01 > PIB_02;
    comparacao_pontos_turisticos = num_pontos_turisticos_01 > num_pontos_turisticos_02;
    comparacao_densidade_populacional = densidade_populacional_01 < densidade_populacional_02;
    comparacao_PIB_per_capita = PIB_per_capita_01 > PIB_per_capita_02;
    comparacao_super_poder = super_poder_01 > super_poder_02;

    //Imprindo o resultado
    //Impressão das informações da Carta 01
    printf("\nCarta 01:\n");
    printf("\tEstado: %c\n", estado_01);
    printf("\tCódigo: %s\n", codigo_carta_01);
    printf("\tNome da Cidade: %s\n", nome_cidade_01);
    printf("\tPopulação: %d pessoas\n", populacao_01);
    printf("\tÁrea: %.2f km²\n", area_01);
    printf("\tPIB: %.2f bilhões de reais\n", PIB_01);
    printf("\tNúmero de pontos turísticos: %d\n", num_pontos_turisticos_01);
    printf("\tDensidade Populacional: %.2f hab/km²\n", densidade_populacional_01);
    printf("\tPIB per Capita: %.2f reais\n", PIB_per_capita_01);

    //Impressão das informações da Carta 02
    printf("\nCarta 02:\n");
    printf("\tEstado: %c\n", estado_02);
    printf("\tCódigo: %s\n",codigo_carta_02);
    printf("\tNome da Cidade: %s\n", nome_cidade_02);
    printf("\tPopulação: %d pessoas\n", populacao_02);
    printf("\tÁrea: %.2f km²\n", area_02);
    printf("\tPIB: %.2f bilhões de reais\n", PIB_02);
    printf("\tNúmero de pontos turísticos: %d\n", num_pontos_turisticos_02);
    printf("\tDensidade Populacional: %.2f hab/km²\n", densidade_populacional_02);
    printf("\tPIB per Capita: %.2f reais\n", PIB_per_capita_02);

    //Impressão da comparação entre as cartas
    printf("\nComparação entre as Cartas:\n");
    printf("\tPopulação: %s venceu (%d)\n", comparacao_populacao ? "Carta 01" : "Carta 02", comparacao_populacao);
    printf("\tÁrea: %s venceu (%d)\n", comparacao_area ? "Carta 01" : "Carta 02", comparacao_area);
    printf("\tPIB: %s venceu (%d)\n", comparacao_PIB ? "Carta 01" : "Carta 02", comparacao_PIB);
    printf("\tNúmero de pontos turísticos: %s venceu (%d)\n", comparacao_pontos_turisticos ? "Carta 01" : "Carta 02", comparacao_pontos_turisticos);
    printf("\tDensidade Populacional: %s venceu (%d)\n", comparacao_densidade_populacional ? "Carta 01" : "Carta 02", comparacao_densidade_populacional);
    printf("\tPIB per Capita: %s venceu (%d)\n", comparacao_PIB_per_capita ? "Carta 01" : "Carta 02", comparacao_PIB_per_capita);
    printf("\tSuper Poder: %s venceu (%d)\n\n", comparacao_super_poder ? "Carta 01" : "Carta 02", comparacao_super_poder, comparacao_super_poder);

    return 0;
}