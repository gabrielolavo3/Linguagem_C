#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "");

// Declaração de variáveis

    char nome[250];
    int idade;

// Solicitando dados

    printf ("Digite o nome do aluno: ");
    gets (nome);
    printf ("Digite a idade do aluno: ");
    scanf ("%d", &idade);

// Tela de resultado

system ("cls || clear");

    printf ("Nome: %s\n", nome);
    printf ("Idade: %d\n", idade);

    return 0;
}
