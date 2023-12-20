#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Declaração de struct e constante

#define G 2
#define S 3

struct discente {
    float notas[G];
    float media[G];
    float soma;
    char nome[250];
    char situacao[250];
    int numero_da_Turma, idade;
};

struct docente {
    char nome[250];
    char disciplina[G][250];
    char turma[G][250];
};

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a, b;
    struct discente estudante[S];
    struct docente professor[G];

// Solicitando dados

    printf ("COLÉGIO TREVOR BELMONT! Coleta de Dados de Docente e Discente\n\n");
    for (a = 0; a < S; a++) {
        printf ("Informe o nome do %dº estudante: ", a+1);
        gets (estudante[a].nome);
        printf ("Digite a idade: ");
        scanf ("%d", &estudante[a].idade);
        printf ("Digite o número de matrícula: ");
        scanf ("%d", &estudante[a].numero_da_Turma);

        for (b = 0; b < G; b++) {
            printf ("Digite a %dª nota: ", b+1);
            scanf ("%f", &estudante[a].notas[b]);

            estudante[a].soma += estudante[a].notas[b];
        }
        estudante[a].media[a] = estudante[a].soma / G;
        estudante[a].soma = 0;
        printf ("\n");
        setbuf (stdin, 0);

// Aplicando aprovação

        if (estudante[a].media[a] >= 7) {
            strcpy (estudante[a].situacao, "Aprovado!");

        } else {
            strcpy (estudante[a].situacao, "Reprovado!"); }
    }
  
    printf ("\n");
  
    for (a = 0; a < G; a++) {
        printf ("Informe o nome do %dº professor: ", a+1);
        gets (professor[a].nome);

        for (b = 0; b < G; b++) {
            printf ("Digite o nome da %dª disciplina: ", b+1);
            gets (professor[a].disciplina[b]);
            setbuf (stdin, 0);
            printf ("Digite o nome da turma: ");
            gets (professor[a].turma[b]);
            printf ("\n");
            setbuf (stdin, 0);
        }
    }

// Tela de resultado

system ("cls || clear");

    printf ("COLÉGIO TREVOR BELMONT\n\nDados de Estudantes\n\n");
    for (a = 0; a < S; a++) {
        printf ("Nome do %dº estudante: %s\n", a+1, estudante[a].nome);
        printf ("Idade do estudante: %d\n", estudante[a].idade);
        printf ("Número de matrícula: %d\n", estudante[a].numero_da_Turma);

        for (b = 0; b < G; b++) {
            printf ("%dª nota: %.2f\n", b+1, estudante[a].notas[b]); }

        printf ("Média final: %.2f\n", estudante[a].media[a]);
        printf ("Situação estudantil: %s\n", estudante[a].situacao);
        printf ("\n");
    }

    printf ("\n");
    printf ("Dados de Professores\n\n");
    for (a = 0; a < G; a++) {
        printf ("Nome do %dº professor: %s\n\n", a+1, professor[a].nome);

        for (b = 0; b < G; b++) {
            printf ("Nome da %dª disciplina: %s\n", b+1, professor[a].disciplina[b]);
            printf ("Nome da turma: %s", professor[a].turma[b]);
        }
    }

    return 0;
}
