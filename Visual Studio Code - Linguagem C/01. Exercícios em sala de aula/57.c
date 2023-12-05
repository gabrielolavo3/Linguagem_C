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

// Tem que colocar na ordem

void mostrarDados (char a[], int b) { // (char nomeUsuario[], int idadeUsuario)
    printf ("Nome: %s\n", a);
    printf ("Idade: %d\n", b);
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
  mostrarDados(nome, idade); // Passagem de parâmetro entre funções

  return 0;
}
