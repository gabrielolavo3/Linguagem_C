#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    float primeironumero, segundonumero, soma, subtracao, multiplicacao, divisao;

// Solicitando dados

    printf ("Informe o 1� n�mero: ");
    scanf ("%f", &primeironumero);
    printf ("Informe o 2� n�mero: ");
    scanf ("%f", &segundonumero);

// Opera��es b�sicas

soma = primeironumero + segundonumero;
subtracao = primeironumero - segundonumero;
multiplicacao = primeironumero * segundonumero;
divisao = primeironumero / segundonumero;

system ("cls || clear");

// Tela de resultado

    printf ("1� n�mero: %.2f \n", primeironumero);
    printf ("2� n�mero: %.2f \n\n", segundonumero);
    printf ("Soma dos n�meros: %.2f \n", soma);
    printf ("Subtra��o dos n�meros: %.2f \n", subtracao);
    printf ("Multipli��o dos n�meros: %.2f \n", multiplicacao);
    printf ("Divis�o dos n�meros: %.2f \n", divisao);
    
    return 0;
}