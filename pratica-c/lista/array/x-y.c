/* 
Descrição   : Ler um vetor de 12 posições e ler também 2 valores X e Y quaisquer correspondentes a duas posições no vetor. 
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
    int X, Y;
    float soma = 0;
    float vetor[G]; 

// Solicitando dados

    printf ("SOMADOR VOID! Leitor de Números Vetorizados\n\n");
    for (a = 0; a < G; a++) {
        printf ("Informe o %dº valor do conjunto de números: ", a+1);
        scanf ("%f", &vetor[a]);
    }

// Lendo e validando os valores de X e Y

    do {
        printf ("\nInforme uma posição qualquer X do conjunto de %d números: ", G);
        scanf ("%d", &X);

        if (X < 0 || X >= G) {
            printf ("\nPOSIÇÃO INACESSÍVEL! Digite a posição do conjunto entre 0 e %d\n\n", G-1); }

    } while (X < 0 || X >= G);

    do {
        printf ("Informe uma posição Y distinta da posição X no conjunto de %d números: ", G);
        scanf ("%d", &Y);

        if (Y < 0 || Y >= G) {
            printf ("\nPOSIÇÃO INACESSÍVEL! Digite a posição do conjunto entre 0 e %d\n\n", G-1); 
        
        } else if (Y == X) {
            printf ("\nPOSIÇÃO INACESSÍVEL! Digite o valor da posição Y diferente do valor da posição X\n\n"); }

    } while (Y < 0 || Y >= G || Y == X);

// Tela de resultado

system ("cls || clear");

    printf ("SOMADOR VOID! Leitor de Números Vetorizados\n\n");

/* Percorrendo o vetor para localizar as posições solicitadas e validando se as posições de a e b são distintas e se a = y e b = x */

    for (a = 0; a < G; a++) {
        for (b = a + 1; b < G; b++) {
            if (a != b && a == Y && b == X) {
                printf ("Valor da posição X: %.2f\n", vetor[b]);
                printf ("Valor da posição Y: %.2f\n", vetor[a]);
                printf ("Resultado da soma de posições: %.2f\n", soma = vetor[a] + vetor[b]);
            }
        }
    }

    return 0;
}
