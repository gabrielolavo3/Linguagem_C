/* 
Descri��o  : Ler uma quantidade indeterminadas de n�meros e imprimir a quantidade total de n�meros,
a soma e a m�dia. O fim da leitura � com n�mero negativo! (fun��o)
Professor  : Carlos Anderson Santos de Jesus
Autor(a)   : Gabriel S. Olavo
Data atual : 02/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int numeros = 0;
    int quantidadedeNumeros = 0;
    int soma = 0;
    float media = 0;

// Solicitando dados

    printf ("MINI CALCULADORA DE N�MEROS\n\n");

do {
    printf ("Informe um n�mero: ");
    scanf ("%d", &numeros);

// Acumulando valores e somando, caso atenda a condi��o

    if (numeros >= 0) {
    soma += numeros;
    quantidadedeNumeros ++; }

} while (numeros >= 0);

// Calculando a m�dia

    media = soma / quantidadedeNumeros;

// Tela de resultado

    printf ("MINI CALCULADORA DE N�MEROS\n\n");
    printf ("Quantidade de n�meros: %d\n", quantidadedeNumeros);
    printf ("Soma dos n�meros: %d\n", soma);
    printf ("M�dia dos n�meros: %.2f\n", media);

    return 0;
}