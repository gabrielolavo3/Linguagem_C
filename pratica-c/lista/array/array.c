/* 
Descr��o   : Ler um vetor de 10 posi��es inteiras e imprimir o n�mero de cada vetor! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 19/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declara��o de constante

#define b 10

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int a;
    int numero[b];

// Solicitando dados

    printf ("IMPRESSOR DE N�MEROS!\n\n");
    
    for (a = 0; a < b; a++) {
        printf ("Digite o %d� valor: ",a+1);
        scanf ("%d", &numero[a]); }

// Tela de resultado

system ("cls || clear");

    printf ("IMPRESSOR DE N�MEROS! Resultado Final\n\n");
    
    for (a = 0; a < b; a++) {
        printf ("%d� n�mero informado: %d\n", a+1,numero[a]); }

    return 0;
}