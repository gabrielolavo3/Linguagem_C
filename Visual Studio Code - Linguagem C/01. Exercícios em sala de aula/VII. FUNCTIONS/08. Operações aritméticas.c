#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declaração de funções

float soma (float n1, float n2) {
    return n1 + n2;
}

float subtracao (float n1, float n2) {
    return n1 - n2;
}

float multiplicacao (float n1, float n2) {
    float resultado = n1 * n2;
    return resultado;
}

float divisao (float n1, float n2) {
    float resultado = n1 / n2;
    return resultado;
}

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    float primeiroNumero, segundoNumero;
    float conta1, conta2, conta3, conta4;

// Solicitando dados

    printf ("Informe o 1º número: ");
    scanf ("%f", &primeiroNumero);
    printf ("Informe o 2º número: ");
    scanf ("%f", &segundoNumero);

// Tela resultado e passagem de parâmetro

system ("cls || clear");

    printf ("Soma: %.2f\n", conta1 = soma(primeiroNumero, segundoNumero));
    printf ("Subtração: %.2f\n", conta2 = subtracao(primeiroNumero, segundoNumero));
    printf ("Divisão: %.2f\n", conta3 = divisao(primeiroNumero, segundoNumero));
    printf ("Multiplicação: %.2f\n", conta4 = multiplicacao(primeiroNumero, segundoNumero));

    return 0;
}
