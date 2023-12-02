/* 
Descr��o   : Ler um vetor de 12 posi��es e ler tamb�m 2 valores X e Y quaisquer correspondentes a duas posi��es no vetor. 
Ao final, imprimir a soma dos valores encontrados nas posi��es X e Y! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 02/12/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declara��o de constante

#define G 12

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int a, b;
    float soma = 0;
    float vetor[G], X, Y;

// Solicitando dados

    printf ("SOMADOR VOID! Leitor de N�meros Vetorizados\n\n");
    for (a = 0; a < G; a++) {
        printf ("Informe o %d� valor do conjunto de n�meros: ", a+1);
        scanf ("%f", &vetor[a]);
    }

// Lendo e validando os valores de X e Y

    do {
        printf ("\nInforme uma posi��o qualquer X do conjunto de %d n�meros: ", G);
        scanf ("%f", &X);

        if (X < 0 || X > G) {
            printf ("\nPOSI��O INACESS�VEL! Digite a posi��o do conjunto entre 0 e 11\n\n"); }

    } while (X < 0 || X > G);

    do {
        printf ("Informe uma posi��o qualquer Y do conjunto de %d n�meros: ", G);
        scanf ("%f", &Y);

        if (Y < 0 || Y > G) {
            printf ("\nPOSI��O INACESS�VEL! Digite a posi��o do conjunto entre 0 e 11\n\n"); }

    } while (Y < 0 || Y > G);

// Tela de resultado

system ("cls || clear");

    printf ("SOMADOR VOID! Leitor de N�meros Vetorizados\n\n");

/* Percorrendo o vetor para localizar as posi��es solicitadas */

    for (a = 0; a < G; a++) {
        for (b = a + 1; b < G; b++) {
            if (a == X && b == Y) {
                printf ("Valor da posi��o X: %.2f\n", vetor[a]);
                printf ("Valor da posi��o Y: %.2f\n", vetor[b]);
                printf ("Resultado da soma de posi��es: %.2f\n", soma = vetor[a] + vetor[b]);
            }
        }
    }

    return 0;
}