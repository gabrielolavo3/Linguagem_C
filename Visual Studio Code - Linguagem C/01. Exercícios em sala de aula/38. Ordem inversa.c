#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "");

// Declaração de variáveis

    int a, b = 6;
    int numero [b];

// Solicitando dados

    for (a = 0; a < b; a++) {

    do {
        printf ("Informe o %dº valor: ", a+1);
        scanf ("%d", &numero[a]);

        if (numero[a] % 2 != 0 || numero[a] <= 0) {
            printf ("\nValor incorreto! Informe um valor positivo e par\n\n"); }

    } while (numero[a] % 2 != 0 || numero[a] <= 0);
}

    for (a = --b; a >= 0; a--) {
        printf ("%d\n", numero[a]); }
        
    return 0;
}