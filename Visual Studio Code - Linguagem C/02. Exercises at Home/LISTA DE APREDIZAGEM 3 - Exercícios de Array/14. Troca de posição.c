/* 
Descri��o  : Leia um vetor de 16 posi��es e troque os 8 primeiros valores pelos 8 �ltimos. Escreva ao final o vetor obtido! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 27/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declara��o de constante

#define b 16
#define c 8 

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int a;
    float vetor[b], troca;

// Solicitando dados

    printf ("SISTEMA INVERSE! Leitor e Inversor de Posi��es\n\n");
    for (a = 0; a < b; a++) {
        printf ("Digite o %d� valor: ", a+1);
        scanf ("%f", &vetor[a]); }

// Percorrendo o vetor at� o 7� �ndice e trocando as posi��es

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