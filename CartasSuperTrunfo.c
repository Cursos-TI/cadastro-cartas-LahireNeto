#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){
    
    //declaração e inicialização de variáveis
    char estado_01 = 'O', estado_02 = 'O';
    char codigo_carta_01[4] = "O00", codigo_carta_02[4] = "O00";
    char nome_cidade_01[20] = "Cidade", nome_cidade_02[20] = "Cidade";
    int populacao_01 = 0, populacao_02 = 0;
    float area_01 = 1.0, area_02 = 1.0, PIB_01 = 1000.0, PIB_02 = 1000.0;
    int num_pontos_turisticos_01 = 1, num_pontos_turisticos_02 = 1;

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

    printf("Digite o PIB (em R$) da Carta 1: ");
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

    printf("Digite o PIB (em R$) da Carta 2: ");
    scanf("%f", &PIB_02);

    printf("Digite o número de Pontos Turísticos da Carta 2: ");
    scanf("%d", &num_pontos_turisticos_02);

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
    //Impressão das informações da Carta 02
    printf("\nCarta 02:\n");
    printf("\tEstado: %c\n", estado_02);
    printf("\tCódigo: %s\n", codigo_carta_02);
    printf("\tNome da Cidade: %s\n", nome_cidade_02);
    printf("\tPopulação: %d pessoas\n", populacao_02);
    printf("\tÁrea: %.2f km²\n", area_02);
    printf("\tPIB: %.2f bilhões de reais\n", PIB_02);
    printf("\tNúmero de pontos turísticos: %d\n\n", num_pontos_turisticos_02);

    return 0;
}
