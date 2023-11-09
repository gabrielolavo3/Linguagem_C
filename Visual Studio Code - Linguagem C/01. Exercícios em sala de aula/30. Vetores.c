#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");
/*
// Declaração de variáveis

    float notas [3];

// Solicitando dados

    printf ("Informe a 1ª nota: ");
    scanf ("%f", &notas [0]);
    printf ("Informe a 2ª nota: ");
    scanf ("%f", &notas [1]);
    printf ("Informe a 3ª nota: ");
    scanf ("%f", &notas [2]);

// Tela de resultado

    printf ("NOTAS INSERIDAS!\n\n");
    printf ("1ª nota: %.2f\n", notas [0]);
    printf ("2ª nota: %.2f\n", notas [1]);
    printf ("3ª nota: %.2f\n", notas [2]);
*/

/*

// VERSÃO 2- Declaração de variáveis

    float notas [5];

// Solicitando dados

    printf ("Informe a 1ª nota: ");
    scanf ("%f", &notas [0]);
    printf ("Informe a 2ª nota: ");
    scanf ("%f", &notas [1]);
    printf ("Informe a 3ª nota: ");
    scanf ("%f", &notas [2]);
    printf ("Informe a 4ª nota: ");
    scanf ("%f", &notas [3]);
    printf ("Informe a 5ª nota: ");
    scanf ("%f", &notas [4]);

// Tela de resultado

    printf ("NOTAS INSERIDAS!\n\n");
    printf ("1ª nota: %.2f\n", notas [0]);
    printf ("2ª nota: %.2f\n", notas [1]);
    printf ("3ª nota: %.2f\n", notas [2]);
    printf ("4ª nota: %.2f\n", notas [3]);
    printf ("5ª nota: %.2f\n", notas [4]);
*/

// VERSÃO 3 - Declaração de variáveis

    int i, vetor[5];

// Solicitando dados

    for (i = 0; i < 5; i++) {
        printf ("Elemento %d:", i + 1);
        scanf ("%d", &vetor[i]); }

// Tela de resultado

    for (i = 0; i < 5; i++) {
        printf ("Elmento %d: %d\n", i + 1, vetor[i]); }

    return 0;
}