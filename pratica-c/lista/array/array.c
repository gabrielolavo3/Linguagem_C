/* 
Descrção   : Ler um vetor de 10 posições inteiras e imprimir o número de cada vetor! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 19/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declaração de constante

#define b 10

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a;
    int numero[b];

// Solicitando dados

    printf ("IMPRESSOR DE NÚMEROS!\n\n");
    
    for (a = 0; a < b; a++) {
        printf ("Digite o %dº valor: ",a+1);
        scanf ("%d", &numero[a]); }

// Tela de resultado

system ("cls || clear");

    printf ("IMPRESSOR DE NÚMEROS! Resultado Final\n\n");
    
    for (a = 0; a < b; a++) {
        printf ("%dº número informado: %d\n", a+1,numero[a]); }

    return 0;
}