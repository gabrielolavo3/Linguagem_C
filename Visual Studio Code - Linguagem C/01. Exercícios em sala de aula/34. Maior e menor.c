#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "");

// Declaração de variáveis

    int a, tamanho = 5;
    int numero[tamanho], maior, menor;

// Solicitando dados

    for (a = 0; a < 5; a++) {
        printf ("Informe o %dº número: ", a+1);
        scanf ("%d", &numero[a]);
    }

    maior = numero[0] > numero [1] ? numero [0] : numero [1];
    maior = maior > numero [2] ? maior : numero [2];
    maior = maior > numero [3] ? maior : numero [3];
    maior = maior > numero [4] ? maior : numero [4];

    menor = numero[0] < numero [1] ? numero [0] : numero [1];
    menor = menor < numero [2] ? menor : numero [2];
    menor = menor < numero [3] ? menor : numero [3];
    menor = menor < numero [4] ? menor : numero [4];

    system ("cls");
    for (a = 0; a < 5; a++) {
    printf ("%dº número: %d\n", a+1, numero[a]); }
    printf ("Maior número: %d\n", maior);
    printf ("Menor número: %d\n", menor);

    return 0;
}