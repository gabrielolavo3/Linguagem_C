#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a = 0;
    float nota, numero, soma = 0, media;

// Solicitando dados

do {
    printf ("Digite o %dº valor: ", a + 1);
    scanf ("%f", &numero);

    if (numero > 0) {
        soma += numero;
        a++;
    }
    
} while (numero > 0);

media = soma / a;

// Tela de resultado

    printf ("\n\nMédia: %.2f", media);

    return 0;
}