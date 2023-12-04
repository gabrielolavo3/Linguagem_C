#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declaração de constante

#define G 3
#define S 2

// Declaração de struct

struct informacao_escolar {
  char nome[250];
  int idade;
  float notas[S]; 
  float soma;
  float media[S];
};

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a, b;
    struct informacao_escolar aluno[G];

// Solicitando dados

    for (a = 0; a < G; a++) {

        printf ("Informe o nome da %dª pessoa: ", a+1);
        gets (aluno[a].nome);
        printf ("Informe a idade: ");
        scanf ("%d", &aluno[a].idade);

        for (b = 0; b < S; b++) {
            printf ("Informe a %dª nota: ", b+1);
            scanf ("%f", &aluno[a].notas[b]);

            aluno[a].soma += aluno[a].notas[b];
        }
            aluno[a].media[a] = aluno[a].soma / S;
            aluno[a].soma = 0; 

        printf ("\n");
        fflush (stdin);
    }

// Tela de resultado

system ("cls || clear");

    for (a = 0; a < 3; a++) {
        printf ("Nome do %dº aluno: %s\n", a+1, aluno[a].nome);
        printf ("Idade do aluno: %d\n", aluno[a].idade);

        for (b = 0; b < 2; b++) {
            printf ("%dª nota: %.2f\n", b+1, aluno[a].notas[b]);
        }
        printf ("Média final: %.2f\n", aluno[a].media[a]);
      printf ("\n");
    }

    return 0;
}