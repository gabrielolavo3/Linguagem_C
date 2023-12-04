/* 
Descrição  : Ler 2 vetores de 20 posições e imprimir um 3º vetor contendo, nas posições pares os valores do primeiro 
e nas posições impares os valores do segundo! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 04/12/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declaração de constante

#define G 20

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a;
    int conjunto_A[G];
    int conjunto_B[G];
    int conjunto_Final[G];

// Solicitando dados

    printf ("CONJUNTOS ARITMÉTICOS! Leitor e Atribuidor de Valores Vetorizados\n\n");
    for (a = 0; a < G; a++) {
        printf ("Informe o %dº valor do conjunto A: ", a+1);
        scanf ("%d", &conjunto_A[a]);
    }

    printf ("\n");

    for (a = 0; a < G; a++) {
        printf ("Informe o %dº valor do conjunto B: ", a+1);
        scanf ("%d", &conjunto_B[a]);
    }

// Atribuindo os valores de acordo a posição de vetor

    for (a = 0; a < G; a++) {
        
        if (a % 2 == 0) {
            conjunto_Final[a] = conjunto_A[a];
        
        } else {
            conjunto_Final[a] = conjunto_B [a];
        }
    }

// Tela de resultado

    printf ("CONJUNTOS ARITMÉTICOS!\n\n");
    for (a = 0; a < G; a++) {
        printf ("%dº valor do conjunto C: %d\n", a+1, conjunto_Final[a]);
    }

    return 0;
}