#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL,"");

/*
// Declara��o de vari�veis

    int a;
    float nota [3];

// Solicitando dados

    for (a = 0; a < 3; a++) {
        printf ("Digite a %d� nota: ", a + 1);
        scanf ("%f", &nota[a]); }

        system ("cls");
    for (a = 0; a < 3; a++) {
        printf ("%d� nota: %.2f\n", a+1, nota[a]); }

*/

// VERS�O 2 - Declara��o de vari�veis

    int a;
    int tamanho = 5;
    float nota[tamanho], media, soma;

// Solicitando dados

    for (a = 0; a < tamanho; a++) {
        printf ("Digite a %d� nota: ", a + 1);
        scanf ("%f", &nota[a]); 
        
        soma += nota[5]

        } 
    
    media = nota [0,1,2,3,4] / tamanho; }

        system ("cls");
    for (a = 0; a < tamanho; a++) {
        printf ("%d� nota: %.2f\n", a+1, nota[a]); }
        printf ("%.2f", media);

    return 0;
}