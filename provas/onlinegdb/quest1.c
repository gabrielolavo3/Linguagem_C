/* 
Descriç?o  : Ler 6 números inteiros em um vetor e imprimir os números inseridos e a quantidade de pares e ímpares! (funç?o)
Professor  : Carlos Anderson Santos de Jesus
Autor(a)   : Gabriel S. Olavo
Data atual : 14/12/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declaraç?o de constante

#define G 6

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaraç?o de variáveis

    int a, Par = 0, Impar = 0;
    int numero[G];

// Solicitando dados

    for (a = 0; a < G; a++) {
        printf ("Digite o %d? número: ", a+1);
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
    printf ("Quantidade de ímpares: %d\n", Impar);
    
    return 0;
}