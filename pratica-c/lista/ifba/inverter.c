/* 
Descrição  : Ler 2 números inteiros e realizar o inversão de valores! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 27/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int primeiroNumero;
    int segundoNumero;
    int permutacao;

// Solicitando dados

    printf ("PERMUTAÇÃO DE VALORES\n\n");
    printf ("Informe o 1º número inteiro: ");
    scanf ("%d", &primeiroNumero);
    printf ("Informe o 2º número inteiro: ");
    scanf ("%d", &segundoNumero);

// Trocando valores

    permutacao = primeiroNumero;
    primeiroNumero = segundoNumero;
    segundoNumero = permutacao;

// Tela de resultado

system ("cls || clear");

    printf ("PERMUTAÇÃO DE VALORES\n");
    printf ("Resultado da troca de valores\n\n");
    printf ("1º valor: %d \n", primeiroNumero);
    printf ("2º valor: %d \n", segundoNumero);

    return 0;
}