#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declaração de funções

void titulo ( ) {
    system ("cls || clear");
    printf ("TABUADA!\n\n");
}

void tabuada (int tamanho) {
    int a;
    for (a = 1; a <= 10; a++) {
        printf ("%d x %d = %d\n", tamanho, a, tamanho*a); }
}

int main ( ) {

// Declaração de variáveis

    int valor;

// Solicitando dados

    titulo ( );
    do {
        printf ("Digite um valor entre 1 e 10: ");
        scanf ("%d", &valor);

        if (valor < 1 || valor > 10) {
            printf ("\nVALOR INVÁLIDO! Informe um valor de 1 a 10 para a tabuada\n\n"); }

    } while (valor < 1 || valor > 10);

// Tela de resultado
    
    titulo ( );
    tabuada (valor);

    return 0;
}