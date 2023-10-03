/* 
Descri��o  : Ler 3 n�meros e verificar qual � o maior e o menor valor com opera��o tern�ria! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 02/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");

// Declarando vari�veis

    float primeiroNumero, segundoNumero, terceiroNumero, maior, menor;

// Solicitando dados

    printf ("informe o 1� n�mero: ");
    scanf ("%f", &primeiroNumero);
    printf ("informe o 2� n�mero: ");
    scanf ("%f", &segundoNumero);
    printf ("informe o 3� n�mero: ");
    scanf ("%f", &terceiroNumero);

//Opera��o tern�ria para maior e menor n�mero

    maior = primeiroNumero > segundoNumero ? primeiroNumero : segundoNumero;
    maior = maior > terceiroNumero ? maior : terceiroNumero;

    menor = primeiroNumero < segundoNumero ? primeiroNumero : segundoNumero;
    menor = menor < terceiroNumero ? menor : terceiroNumero;

system ("cls || clear");

// Tela de resultado

    printf ("RESUMO DOS DADOS INSERIDOS \n\n");
    printf ("1� n�mero: %.2f \n", primeiroNumero);
    printf ("2� n�mero: %.2f \n", segundoNumero);
    printf ("3� n�mero: %.2f \n\n", terceiroNumero);
    printf ("Maior n�mero: %.2f \n", maior);
    printf ("Menor n�mero: %.2f \n", menor);

    return 0;
}