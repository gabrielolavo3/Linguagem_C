#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declara��o de fun��o

void titulo ( ) {
    system ("cls || clear");
    printf ("VERIFICADOR DE PAR E �MPAR\n\n");
}

void parEimpar (int valor) {
    valor % 2 == 0 ? printf ("Par") : printf ("�mpar"); 
}

int main ( ) {

// Declara��o de vari�veis

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