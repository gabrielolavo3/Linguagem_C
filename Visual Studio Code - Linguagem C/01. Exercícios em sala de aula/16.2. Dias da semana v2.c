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

case 2:
case 3:
case 4:
case 5:
case 6:
    printf ("\nDia �til");
break;

case 1:
case 7:
    printf ("\nFinal de Semana");
break;

default:
    printf ("\nN�mero informado � inv�lido!");
break; }

    return 0;

}