/* 
Descrção   : Ler um vetor de 12 posições e ler também 2 valores X e Y quaisquer correspondentes a duas posições no vetor. 
Ao final, imprimir a soma dos valores encontrados nas posições X e Y! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 02/12/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declaração de constante

#define G 12

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a, b;
    float soma = 0;
    float vetor[G], X, Y;

// Solicitando dados

    printf ("SOMADOR VOID! Leitor de Números Vetorizados\n\n");
    for (a = 0; a < G; a++) {
        printf ("Informe o %dº valor do conjunto de números: ", a+1);
        scanf ("%f", &vetor[a]);
    }

// Lendo e validando os valores de X e Y

    do {
        printf ("\nInforme uma posição qualquer X do conjunto de %d números: ", G);
        scanf ("%f", &X);

        if (X < 0 || X > G) {
            printf ("\nPOSIÇÃO INACESSÍVEL! Digite a posição do conjunto entre 0 e 11\n\n"); }

    } while (X < 0 || X > G);

    do {
        printf ("Informe uma posição qualquer Y do conjunto de %d números: ", G);
        scanf ("%f", &Y);

        if (Y < 0 || Y > G) {
            printf ("\nPOSIÇÃO INACESSÍVEL! Digite a posição do conjunto entre 0 e 11\n\n"); }

    } while (Y < 0 || Y > G);

// Tela de resultado

system ("cls || clear");

    printf ("SOMADOR VOID! Leitor de Números Vetorizados\n\n");

/* Percorrendo o vetor para localizar as posições solicitadas */

    for (a = 0; a < G; a++) {
        for (b = a + 1; b < G; b++) {
            if (a == X && b == Y) {
                printf ("Valor da posição X: %.2f\n", vetor[a]);
                printf ("Valor da posição Y: %.2f\n", vetor[b]);
                printf ("Resultado da soma de posições: %.2f\n", soma = vetor[a] + vetor[b]);
            }
        }
    }

    return 0;
}