#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declaração de funções e constantes

#define G 6

void titulo ( ) {
    system ("cls || clear");
    printf ("VOID NUMBERS! Leitor e Contador de Pares e Ímpares\n\n");
}

int par (int vetor[]) {
    int a, contadorPar = 0;

    for (a = 0; a < G; a++) {
        if (vetor[a] % 2 == 0) {
           contadorPar++; }
    }
    return contadorPar;
}   

int impar (int vetor[]) {
    int b, contadorImpar = 0;

    for (b = 0; b < G; b++) {
        if (vetor[b] % 2 != 0) {
            contadorImpar++; }
    }
    return contadorImpar;
}

int main ( ) {
    setlocale (LC_ALL, "");

// Declaração de variáveis

    int a;
    int numero[G], pares, impares;

// Solicitando dados

    titulo ( );
    for (a = 0; a < G; a++) {
        printf ("Informe o %dº valor: ", a+1);
        scanf ("%d", &numero[a]);
    }

    pares = par (numero);
    impares = impar (numero);

// Tela de resultado

    titulo ( );
    for (a = 0; a < G; a++) {
        printf ("%dº número: %d\n", a+1, numero[a]);
    }
    printf ("\nQuantidade de valores pares: %d\n", pares);
    printf ("Quantidade de valores ímpares: %d\n", impares);
    
    return 0;
}
