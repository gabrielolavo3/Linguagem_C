#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");
/*
// Declara��o de vari�veis

    float notas [3];

// Solicitando dados

    printf ("Informe a 1� nota: ");
    scanf ("%f", &notas [0]);
    printf ("Informe a 2� nota: ");
    scanf ("%f", &notas [1]);
    printf ("Informe a 3� nota: ");
    scanf ("%f", &notas [2]);

// Tela de resultado

    printf ("NOTAS INSERIDAS!\n\n");
    printf ("1� nota: %.2f\n", notas [0]);
    printf ("2� nota: %.2f\n", notas [1]);
    printf ("3� nota: %.2f\n", notas [2]);
*/

/*

// VERS�O 2- Declara��o de vari�veis

    float notas [5];

// Solicitando dados

    printf ("Informe a 1� nota: ");
    scanf ("%f", &notas [0]);
    printf ("Informe a 2� nota: ");
    scanf ("%f", &notas [1]);
    printf ("Informe a 3� nota: ");
    scanf ("%f", &notas [2]);
    printf ("Informe a 4� nota: ");
    scanf ("%f", &notas [3]);
    printf ("Informe a 5� nota: ");
    scanf ("%f", &notas [4]);

// Tela de resultado

    printf ("NOTAS INSERIDAS!\n\n");
    printf ("1� nota: %.2f\n", notas [0]);
    printf ("2� nota: %.2f\n", notas [1]);
    printf ("3� nota: %.2f\n", notas [2]);
    printf ("4� nota: %.2f\n", notas [3]);
    printf ("5� nota: %.2f\n", notas [4]);
*/

// VERS�O 3 - Declara��o de vari�veis

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