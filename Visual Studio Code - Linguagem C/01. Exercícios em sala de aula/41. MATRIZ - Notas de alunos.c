#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Criando uma constante

#define linha 2
#define coluna 3 */

int main ( ) {
    setlocale (LC_ALL, "");

// Declaração de variáveis

    int a, b, c = 2;
    char alunos [c] [200];
    float notas [c] [3];

// Solicitando dados

    for (a = 0; a < c; a++) {
        printf ("Digite o nome do %dº aluno: ", a+1);
        gets (alunos[a]);

        for (b = 0; b < 3; b++) {
            printf ("Digite a %dª nota do aluno: ", b + 1);
            scanf ("%f", &notas[a][b]); }
        
        // setbuf (stdin, 0); = lInux

        fflush (stdin);
    }

// Tela de resultado

system ("cls || clear");

    for (a = 0; a < c; a++) {
        printf ("Nome do %dº aluno: %s\n", a+1, alunos[a]);
        
        for (b = 0; b < c; b++) {
            printf ("%dª nota: %2.f\n", a+1, notas[a][b]); }
    }

    return 0;
}
