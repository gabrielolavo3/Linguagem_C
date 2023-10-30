/* 
Descri��o  : Ler 1 n�mero correspondente a algum m�s e imprimir a quantidade de dias do m�s! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 29/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    char mes;

// Solicitando dados

    printf ("INDICADOR DE DIAS DO M�S\n\n");
    printf ("Digite 1 n�mero para 1 m�s do ano: ");
    scanf ("%c", &mes);

// Imprimindo a quantidade de dias

switch (mes) {

    case '4':
    case '6':
    case '9':
    case '11':
    printf ("\nResultado final: M�s com 30 dias");
break; 

    case '1':
    case '3':
    case '5':
    case '7':
    case '8':
    case '10':
    case '12':
    printf ("\nResultado final: M�s com 31 dias");
break; 

    case '2':
    printf ("\nResultado final: M�s com 28 dias");
break;

default:
    printf ("M�s inv�lido");
break; }

    return 0;
}