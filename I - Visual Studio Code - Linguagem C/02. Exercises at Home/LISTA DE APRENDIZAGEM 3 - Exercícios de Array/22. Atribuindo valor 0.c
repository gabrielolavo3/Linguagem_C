/* 
Descr��o   : Ler um vetor com 40 n�meros e atribuir o valor 0 para os n�meros negativos. No final, imprimir o vetor! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 25/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int a;
    float valor[20];

// Solicitando dados

    printf ("ASSIGNMENT! Lendo e alocando valores\n\n");
    for (a = 0; a < 20; a++) {
        printf ("Informe o %d� n�mero: ", a+1);
        scanf ("%f", &valor[a]);

        if (valor[a] < 0) {
            valor[a] = 0; }
    }

// Tela de resultado

system ("cls || clear");

    printf ("ASSIGNMENT!\n\n");
    for (a = 0; a < 20; a++) {
        printf ("%d� n�mero: %.2f\n", a+1, valor[a]); }

    return 0;
}