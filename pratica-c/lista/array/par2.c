/* 
Descrção   : Ler um vetor com 40 números e imprimir a quantidade de valores pares! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 25/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a;
    int numeros[40];
    int par = 0;

// Solicitando dados

    printf ("CONT CLEAR! Contador de Números Pares\n\n");
    for (a = 0; a < 40; a++) {
        printf ("Digite o %dº valor: ", a+1);
        scanf ("%d", &numeros[a]);

// Validando os valores pares

        if (numeros[a] % 2 == 0) {
            par++; }
    }

// Tela de resultado

system ("cls || clear");

    printf ("CONT CLEAR!\n\n");
    printf ("Quantidade de números pares: %d", par);

    return 0;
}