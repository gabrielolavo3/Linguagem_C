/* 
Descri��o  : Declarar um vetor de 10 posi��es e o preenchee imprimrir com os 10 primeiros n�meros impares! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 27/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declara��o de constante

#define b 10

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int a;
    int vetor[] = {1,3,5,7,9,11,13,15,17,19};

// Tela de resultado

    printf ("NUMBER PRINTER!\n\n");
    for (a = 0; a < b; a++) {
        printf ("%d ", vetor[a]); }

    return 0;
}