#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "");

// Declaração de variáveis

    int a, pares = 0, impar = 0;
    int tamanho = 6, numero [tamanho];

// Solicitando dados

    for (a = 0; a < tamanho; a++) {
        printf ("Informe o %dº número: ", a+1);
        scanf ("%d", &numero[a]);

    // numero[a] % 2 == 0 ? pares++ : impar++;

        if (numero[a] > 0) {

        if (numero[a] % 2 == 0) {
            pares++;
        } else {
            impar++; }
        }
    }

    system ("cls");
    for (a = 0; a < tamanho; a++) {
        printf ("%dº número: %d\n", a+1,numero[a]); }
        printf ("Quantidade de pares: %d\n", pares);
        printf ("Quantidade de ímpares: %d\n", impar);


    return 0;
}