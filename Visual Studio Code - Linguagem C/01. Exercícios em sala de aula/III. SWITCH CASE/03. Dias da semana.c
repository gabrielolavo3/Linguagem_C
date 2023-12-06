#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");
    
// Declaração de variáveis

    int dia;

// Solicitando dados

    printf ("INDICADOR DE DIA ÚTIL E FIM DE SEMANA! \n\n");
    printf ("Informe um número correspondente a um dia da semana: ");
    scanf ("%d", &dia);

// Convertendo o número em dias

switch (dia) {
case 1:
    printf ("\nDomingo (Final de Semana)");
break;

case 2:
    printf ("\nSegunda-feira (Dia Útil)");
break;

case 3:
    printf ("\nTerça-feira (Dia Útil)");
break;

case 4:
    printf ("\nQuarta-feira (Dia Útil)");
break;

case 5:
    printf ("\nQuinta-feira (Dia Útil)");
break;

case 6:
    printf ("\nSexta-feira (Dia Útil)");
break;

case 7:
    printf ("\nSábado (Final de Semana)");
break;

default:
    printf ("\nNúmero informado é inválido!");
break; }

    return 0;

}
