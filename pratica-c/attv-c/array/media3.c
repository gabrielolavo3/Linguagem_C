#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "");

// Declaração de variáveis

    int k, x;
    char nome_da_Disciplina [3][250];
    float nota[2][2];
    float media[3];
    float somaNota = 0;

// Solicitando dados

    for (k = 0; k < 3; k++) {
        printf ("Informe o nome da %dª disciplina: ", k+1);
        gets(nome_da_Disciplina[k]);

        for (x = 0; x < 2; x++) {
            printf ("Digite a %dª nota: ",x+1);
            scanf ("%f", &nota[k][x]);

        somaNota += nota[k][x]; }

        printf ("\n");
        media[k] = somaNota / x;
        somaNota = 0;
        setbuf (stdin, 0);
        fflush (stdin);
    }

// Tela de resultado

system ("cls || clear");

    for (k = 0; k < 3; k++) {
        printf ("Nome da disciplina: %s", nome_da_Disciplina[k]);

        for (x = 0; x < 2; x++) {
            printf ("%d nota: %.2f\n",x+1,nota[k][x]); }

            printf ("Média: %.2f\n", media[k]);
            printf ("\n");
    }

    return 0;
}
