#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declarando fun��o sem retorno 

void titulo ( ) {
    system ("cls || clear");
    printf ("MINI CALCULADORA! Leitor e Somador de Valores\n\n");
}

// Declarando fun��o com retorno n�merico

int mediaFinal (float N1, float N2) {
    float resultado;
    resultado = (N1 + N2) / 2;
    return resultado;
}

/* Vers�o 02 da fun��o com retorno n�merico
float mediaFinal (float N1, float N2) {
    return N1 + N2; } */

int main ( ) {
    setlocale (LC_ALL, "");

// Declara��o de vari�veis

    float media;
    float primeiroNumero;
    float segundoNumero;

// Solicitando dados

    titulo( );
    printf ("Informe o 1� n�mero: ");
    scanf ("%f", &primeiroNumero);
    printf ("Informe o 2� n�mero: ");
    scanf ("%f", &segundoNumero);

    media = mediaFinal(primeiroNumero, segundoNumero);

// Tela de resultado

    titulo ( );
    printf ("1� n�mero: %f\n", primeiroNumero);
    printf ("2� n�mero: %f\n", segundoNumero);
    printf ("M�dia: %.2f", media);

    return 0;
}