#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "");
 
 // Declara��o de vari�veis

    int a, b = 5;
    float numero [b];

 // Solicitando dados

    printf ("INDICADOR DE N�MEROS COM VETOR\nDigite os n�meros solicitados\n\n");
    for (a = 0; a < b; a++) {
        printf ("Informe o %d� valor: ", a+1);
        scanf ("%f", &numero[a]);

        if (numero [a] < 0) {
            numero [a] = 0; }
    }

// Tela de resultado

    system ("cls || clear");
    printf ("INDICADOR DE N�MEROS COM VETOR - Resultado\n\n");
    for (a = 0; a < b; a++) {
        printf ("%d� valor: %.2f\n", a+1, numero[a]); }

    return 0;
}