/* 
Descrição  : Leia um vetor de 16 posições e troque os 8 primeiros valores pelos 8 últimos. Escreva ao final o vetor obtido! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 27/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declaração de constante

#define b 16
#define c 8 

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a;
    float vetor[b], troca;

// Solicitando dados

    printf ("SISTEMA INVERSE! Leitor e Inversor de Posições\n\n");
    for (a = 0; a < b; a++) {
        printf ("Digite o %dº valor: ", a+1);
        scanf ("%f", &vetor[a]); }

// Percorrendo o vetor até o 7º índice e trocando as posições

    for (a = 0; a < c; a++) {
        troca = vetor[a];
        vetor[a] = vetor[a+8];
        vetor [a+8] = troca; }

// Tela de resultado

system ("cls || clear");

    printf ("SISTEMA INVERSE!\n\n");
    for (a = 0; a < b; a++) {
        printf ("%.2f ", vetor[a]); }

    return 0;
}