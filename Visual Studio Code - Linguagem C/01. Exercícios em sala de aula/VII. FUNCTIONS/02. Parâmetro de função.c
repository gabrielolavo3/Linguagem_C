#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declaração de função

void cabecalho ( ) {
  printf ("==========================\n");
  printf ("\t\tSENAI\n");
  printf ("==========================\n");
}

void limpatela ( ) {
  fflush (stdin);
  system ("cls || clear");
}

void mostrarIdade (int idade) {
    printf ("Idade: %d\n", idade);
}

int main ( ) {
  setlocale (LC_ALL, "");

// Declaração de variáveis

  int idade;
  char nome[250];

// Solicitando dados

  cabecalho(); // Chamada da função
  printf ("Digite um nome: ");
  gets(nome);
  limpatela();

  cabecalho();
  printf ("Digite uma idade: ");
  scanf("%d", &idade);
  limpatela();

  cabecalho(); // Chamada da função
  printf ("Nome: %s\n", nome);

  mostrarIdade(idade); // Passagem de parâmetro entre funções

  return 0;
}