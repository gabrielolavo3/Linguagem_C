include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    float primeironumero, segundonumero, soma, subtracao, multiplicacao, divisao;

// Solicitando dados

    printf ("Informe o 1º número: ");
    scanf ("%f", &primeironumero);
    printf ("Informe o 2º número: ");
    scanf ("%f", &segundonumero);

// Operações básicas

soma = primeironumero + segundonumero;
subtracao = primeironumero - segundonumero;
multiplicacao = primeironumero * segundonumero;
divisao = primeironumero / segundonumero;

system ("cls || clear");

// Tela de resultado

    printf ("1º número: %.2f \n", primeironumero);
    printf ("2º número: %.2f \n\n", segundonumero);
    printf ("Soma dos números: %.2f \n", soma);
    printf ("Subtração dos números: %.2f \n", subtracao);
    printf ("Multiplição dos números: %.2f \n", multiplicacao);
    printf ("Divisão dos números: %.2f \n", divisao);
    
    return 0;
}