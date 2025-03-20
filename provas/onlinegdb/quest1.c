/* 
Descri�?o  : Ler 6 n�meros inteiros em um vetor e imprimir os n�meros inseridos e a quantidade de pares e �mpares! (fun�?o)
Professor  : Carlos Anderson Santos de Jesus
Autor(a)   : Gabriel S. Olavo
Data atual : 14/12/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declara�?o de constante

#define G 6

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara�?o de vari�veis

    int a, Par = 0, Impar = 0;
    int numero[G];

// Solicitando dados

    for (a = 0; a < G; a++) {
        printf ("Digite o %d? n�mero: ", a+1);
        scanf ("%d", &numero[a]);
    }
    
    for (a = 0; a < G; a++) {
        if (numero[a] % 2 == 0) {
            Par++;
        } else {
            Impar++; }
    }

// Tela de resultado

    printf ("\nQuantidade de pares: %d\n", Par);
    printf ("Quantidade de �mpares: %d\n", Impar);
    
    return 0;
}