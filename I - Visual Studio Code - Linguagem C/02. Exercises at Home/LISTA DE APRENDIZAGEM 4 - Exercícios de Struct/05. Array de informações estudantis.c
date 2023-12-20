/* 
Descrição  : Criar uma struct com o nome, número de matrícula e curso para 5 alunos. Imprima os dados na tela! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 08/12/2023 */ 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declaração de struct, constante e função

#define G 3

void titulo ( ) {
    system ("cls || clear");
    printf ("COLEGIO READY! Portal Online do Estudante 2023\n\n");
}

struct dados {
    char aluno[250];
    char curso[250];
    char numero_Matricula[250];
}; 

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis comuns e de acesso

    int a;
    struct dados estudante[G];

// Solicitando dados

    titulo ( );
    for (a = 0; a < G; a++) {
        printf ("Digite o nome o %dº estudante: ", a+1);
        gets (estudante[a].aluno);
        printf ("Informe o nome do curso: ");
        gets (estudante[a].curso);
        printf ("Informe o número de matrícula: ");
        gets (estudante[a].numero_Matricula);

        printf ("\n");
        fflush (stdin);
    }

// Tela de resultado

    titulo ( );
    for (a = 0; a < G; a++) {
        printf ("Nome do %d estudante: %s\n", a+1, estudante[a].aluno);
        printf ("Curso atual: %s\n", estudante[a].curso);
        printf ("Número de matrícula: %s\n\n", estudante[a].numero_Matricula);
    }

    return 0;
}