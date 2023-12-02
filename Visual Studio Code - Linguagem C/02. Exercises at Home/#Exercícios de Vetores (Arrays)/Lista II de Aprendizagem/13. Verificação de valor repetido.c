/* 
Descr��o   : Ler um vetor de 10 posi��es e verificar se existem valores iguais e os imprimir! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 02/12/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int a, b;
    float vetor[10];

// Solicitando dados

    printf ("ASSIMILATOR! Comparador e Analisador de N�meros\n\n");
    for (a = 0; a < 10; a++) {
        printf ("Informe o %d� n�mero: ", a+1);
        scanf ("%f", &vetor[a]);
    }

// Tela de resultado de percorrendo o vetor duas vezes para efetuar a compara��o

system ("cls || clear");

    printf ("ASSIMILATOR! Comparador e Analisador de N�meros\n\n");
    for (a = 0; a < 10; a++) {
        printf ("%d� valor: %.2f\n", a+1, vetor[a]);
    }

    printf ("\n");

    for (a = 0; a < 10; a++) {
        for (b = a + 1; b < 10; b++) {
            if (vetor[a] == vetor[b]) {
                printf ("Valor repetido: %.2f\n", vetor[b]); 
            } 
        }
    }

    return 0;
}