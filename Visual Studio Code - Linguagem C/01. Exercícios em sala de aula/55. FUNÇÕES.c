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
  setbuf (stdin, 0);
  system ("cls || clear");
}

int main ( ) {
  setlocale (LC_ALL, "");

// Declaração de variáveis

  char nome[250];
  int idade;

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
  printf ("Idade: %d\n", idade);

  return 0;
}
