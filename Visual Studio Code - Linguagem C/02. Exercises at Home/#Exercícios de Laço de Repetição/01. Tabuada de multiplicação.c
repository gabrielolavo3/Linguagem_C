/* 
Descrição  : Ler um número e imprimir a tabuada de multiplicação desse número! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 02/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a = 0;
    int numero;

// Solicitando dados

    printf ("CALCULADORA DE TABUADA\n\n");
    printf ("Digite um número: ");
    scanf ("%d", &numero);

// Calculando a tabuada de multiplicação

system ("cls");

    printf ("TABUADA DE MULTIPLICAÇÃO DE %d\n\n", numero);
    for (a = 1; a <= 10; a++) {
    printf ("%d x %d: %d\n", numero, a, numero * a); }

    return 0;
}