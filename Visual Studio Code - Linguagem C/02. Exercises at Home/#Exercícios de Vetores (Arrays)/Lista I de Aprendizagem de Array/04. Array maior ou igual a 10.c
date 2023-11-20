/* 
Descr��o   : Ler um vetor de 15 posi��es inteiras e imprimir os n�meros maiores ou igual a 10! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 19/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int a;
    int numeros[15];

// Solicitando dados

    printf ("IMPRESSOR DE N�MEROS A PARTIR DE 10!\n\n");

    for (a = 0; a < 15; a++) {
        printf ("Informe o %d� valor: ", a+1);
        scanf ("%d", &numeros[a]);
    }

// Tela de resultado

system ("cls || clear");

    printf ("IMPRESSOR DE N�MEROS A PARTIR DE 10!\nResultado Final\n\n");

    for (a = 0; a < 15; a++) {
        if (numeros[a] >= 10) {
            printf ("%d� n�mero: %d\n", a+1, numeros[a]); }
    }

    return 0;
}