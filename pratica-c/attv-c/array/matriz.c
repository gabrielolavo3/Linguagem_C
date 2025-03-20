/* 
Descrição  : Ler 5 números inteiros de usuário e inserindo no vetor! (função)
Professor  : Carlos Anderson Santos de Jesus
Autor(a)   : Gabriel S. Olavo
Data atual : 16/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "");

// Declaração de variáveis

    int numero[2][2];
    int a, b, c = 2;

// Solicitando dados

    for (a = 0; a < c; a++) {
        for (b = 0; b < c; b++) {
            printf ("Elemento da linha %d coluna %d: ", a+1, b+1);
            scanf ("%d", &numero[a][b]); }
    }

// Tela de resultado

system ("cls || clear");

    printf ("MATRIZ PRIMÁRIA\n\n");
    for (a = 0; a < c; a++) {
        for (b = 0; b < c; b++) {
            printf ("Elemento da linha %d coluna %d: %d\n",a+1, b+1, numero[a][b]); }
    }

    return 0;
}
