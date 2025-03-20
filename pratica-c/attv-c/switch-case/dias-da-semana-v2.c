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

case 2:
case 3:
case 4:
case 5:
case 6:
    printf ("\nDia Útil");
break;

case 1:
case 7:
    printf ("\nFinal de Semana");
break;

default:
    printf ("\nNúmero informado é inválido!");
break; }

    return 0;

}
