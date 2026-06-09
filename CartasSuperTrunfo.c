
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
  unsigned long int populacao_1;
  float area_1;
  float pib_1;
  int num_pontos_turisticos_1;
  float densidade_populacional_1;
  float pib_per_capita_1;
  float super_poder_1;

  // Variáveis da carta 2
  char estado_2;
  char cod_carta_2[4];
  char nome_cidade_2[50];
  unsigned long int populacao_2;
  float area_2;
  float pib_2;
  int num_pontos_turisticos_2;
  float densidade_populacional_2;
  float pib_per_capita_2;
  float super_poder_2;



  // Área para entrada de dados
  // Entrada de dados da carta 1
  printf("Digite o estado (A a H):\n");
  scanf(" %c", &estado_1);

  printf("Digite o código da carta (ex: A01):\n");
  scanf("%s", cod_carta_1);

  printf("Digite o nome da cidade:\n");
  scanf(" %50[^\n]", nome_cidade_1); // %50[^ \n] Faz a leitura de uma string com espaços, com o limite de até 50 caracteres

  printf("Digite a população:\n");
  scanf("%lu", &populacao_1);

  printf("Digite a área em km²:\n");
  scanf("%f", &area_1);

  printf("Digite o PIB:\n");
  scanf("%f", &pib_1);

  printf("Digite o número de pontos turísticos:\n");
  scanf("%d", &num_pontos_turisticos_1);

  // Cálculo de densidade populacional e PIB per capita da carta 1
  densidade_populacional_1 = (float) populacao_1 / area_1;
  pib_per_capita_1 = (float) (pib_1 * 1000000000) / populacao_1;
  
  // Cálculo do Super Poder da carta 1
  // Super Poder = população + área + PIB + pontos turísticos + PIB per capita + (1/densidade)
  super_poder_1 = (float) populacao_1 + area_1 + pib_1 + num_pontos_turisticos_1 + pib_per_capita_1 + (1.0f / densidade_populacional_1);

  // Entrada de dados da carta 2
  printf("\nDigite o estado (A a H):\n");
  scanf(" %c", &estado_2);

  printf("Digite o código da carta (ex: B02):\n");
  scanf("%s", cod_carta_2);

  printf("Digite o nome da cidade:\n");
  scanf(" %50[^\n]", nome_cidade_2); // %49[^ \n] Faz a leitura de uma string com espaços, com o limite de até 50 caracteres

  printf("Digite a população:\n");
  scanf("%lu", &populacao_2);

  printf("Digite a área em km²:\n");
  scanf("%f", &area_2);

  printf("Digite o PIB:\n");
  scanf("%f", &pib_2);

  printf("Digite o número de pontos turísticos:\n");
  scanf("%d", &num_pontos_turisticos_2);

  // Cálculo de densidade populacional e PIB per capita da carta 2
  densidade_populacional_2 = (float) populacao_2 / area_2;
  pib_per_capita_2 = (float) (pib_2 * 1000000000) / populacao_2;
  
  // Cálculo do Super Poder da carta 2
  // Super Poder = população + área + PIB + pontos turísticos + PIB per capita + (1/densidade)
  super_poder_2 = (float) populacao_2 + area_2 + pib_2 + num_pontos_turisticos_2 + pib_per_capita_2 + (1.0f / densidade_populacional_2);

  // Exibição dos dados inseridos para a carta 1
  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado_1);
  printf("Código: %s\n", cod_carta_1);
  printf("Nome da Cidade: %s\n", nome_cidade_1);
  printf("População: %lu\n", populacao_1);
  printf("Área: %.2f km²\n", area_1);
  printf("PIB: %.2f bilhões de reais\n", pib_1);
  printf("Número de Pontos Turísticos: %d\n", num_pontos_turisticos_1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_1);
  printf("PIB per Capita: %.2f reais\n", pib_per_capita_1);
  printf("Super Poder: %.2f\n", super_poder_1);

  // Exibição dos dados inseridos para a carta 2
  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado_2);
  printf("Código: %s\n", cod_carta_2);
  printf("Nome da Cidade: %s\n", nome_cidade_2);
  printf("População: %lu\n", populacao_2);
  printf("Área: %.2f km²\n", area_2);
  printf("PIB: %.2f bilhões de reais\n", pib_2);
  printf("Número de Pontos Turísticos: %d\n", num_pontos_turisticos_2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_2);
  printf("PIB per Capita: %.2f reais\n", pib_per_capita_2);
  printf("Super Poder: %.2f\n", super_poder_2);

  // ========== MENU INTERATIVO (NÍVEL AVENTUREIRO) ==========
  int atributo_escolhido;
  
  printf("\n========== MENU DE COMPARAÇÃO DE CARTAS ==========\n");
  printf("Escolha qual atributo deseja comparar:\n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Pontos Turísticos\n");
  printf("5. Densidade Populacional\n");
  printf("6. PIB per Capita\n");
  printf("Digite sua escolha (1-6): ");
  scanf("%d", &atributo_escolhido);
  
  printf("\n========== RESULTADO DA COMPARAÇÃO ==========\n");
  
  // Estrutura switch para direcionar a comparação baseada na escolha do usuário
  switch(atributo_escolhido) {
    case 1: {
      // Comparação por População (maior valor vence)
      printf("\nAtributo escolhido: População\n");
      printf("Carta 1 - %s (%c): %lu\n", nome_cidade_1, estado_1, populacao_1);
      printf("Carta 2 - %s (%c): %lu\n", nome_cidade_2, estado_2, populacao_2);
      
      if (populacao_1 > populacao_2) {
        printf("\n🎉 Resultado: Carta 1 (%s) venceu!\n", nome_cidade_1);
      } else if (populacao_2 > populacao_1) {
        printf("\n🎉 Resultado: Carta 2 (%s) venceu!\n", nome_cidade_2);
      } else {
        printf("\n⚖️  Resultado: Empate!\n");
      }
      break;
    }
    
    case 2: {
      // Comparação por Área (maior valor vence)
      printf("\nAtributo escolhido: Área\n");
      printf("Carta 1 - %s (%c): %.2f km²\n", nome_cidade_1, estado_1, area_1);
      printf("Carta 2 - %s (%c): %.2f km²\n", nome_cidade_2, estado_2, area_2);
      
      if (area_1 > area_2) {
        printf("\n🎉 Resultado: Carta 1 (%s) venceu!\n", nome_cidade_1);
      } else if (area_2 > area_1) {
        printf("\n🎉 Resultado: Carta 2 (%s) venceu!\n", nome_cidade_2);
      } else {
        printf("\n⚖️  Resultado: Empate!\n");
      }
      break;
    }
    
    case 3: {
      // Comparação por PIB (maior valor vence)
      printf("\nAtributo escolhido: PIB\n");
      printf("Carta 1 - %s (%c): %.2f bilhões de reais\n", nome_cidade_1, estado_1, pib_1);
      printf("Carta 2 - %s (%c): %.2f bilhões de reais\n", nome_cidade_2, estado_2, pib_2);
      
      if (pib_1 > pib_2) {
        printf("\n🎉 Resultado: Carta 1 (%s) venceu!\n", nome_cidade_1);
      } else if (pib_2 > pib_1) {
        printf("\n🎉 Resultado: Carta 2 (%s) venceu!\n", nome_cidade_2);
      } else {
        printf("\n⚖️  Resultado: Empate!\n");
      }
      break;
    }
    
    case 4: {
      // Comparação por Pontos Turísticos (maior valor vence)
      printf("\nAtributo escolhido: Pontos Turísticos\n");
      printf("Carta 1 - %s (%c): %d\n", nome_cidade_1, estado_1, num_pontos_turisticos_1);
      printf("Carta 2 - %s (%c): %d\n", nome_cidade_2, estado_2, num_pontos_turisticos_2);
      
      if (num_pontos_turisticos_1 > num_pontos_turisticos_2) {
        printf("\n🎉 Resultado: Carta 1 (%s) venceu!\n", nome_cidade_1);
      } else if (num_pontos_turisticos_2 > num_pontos_turisticos_1) {
        printf("\n🎉 Resultado: Carta 2 (%s) venceu!\n", nome_cidade_2);
      } else {
        printf("\n⚖️  Resultado: Empate!\n");
      }
      break;
    }
    
    case 5: {
      // Comparação por Densidade Populacional (MENOR valor vence!)
      printf("\nAtributo escolhido: Densidade Populacional (menor é melhor)\n");
      printf("Carta 1 - %s (%c): %.2f hab/km²\n", nome_cidade_1, estado_1, densidade_populacional_1);
      printf("Carta 2 - %s (%c): %.2f hab/km²\n", nome_cidade_2, estado_2, densidade_populacional_2);
      
      if (densidade_populacional_1 < densidade_populacional_2) {
        printf("\n🎉 Resultado: Carta 1 (%s) venceu!\n", nome_cidade_1);
      } else if (densidade_populacional_2 < densidade_populacional_1) {
        printf("\n🎉 Resultado: Carta 2 (%s) venceu!\n", nome_cidade_2);
      } else {
        printf("\n⚖️  Resultado: Empate!\n");
      }
      break;
    }
    
    case 6: {
      // Comparação por PIB per Capita (maior valor vence)
      printf("\nAtributo escolhido: PIB per Capita\n");
      printf("Carta 1 - %s (%c): %.2f reais\n", nome_cidade_1, estado_1, pib_per_capita_1);
      printf("Carta 2 - %s (%c): %.2f reais\n", nome_cidade_2, estado_2, pib_per_capita_2);
      
      if (pib_per_capita_1 > pib_per_capita_2) {
        printf("\n🎉 Resultado: Carta 1 (%s) venceu!\n", nome_cidade_1);
      } else if (pib_per_capita_2 > pib_per_capita_1) {
        printf("\n🎉 Resultado: Carta 2 (%s) venceu!\n", nome_cidade_2);
      } else {
        printf("\n⚖️  Resultado: Empate!\n");
      }
      break;
    }
    
    default: {
      // Tratamento de entrada inválida
      printf("\n❌ Erro: Opção inválida! Digite um número entre 1 e 6.\n");
    }
  }

return 0;
} 
