#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define G 6

void titulo ( ) {
    system ("cls || claer");
    printf ("PARES & ÍMPARES\n\n");
}

void quantidade (int valor[]) {
    int b, contadorPar = 0, contadorImpar = 0;

    for (b = 0; b < G; b++) {
        if (valor[b] % 2 == 0) {
            contadorPar++;

        } else { 
            contadorImpar++; }
    }

    printf ("Quantidade de números pares: %d\n", contadorPar);
    printf ("Quantidade de números ímpares: %d\n", contadorImpar);
}

int main ( ) {
    setlocale (LC_ALL, "");

    int a;
    int numero[G];

    titulo ( );
    for (a = 0; a < G; a++) {
        printf ("Informe o %dº número: ", a+1);
        scanf ("%d", &numero[a]);
    }

    titulo ( );
    quantidade (numero);

    return 0;
}