#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");
    
// Declara��o de vari�veis

    int dia;

// Solicitando dados

    printf ("INDICADOR DE DIA �TIL E FIM DE SEMANA! \n\n");
    printf ("Informe um n�mero correspondente a um dia da semana: ");
    scanf ("%d", &dia);

// Convertendo o n�mero em dias

switch (dia) {
case 1:
    printf ("\nDomingo (Final de Semana)");
break;

case 2:
    printf ("\nSegunda-feira (Dia �til)");
break;

case 3:
    printf ("\nTer�a-feira (Dia �til)");
break;

case 4:
    printf ("\nQuarta-feira (Dia �til)");
break;

case 5:
    printf ("\nQuinta-feira (Dia �til)");
break;

case 6:
    printf ("\nSexta-feira (Dia �til)");
break;

case 7:
    printf ("\nS�bado (Final de Semana)");
break;

default:
    printf ("\nN�mero informado � inv�lido!");
break; }

    return 0;

}