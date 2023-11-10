/* 
Descrção  : Ler 1 número e imprimir todos os números pares e ímpares, em ordem crescente,
até o número digitado pelo usuário! (funo)
Autor(a)   : Gabriel S. Olavo
Data atual : 10/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "");

// Declaração de variáveis

    int i = 0, numero;

// Solicitando dados

    printf ("CONTADOR DE NÚMEROS PARES E ÍMPARES\n\n");
    printf ("Digite um número: ");
    scanf ("%d", &numero);

// Imprimindo números pares  

    printf ("\nNúmeros pares até %d: ", numero);
    for (i = 0; i <= numero; i+= 2) {
    printf ("%d, ", i); } 

// Imprimindo números ímpares  

    printf ("\nNúmeros ímpar até %d: ", numero);
    for (i = 1; i <= numero; i+= 2) {
    printf ("%d, ", i); } 
    printf ("\n"); 

    return 0;
}