/* 
Descrição  : Imprimir a tabuada de multiplicação de 1 a 10! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 02/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL,"portuguese");

// Declaração de variáveis

    int a = 0;
    int b = 0;

// Imprimindo a tabuada de multiplicação

    for (a = 1; a <= 10; a++) {
    printf ("Tabuada do %d\n", a);

// Laço para calcular cada tabuada

    for (b = 1; b <= 10; b++) {
    printf ("%d x %d: %d\n", a, b, a * b); }
    
    printf ("\n"); }

    return 0; 
}