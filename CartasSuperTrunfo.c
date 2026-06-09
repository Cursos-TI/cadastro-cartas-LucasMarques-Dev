
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

  // ========== MENU INTERATIVO (NÍVEL MESTRE) - COMPARAÇÃO COM DOIS ATRIBUTOS ==========
  int atributo_1, atributo_2;
  float valor_atributo_1_c1, valor_atributo_1_c2;
  float valor_atributo_2_c1, valor_atributo_2_c2;
  float soma_carta_1, soma_carta_2;
  
  // Armazenar nomes dos atributos para exibição
  char nome_atributo_1[30], nome_atributo_2[30];
  
  printf("\n========== MENU DE COMPARAÇÃO COM DOIS ATRIBUTOS ==========\n");
  
  // ===== PRIMEIRO MENU: Escolher primeiro atributo =====
  printf("\nEscolha o PRIMEIRO atributo para comparar:\n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Pontos Turísticos\n");
  printf("5. Densidade Populacional\n");
  printf("6. PIB per Capita\n");
  printf("Digite sua escolha (1-6): ");
  scanf("%d", &atributo_1);
  
  // ===== SEGUNDO MENU: Escolher segundo atributo (diferente do primeiro) =====
  printf("\nEscolha o SEGUNDO atributo para comparar (deve ser diferente do primeiro):\n");
  if (atributo_1 != 1) printf("1. População\n");
  if (atributo_1 != 2) printf("2. Área\n");
  if (atributo_1 != 3) printf("3. PIB\n");
  if (atributo_1 != 4) printf("4. Pontos Turísticos\n");
  if (atributo_1 != 5) printf("5. Densidade Populacional\n");
  if (atributo_1 != 6) printf("6. PIB per Capita\n");
  printf("Digite sua escolha (1-6): ");
  scanf("%d", &atributo_2);
  
  // Validar se atributo_2 é diferente de atributo_1
  if (atributo_2 == atributo_1) {
    printf("\n❌ Erro: Você escolheu o mesmo atributo duas vezes! Encerrando...\n");
    return 0;
  }
  
  // Função auxiliar para obter valores dos atributos
  #define GET_ATRIBUTO(atrib, carta) \
    ((atrib) == 1) ? (float)(populacao_##carta) : \
    ((atrib) == 2) ? area_##carta : \
    ((atrib) == 3) ? pib_##carta : \
    ((atrib) == 4) ? (float)(num_pontos_turisticos_##carta) : \
    ((atrib) == 5) ? densidade_populacional_##carta : \
    ((atrib) == 6) ? pib_per_capita_##carta : 0.0f
  
  #define GET_NOME_ATRIBUTO(atrib) \
    ((atrib) == 1) ? "População" : \
    ((atrib) == 2) ? "Área" : \
    ((atrib) == 3) ? "PIB" : \
    ((atrib) == 4) ? "Pontos Turísticos" : \
    ((atrib) == 5) ? "Densidade Populacional" : \
    ((atrib) == 6) ? "PIB per Capita" : "Desconhecido"
  
  // Obter valores dos atributos
  valor_atributo_1_c1 = GET_ATRIBUTO(atributo_1, 1);
  valor_atributo_1_c2 = GET_ATRIBUTO(atributo_1, 2);
  valor_atributo_2_c1 = GET_ATRIBUTO(atributo_2, 1);
  valor_atributo_2_c2 = GET_ATRIBUTO(atributo_2, 2);
  
  // ===== COMPARAÇÃO INDIVIDUAL DE CADA ATRIBUTO =====
  int pontos_carta_1 = 0, pontos_carta_2 = 0;
  
  printf("\n========== RESULTADO DA COMPARAÇÃO ==========\n");
  
  // Comparar primeiro atributo
  printf("\n📊 Atributo 1: %s\n", GET_NOME_ATRIBUTO(atributo_1));
  printf("Carta 1 (%s): %.2f\n", nome_cidade_1, valor_atributo_1_c1);
  printf("Carta 2 (%s): %.2f\n", nome_cidade_2, valor_atributo_1_c2);
  
  if (atributo_1 == 5) {
    // Densidade: menor vence
    if (valor_atributo_1_c1 < valor_atributo_1_c2) {
      printf("✓ Carta 1 venceu neste atributo!\n");
      pontos_carta_1++;
    } else if (valor_atributo_1_c2 < valor_atributo_1_c1) {
      printf("✓ Carta 2 venceu neste atributo!\n");
      pontos_carta_2++;
    } else {
      printf("⚖️  Empate neste atributo!\n");
    }
  } else {
    // Outros atributos: maior vence
    if (valor_atributo_1_c1 > valor_atributo_1_c2) {
      printf("✓ Carta 1 venceu neste atributo!\n");
      pontos_carta_1++;
    } else if (valor_atributo_1_c2 > valor_atributo_1_c1) {
      printf("✓ Carta 2 venceu neste atributo!\n");
      pontos_carta_2++;
    } else {
      printf("⚖️  Empate neste atributo!\n");
    }
  }
  
  // Comparar segundo atributo
  printf("\n📊 Atributo 2: %s\n", GET_NOME_ATRIBUTO(atributo_2));
  printf("Carta 1 (%s): %.2f\n", nome_cidade_1, valor_atributo_2_c1);
  printf("Carta 2 (%s): %.2f\n", nome_cidade_2, valor_atributo_2_c2);
  
  if (atributo_2 == 5) {
    // Densidade: menor vence
    if (valor_atributo_2_c1 < valor_atributo_2_c2) {
      printf("✓ Carta 1 venceu neste atributo!\n");
      pontos_carta_1++;
    } else if (valor_atributo_2_c2 < valor_atributo_2_c1) {
      printf("✓ Carta 2 venceu neste atributo!\n");
      pontos_carta_2++;
    } else {
      printf("⚖️  Empate neste atributo!\n");
    }
  } else {
    // Outros atributos: maior vence
    if (valor_atributo_2_c1 > valor_atributo_2_c2) {
      printf("✓ Carta 1 venceu neste atributo!\n");
      pontos_carta_1++;
    } else if (valor_atributo_2_c2 > valor_atributo_2_c1) {
      printf("✓ Carta 2 venceu neste atributo!\n");
      pontos_carta_2++;
    } else {
      printf("⚖️  Empate neste atributo!\n");
    }
  }
  
  // Calcular somas
  soma_carta_1 = valor_atributo_1_c1 + valor_atributo_2_c1;
  soma_carta_2 = valor_atributo_1_c2 + valor_atributo_2_c2;
  
  // ===== RESULTADO FINAL =====
  printf("\n" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "\n");
  printf("RESULTADO FINAL DA RODADA\n");
  printf("=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "\n");
  printf("\nPontos por atributo vencidos:\n");
  printf("Carta 1 (%s): %d pontos\n", nome_cidade_1, pontos_carta_1);
  printf("Carta 2 (%s): %d pontos\n", nome_cidade_2, pontos_carta_2);
  
  printf("\nSoma dos valores dos atributos:\n");
  printf("Carta 1 (%s): %.2f\n", nome_cidade_1, soma_carta_1);
  printf("Carta 2 (%s): %.2f\n", nome_cidade_2, soma_carta_2);
  
  printf("\n" "-" "-" "-" "-" "-" "-" "-" "-" "-" "-" "-" "-" "-" "-" "-" "-" "-" "-" "-" "-" "-" "-" "-" "-" "-" "-" "-" "-" "-" "-" "-" "-" "-" "\n");
  
  if (soma_carta_1 > soma_carta_2) {
    printf("🏆 CARTA 1 (%s) VENCEU A RODADA! 🏆\n", nome_cidade_1);
  } else if (soma_carta_2 > soma_carta_1) {
    printf("🏆 CARTA 2 (%s) VENCEU A RODADA! 🏆\n", nome_cidade_2);
  } else {
    printf("⚖️  EMPATE NA RODADA! As duas cartas têm a mesma soma!\n");
  }
  
  printf("=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "=" "\n");

return 0;
} 
