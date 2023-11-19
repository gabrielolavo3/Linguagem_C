#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");
    
// Declaração de variáveis

    int a, valor, par = 0 , impar = 0;

// Solicitando dados

    for (a = 1; a <= 5; a++) {
    printf ("Informe %d valor: ", a);
    scanf ("%d", &valor);

    if ( valor % 2 == 0 ) 
    par = par + 1;

    else
    impar = impar + 1; 

/* Forma alternativa
impares += 1
impares++ */    }
    
/*  Versão 2 - Operação ternária

if ( valor % 2 == 0 ) 
    pares ++;
else 
    impar ++;

valor % 2 == 0 ? pares++ : impar++ */

// Tela de resultado

    printf ("Quantidade de pares %.0d \n", par);
    printf ("Quantidade de ímpares %.0d\n ", impar);
    
    return 0;
}
