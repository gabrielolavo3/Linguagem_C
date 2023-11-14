#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "");

// Declaração de variáveis

    int a, b = 10, soma_Negativo = 0;
    float numero [b], soma_Positivo = 0;

// Solicitando dados

    for (a = 0; a < b; a++) {
        printf ("Informe o %dº número: ", a+1);
        scanf ("%f", &numero[a]);

        if (numero[a] < 0) {
            soma_Negativo++;

        } else {
            soma_Positivo += numero[a]; }  
    }

// Tela de resultado

    printf ("%d\n", soma_Negativo);
    printf ("%.0f\n", soma_Positivo);

    return 0;
}