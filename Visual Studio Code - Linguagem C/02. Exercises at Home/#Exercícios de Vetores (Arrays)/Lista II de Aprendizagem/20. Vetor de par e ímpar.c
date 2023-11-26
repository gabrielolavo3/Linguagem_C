/* 
Descr��o   : Crie um programa que armazene 10 n�meros digitados pelo usu�rio em dois vetores: um somente para n�meros pares, 
e outro somente para n�meros �mpares. Ap�s, exiba os valores dos dois vetores na tela, em sequ�ncia! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 26/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int x, s;
    int numeros[10];
    int par[10], impar[10];

// Solicitando dados

    printf ("PAIR ET IMPAIR! Contador de valores pares e �mpares\n\n");
    for (x = 0; x < 10; x++) {
        do {
            printf ("Informe %d� valor par: ", x+1);
            scanf ("%d", &numeros[x]);

            if (numeros[x] % 2 != 0) {
                printf ("\nVALOR INCORRETO! Por favor, informe um n�mero par\n\n"); }
            
        } while (numeros[x] % 2 != 0);

        par[x] = numeros[x];
    }

    printf ("\n");

    for (s = 0; s < 10; s++) {
        do {
            printf ("Informe %d� valor �mpar: ", s+1);
            scanf ("%d", &numeros[s]);

            if (numeros[s] % 2 == 0) {
                printf ("\nVALOR INCORRETO! Por favor, informe um n�mero �mpar\n\n"); }

        } while (numeros[s] % 2 == 0);

        impar[s] = numeros[s];
    }

// Tela de resultado

system ("cls || clear");

    printf ("PAIR ET IMPAIR!\n\n");
    for (x = 0; x < 10; x++) {
        printf ("%d� valor par: %d\n", x+1, par[x]); }

    printf ("\n");

    for (s = 0; s < 10; s++) {
        printf ("%d� valor �mpar: %d\n", s+1, impar[s]); }

    return 0;
}