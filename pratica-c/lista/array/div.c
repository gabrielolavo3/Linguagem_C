/* 
Descrção   : Ler um vetor de 10 elementos inteiros e positivos e criar um 2º vetor da seguinte forma: os
elementos de índice par receberão os valores divididos por 2; os elementos de índice ímpar receberão os valores 
multiplicados por 3. No final, imprima os dois vetores! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 25/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a;
    int numero[10];
    int resultado[10];

// Solicitando dados

    printf ("OPERANDI! Multiplicando e dividindo\n\n");
    for (a = 0; a < 10; a++) {
        printf ("Digite o %dº número: ", a+1);
        scanf ("%d", &numero[a]);
    }

// Aplicando o calculo de acordo ao índice do vetor

    for (a = 0; a < 10; a++) {
        if (a % 2 == 0) {
            resultado[a] = numero[a] / 2; }

        if (a % 2 != 0) {
            resultado[a] = numero[a] * 3; }
    }

// Tela de resultado

system ("cls || clear");

    printf ("OPERANDI! Resumo dos dados e operações\n\n");
    for (a = 0; a < 10; a++) {
        printf ("%dº valor informado: %d\n", a+1, numero[a]); }

    printf ("\n");

    printf ("Resultado dos valores após as operações matemáticas: ");
    for (a = 0; a < 10; a++) {
        printf ("%d ", resultado[a]); }

    return 0;
}