/* 
Descrição  : Imprimir os números entre 1000 e 2000 que divididos por 11 tem resto 2! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 02/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL,"portuguese");

// Declaração de variáveis

    int a = 0;

// Solicitando dados

    for (a = 1000; a <= 2000; a++) {

// Calculando e imprimindo números entre 1000 e 2000 com resto 2, quando divididos por 11

        if (a % 11 == 2) {
        printf ("%d\n", a); }
    }

    return 0;
}