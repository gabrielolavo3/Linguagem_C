/* 
Descrição  : Ler uma quantidade indeterminadas de números e imprimir a quantidade total de números,
a soma e a média. O fim da leitura é com número negativo! (função)
Professor  : Carlos Anderson Santos de Jesus
Autor(a)   : Gabriel S. Olavo
Data atual : 02/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int numeros = 0;
    int quantidadedeNumeros = 0;
    int soma = 0;
    float media = 0;

// Solicitando dados

    printf ("MINI CALCULADORA DE NÚMEROS\n\n");

do {
    printf ("Informe um número: ");
    scanf ("%d", &numeros);

// Acumulando valores e somando, caso atenda a condição

    if (numeros >= 0) {
    soma += numeros;
    quantidadedeNumeros ++; }

} while (numeros >= 0);

// Calculando a média

    media = soma / quantidadedeNumeros;

// Tela de resultado

system ("cls");    
    
    printf ("MINI CALCULADORA DE NÚMEROS\n\n");
    printf ("Quantidade de números: %d\n", quantidadedeNumeros);
    printf ("Soma dos números: %d\n", soma);
    printf ("Média dos números: %.2f\n", media);

    return 0;
}