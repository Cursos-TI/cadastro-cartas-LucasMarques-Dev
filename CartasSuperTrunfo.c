
#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  // Variáveis da carta 1
  char estado1;
  char cod_carta1[4];
  char nome_cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int num_pontos_turisticos1;

  // Variáveis da carta 2
  char estado2;
  char cod_carta2[4];
  char nome_cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int num_pontos_turisticos2;



  // Área para entrada de dados
  // Entrada de dados da carta 1
  printf("Digite o estado (A a H):\n");
  scanf(" %c", &estado1);

  printf("Digite o código da carta (ex: A01):\n");
  scanf("%s", cod_carta1);

  printf("Digite o nome da cidade:\n");
  scanf(" %50[^\n]", nome_cidade1); // %49[^ \n] Faz a leitura de uma string com espaços, com o limite de até 50 caracteres

  printf("Digite a população:\n");
  scanf("%d", &populacao1);

  printf("Digite a área em km²:\n");
  scanf("%f", &area1);

  printf("Digite o PIB:\n");
  scanf("%f", &pib1);

  printf("Digite o número de pontos turísticos:\n");
  scanf("%d", &num_pontos_turisticos1);


  // Entrada de dados da carta 2
  printf("\nDigite o estado (A a H):\n");
  scanf(" %c", &estado2);

  printf("Digite o código da carta (ex: B02):\n");
  scanf("%s", cod_carta2);

  printf("Digite o nome da cidade:\n");
  scanf(" %50[^\n]", nome_cidade2); // %49[^ \n] Faz a leitura de uma string com espaços, com o limite de até 50 caracteres

  printf("Digite a população:\n");
  scanf("%d", &populacao2);

  printf("Digite a área em km²:\n");
  scanf("%f", &area2);

  printf("Digite o PIB:\n");
  scanf("%f", &pib2);

  printf("Digite o número de pontos turísticos:\n");
  scanf("%d", &num_pontos_turisticos2);


  // Exibição dos dados inseridos para a carta 1
  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", cod_carta1);
  printf("Nome da Cidade: %s\n", nome_cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", num_pontos_turisticos1);
  
  // Exibição dos dados inseridos para a carta 2
  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", cod_carta2);
  printf("Nome da Cidade: %s\n", nome_cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", num_pontos_turisticos2);


return 0;
} 
