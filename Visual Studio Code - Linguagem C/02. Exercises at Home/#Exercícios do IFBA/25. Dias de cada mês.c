/* 
Descrição  : Ler 1 número correspondente a algum mês e imprimir a quantidade de dias do mês! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 29/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    char mes;

// Solicitando dados

    printf ("INDICADOR DE DIAS DO MÊS\n\n");
    printf ("Digite 1 número para 1 mês do ano: ");
    scanf ("%c", &mes);

// Imprimindo a quantidade de dias

switch (mes) {

    case '4':
    case '6':
    case '9':
    case '11':
    printf ("\nResultado final: Mês com 30 dias");
break; 

    case '1':
    case '3':
    case '5':
    case '7':
    case '8':
    case '10':
    case '12':
    printf ("\nResultado final: Mês com 31 dias");
break; 

    case '2':
    printf ("\nResultado final: Mês com 28 dias");
break;

default:
    printf ("Mês inválido");
break; }

    return 0;
}