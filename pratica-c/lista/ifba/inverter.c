/* 
Descri��o  : Ler 2 n�meros inteiros e realizar o invers�o de valores! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 27/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int primeiroNumero;
    int segundoNumero;
    int permutacao;

// Solicitando dados

    printf ("PERMUTA��O DE VALORES\n\n");
    printf ("Informe o 1� n�mero inteiro: ");
    scanf ("%d", &primeiroNumero);
    printf ("Informe o 2� n�mero inteiro: ");
    scanf ("%d", &segundoNumero);

// Trocando valores

    permutacao = primeiroNumero;
    primeiroNumero = segundoNumero;
    segundoNumero = permutacao;

// Tela de resultado

system ("cls || clear");

    printf ("PERMUTA��O DE VALORES\n");
    printf ("Resultado da troca de valores\n\n");
    printf ("1� valor: %d \n", primeiroNumero);
    printf ("2� valor: %d \n", segundoNumero);

    return 0;
}