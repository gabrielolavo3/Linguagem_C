#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int a = 0;
    float nota, numero, soma = 0, media;

// Solicitando dados

do {
    printf ("Digite o %d� valor: ", a + 1);
    scanf ("%f", &numero);

    if (numero > 0) {
        soma += numero;
        a++;
    }
    
} while (numero > 0);

media = soma / a;

// Tela de resultado

    printf ("\n\nM�dia: %.2f", media);

    return 0;
}