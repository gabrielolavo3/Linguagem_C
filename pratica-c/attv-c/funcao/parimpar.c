#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declaração de função

void titulo ( ) {
    system ("cls || clear");
    printf ("VERIFICADOR DE PAR E ÍMPAR\n\n");
}

void parEimpar (int valor) {
    valor % 2 == 0 ? printf ("Par") : printf ("Ímpar"); 
}

int main ( ) {

// Declaração de variáveis

    int numero;

// Solicitando dados

    titulo ( );
    printf ("Informe um valor: ");
    scanf ("%d", &numero);

// Tela de resultado

    titulo ( );
    printf ("Valor digitado: %d\n", numero);
    parEimpar (numero);

    return 0;
}