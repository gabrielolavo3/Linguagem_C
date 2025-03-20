#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declarando função sem retorno 

void titulo ( ) {
    system ("cls || clear");
    printf ("MINI CALCULADORA! Leitor e Somador de Valores\n\n");
}

// Declarando função com retorno númerico

int mediaFinal (float N1, float N2) {
    float resultado;
    resultado = (N1 + N2) / 2;
    return resultado;
}

/* Versão 02 da função com retorno númerico
float mediaFinal (float N1, float N2) {
    return N1 + N2; } */

int main ( ) {
    setlocale (LC_ALL, "");

// Declaração de variáveis

    float media;
    float primeiroNumero;
    float segundoNumero;

// Solicitando dados

    titulo( );
    printf ("Informe o 1º número: ");
    scanf ("%f", &primeiroNumero);
    printf ("Informe o 2º número: ");
    scanf ("%f", &segundoNumero);

    media = mediaFinal(primeiroNumero, segundoNumero);

// Tela de resultado

    titulo ( );
    printf ("1º número: %f\n", primeiroNumero);
    printf ("2º número: %f\n", segundoNumero);
    printf ("Média: %.2f", media);

    return 0;
}