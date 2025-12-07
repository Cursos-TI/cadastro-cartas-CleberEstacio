#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char carta1, carta2, estado;
  char codigo_carta, cidade[30];
  int populacao;
  int pontos_turisticos;
  float area, pib;
  // Área para entrada de dados
  printf("=========Cadastrar cartas==========\n");

  printf("Cadastre a sua carta: \n");

  printf("carta: ");
  scanf("%c", &carta1);

  printf("Estado: ");
  scanf("%c\n", &estado);

  printf("Codigo da carta: ");
  scanf("%s\n", &codigo_carta );

  printf("Cidade: ");
  scanf("%s\n", &cidade);

  printf("Populacao: \n");
  scanf("%i.", &populacao);
  
  printf("Area: \n");
  scanf("%f.", &area);
  
  printf("Pib: \n");
  scanf("%f.", &pib);

  printf("Numero de pontos turisticos: \n");
  scanf("%d.", &pontos_turisticos);
  

  



  // Área para exibição dos dados da cidade
  
} 
