#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "");

// Declara��o de vari�veis

    int a, pares = 0, impar = 0;
    int tamanho = 6, numero [tamanho];

// Solicitando dados

    for (a = 0; a < tamanho; a++) {
        printf ("Informe o %d� n�mero: ", a+1);
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
        printf ("%d� n�mero: %d\n", a+1,numero[a]); }
        printf ("Quantidade de pares: %d\n", pares);
        printf ("Quantidade de �mpares: %d\n", impar);


    return 0;
}