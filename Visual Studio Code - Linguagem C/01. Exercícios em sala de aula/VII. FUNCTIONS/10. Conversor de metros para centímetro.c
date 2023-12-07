#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declaração de funções

void titulo ( ) {
    system ("cls || clear");
    printf ("CONVERSOR VOID!\n\n");
}

float centimetro (float valor) {
    return valor * (float) 100;
}

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    float numero, resultado;

// Solicitando dados

    titulo ( );
    printf ("Informe um valor (em Metros): ");
    scanf ("%f", &numero);

    resultado = centimetro(numero);

// Tela de resultado
    
    titulo ( );
    printf ("Resultado da conversão: %.2f Cm\n", resultado);

    return 0;
}
