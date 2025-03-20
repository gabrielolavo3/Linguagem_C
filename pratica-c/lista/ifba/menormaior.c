/* 
Descri��o  : Ler 3 n�meros e imprimir o maior e o menor entre os 3! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 29/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    float primeiroNumero;
    float segundoNumero;
    float terceiroNumero;
    float maior;
    float menor;

// Solicitando dados

    printf ("INDICADOR DE MENOR E MAIOR N�MERO\n\n");
    printf ("Insira o 1� n�mero: ");
    scanf ("%f", &primeiroNumero);
    printf ("Insira o 2� n�mero: ");
    scanf ("%f", &segundoNumero);
    printf ("Insira o 3� n�mero: ");
    scanf ("%f", &terceiroNumero);

// Descobrindo o maior e menor n�mero

    maior = primeiroNumero > segundoNumero ? primeiroNumero : segundoNumero;
    maior = maior > terceiroNumero ? maior : terceiroNumero;

    menor = primeiroNumero < segundoNumero ? primeiroNumero : segundoNumero;
    menor = menor < terceiroNumero ? menor : terceiroNumero;

// Tela de resultado

system ("cls || clear");
    printf ("INDICADOR DE MENOR E MAIOR N�MERO\n");
    printf ("Resultado final!\n\n");
    printf ("Maior n�mero: %.2f\n", maior);
    printf ("Menor n�mero: %.2f", menor);

    return 0;
}