/* 
Descrição  : Solicitar um número e imprimir se é primo ou não! (função)
Professor  : Carlos Anderson Santos de Jesus 
Autor(a)   : Gabriel S. Olavo
Data atual : 07/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int numero, i = 0, resto_da_Divisao = 0;

// Solicitando dados

    printf ("INDICADOR DE NÚMERO PRIMO!\n\n");
    printf ("Informe um número: ");
    scanf ("%d", &numero);

// Calculando e acumulando o resto da divisão do valor inserido

    for (i = 1; i <= numero; i++) {
        if (numero % i == 0) {
        resto_da_Divisao++; }
    }

// Tela de resultado

    if (resto_da_Divisao == 2) {
        printf ("Resultado: O número é primo");

    } else {
        printf ("Resultado: O número não é primo"); }

    return 0;
}
