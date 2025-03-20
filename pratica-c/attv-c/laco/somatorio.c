#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

// Declaração de variáveis

    int b, a, soma = 0;

// Solicitadando dados

    for (a = 1; a <= 5; a++) {
    printf("Informe %dº número: ", a);
    scanf("%d", &b);

    soma += b; }

    printf("\nSoma dos valores: %d", soma);

    return 0;
}
