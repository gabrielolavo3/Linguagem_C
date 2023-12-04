/* 
Descri��o  : Ler 2 vetores de 20 posi��es e imprimir um 3� vetor contendo, nas posi��es pares os valores do primeiro 
e nas posi��es impares os valores do segundo! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 04/12/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declara��o de constante

#define G 10

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int a;
    int conjunto_A[G];
    int conjunto_B[G];
    int conjunto_Final[G];

// Solicitando dados

    printf ("CONJUNTOS ARITM�TICOS! Leitor e Atribuidor de Valores Vetorizados\n\n");
    for (a = 0; a < G; a++) {
        printf ("Informe o %d� valor do conjunto A: ", a+1);
        scanf ("%d", &conjunto_A[a]);
    }

    printf ("\n");

    for (a = 0; a < G; a++) {
        printf ("Informe o %d� valor do conjunto B: ", a+1);
        scanf ("%d", &conjunto_B[a]);
    }

// Atribuindo os valores de acordo a posi��o de vetor

    for (a = 0; a < G; a++) {
        
        if (a % 2 == 0) {
            conjunto_Final[a] = conjunto_A[a];
        
        } else {
            conjunto_Final[a] = conjunto_B [a];
        }
    }

// Tela de resultado

    printf ("CONJUNTOS ARITM�TICOS!\n\n");
    for (a = 0; a < G; a++) {
        printf ("%d� valor do conjunto C: %d\n", a+1, conjunto_Final[a]);
    }

    return 0;
}