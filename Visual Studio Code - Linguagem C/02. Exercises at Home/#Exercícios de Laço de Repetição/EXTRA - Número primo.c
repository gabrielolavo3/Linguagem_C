#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int numero, i = 0, resto_da_Divisao = 0;


    printf ("Informe um número: ");
    scanf ("%d", &numero);

    for (i = 1; i <= numero; i++) {
        if (numero % i == 0) {
        resto_da_Divisao++; }
    }


    if (resto_da_Divisao == 2) {
        printf ("O número é primo");
    } else {
        printf ("O número não é primo"); }

    return 0;
}