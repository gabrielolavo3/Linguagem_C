/* 
Descri��o  : Ler um n�mero e imprimir a tabuada de multiplica��o desse n�mero! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 02/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int a = 0;
    int numero;

// Solicitando dados

    printf ("CALCULADORA DE TABUADA\n\n");
    printf ("Digite um n�mero: ");
    scanf ("%d", &numero);

// Calculando a tabuada de multiplica��o

system ("cls");

    printf ("TABUADA DE MULTIPLICA��O DE %d\n\n", numero);
    for (a = 1; a <= 10; a++) {
    printf ("%d x %d: %d\n", numero, a, numero * a); }

    return 0;
}