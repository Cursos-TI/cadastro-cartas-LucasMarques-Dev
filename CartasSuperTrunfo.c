
#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  // Variáveis da carta 1
  char estado_1;
  char cod_carta_1[4];
  char nome_cidade_1[50];
  int populacao_1;
  float area_1;
  float pib_1;
  int num_pontos_turisticos_1;
  float densidade_populacional_1;
  float pib_per_capita_1;

  // Variáveis da carta 2
  char estado_2;
  char cod_carta_2[4];
  char nome_cidade_2[50];
  int populacao_2;
  float area_2;
  float pib_2;
  int num_pontos_turisticos_2;
  float densidade_populacional_2;
  float pib_per_capita_2;



  // Área para entrada de dados
  // Entrada de dados da carta 1
  printf("Digite o estado (A a H):\n");
  scanf(" %c", &estado_1);

  printf("Digite o código da carta (ex: A01):\n");
  scanf("%s", cod_carta_1);

  printf("Digite o nome da cidade:\n");
  scanf(" %50[^\n]", nome_cidade_1); // %50[^ \n] Faz a leitura de uma string com espaços, com o limite de até 50 caracteres

  printf("Digite a população:\n");
  scanf("%d", &populacao_1);

  printf("Digite a área em km²:\n");
  scanf("%f", &area_1);

  printf("Digite o PIB:\n");
  scanf("%f", &pib_1);

  printf("Digite o número de pontos turísticos:\n");
  scanf("%d", &num_pontos_turisticos_1);

  // Cálculo de densidade populacional e PIB per capita da carta 1
  densidade_populacional_1 = (float) populacao_1 / area_1;
  pib_per_capita_1 = (float) (pib_1 * 1000000000) / populacao_1;

  // Entrada de dados da carta 2
  printf("\nDigite o estado (A a H):\n");
  scanf(" %c", &estado_2);

  printf("Digite o código da carta (ex: B02):\n");
  scanf("%s", cod_carta_2);

  printf("Digite o nome da cidade:\n");
  scanf(" %50[^\n]", nome_cidade_2); // %49[^ \n] Faz a leitura de uma string com espaços, com o limite de até 50 caracteres

  printf("Digite a população:\n");
  scanf("%d", &populacao_2);

  printf("Digite a área em km²:\n");
  scanf("%f", &area_2);

  printf("Digite o PIB:\n");
  scanf("%f", &pib_2);

  printf("Digite o número de pontos turísticos:\n");
  scanf("%d", &num_pontos_turisticos_2);

  // Cálculo de densidade populacional e PIB per capita da carta 2
  densidade_populacional_2 = (float) populacao_2 / area_2;
  pib_per_capita_2 = (float) (pib_2 * 1000000000) / populacao_2;

  // Exibição dos dados inseridos para a carta 1
  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado_1);
  printf("Código: %s\n", cod_carta_1);
  printf("Nome da Cidade: %s\n", nome_cidade_1);
  printf("População: %d\n", populacao_1);
  printf("Área: %.2f km²\n", area_1);
  printf("PIB: %.2f bilhões de reais\n", pib_1);
  printf("Número de Pontos Turísticos: %d\n", num_pontos_turisticos_1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_1);
  printf("PIB per Capita: %.2f reais\n", pib_per_capita_1);

  // Exibição dos dados inseridos para a carta 2
  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado_2);
  printf("Código: %s\n", cod_carta_2);
  printf("Nome da Cidade: %s\n", nome_cidade_2);
  printf("População: %d\n", populacao_2);
  printf("Área: %.2f km²\n", area_2);
  printf("PIB: %.2f bilhões de reais\n", pib_2);
  printf("Número de Pontos Turísticos: %d\n", num_pontos_turisticos_2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_2);
  printf("PIB per Capita: %.2f reais\n", pib_per_capita_2);

return 0;
} 
