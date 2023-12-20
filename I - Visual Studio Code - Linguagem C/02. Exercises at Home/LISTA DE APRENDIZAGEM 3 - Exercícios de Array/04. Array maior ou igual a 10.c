/* 
Descrção   : Ler um vetor de 15 posições inteiras e imprimir os números maiores ou igual a 10! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 19/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a;
    int numeros[15];

// Solicitando dados

    printf ("IMPRESSOR DE NÚMEROS A PARTIR DE 10!\n\n");

    for (a = 0; a < 15; a++) {
        printf ("Informe o %dº valor: ", a+1);
        scanf ("%d", &numeros[a]);
    }

// Tela de resultado

system ("cls || clear");

    printf ("IMPRESSOR DE NÚMEROS A PARTIR DE 10!\nResultado Final\n\n");

    for (a = 0; a < 15; a++) {
        if (numeros[a] >= 10) {
            printf ("%dª número: %d\n", a+1, numeros[a]); }
    }

    return 0;
}