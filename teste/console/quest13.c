/* 
Descrição  : Solicite do usuário dois números inteiros e imprimir qual 
destes números é o maior e qual é o menor! (função)
Professor  : Carlos Anderson Santos de Jesus 
Autor(a)   : Gabriel S. Olavo
Data atual : 07/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int Primeiro_numero, Segundo_numero, maior = 0, menor = 0;

// Solicitando dados

    printf ("HIGHEST AND LOWEST VALUE INDICATOR\n\n");
    printf ("Informe o 1º número: ");
    scanf ("%d", &Primeiro_numero);
    printf ("Informe o 2º número: ");
    scanf ("%d", &Segundo_numero);

// Calculando o maior e menor

    maior = Primeiro_numero > Segundo_numero ? Primeiro_numero : Segundo_numero;
    menor = Primeiro_numero < Segundo_numero ? Primeiro_numero : Segundo_numero;

// Tela de resultados

system ("cls || clear");

    printf ("HIGHEST AND LOWEST VALUE INDICATOR\n\n");
    printf ("Maior número: %d\n", maior);
    printf ("Menor número: %d", menor);

    return 0;
}
