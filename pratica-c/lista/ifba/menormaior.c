/* 
Descrição  : Ler 3 números e imprimir o maior e o menor entre os 3! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 29/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    float primeiroNumero;
    float segundoNumero;
    float terceiroNumero;
    float maior;
    float menor;

// Solicitando dados

    printf ("INDICADOR DE MENOR E MAIOR NÚMERO\n\n");
    printf ("Insira o 1ª número: ");
    scanf ("%f", &primeiroNumero);
    printf ("Insira o 2ª número: ");
    scanf ("%f", &segundoNumero);
    printf ("Insira o 3ª número: ");
    scanf ("%f", &terceiroNumero);

// Descobrindo o maior e menor número

    maior = primeiroNumero > segundoNumero ? primeiroNumero : segundoNumero;
    maior = maior > terceiroNumero ? maior : terceiroNumero;

    menor = primeiroNumero < segundoNumero ? primeiroNumero : segundoNumero;
    menor = menor < terceiroNumero ? menor : terceiroNumero;

// Tela de resultado

system ("cls || clear");
    printf ("INDICADOR DE MENOR E MAIOR NÚMERO\n");
    printf ("Resultado final!\n\n");
    printf ("Maior número: %.2f\n", maior);
    printf ("Menor número: %.2f", menor);

    return 0;
}