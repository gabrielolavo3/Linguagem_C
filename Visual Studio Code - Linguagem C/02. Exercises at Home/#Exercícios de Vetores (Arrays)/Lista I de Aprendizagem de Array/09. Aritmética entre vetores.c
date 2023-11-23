/* 
Descrção   : Ler 2 vetores - A e B -, cada um com 20 números inteiros e imprimir a soma, subtração e multiplicação entre cada 
posição dos 2 vetores! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 23/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a, b;
    int numeros[20], valor[20];
    int subtracao[20], soma[20], multiplicacao[20];

// Solicitando dados

    printf ("ARITMÉTHIKUS! FAÇA OPERAÇÕES ENTRE DIVERSOS NÚMEROS\n\n");
    for (a = 0; a < 20; a++) {
        printf ("Digite o %dº número da posição A: ", a+1);
        scanf ("%d", &numeros[a]); }
    
    printf ("\n");

    for (b = 0; b < 20; b++) {
        printf ("Digite o %dº número da posição B: ", b+1);
        scanf ("%d", &valor[b]); }

// Tela de resultado e calculando a soma, multiplicação e subtração dos vetores

system ("cls || clear");

    printf ("ARITMÉTHIKUS!\n\n");
    for (a = 0; a < 20; a++) {
        printf ("Subtração da %dª posição: %d\n", a+1, subtracao[a] = numeros[a] - valor[a]); }
    
    printf ("\n");

    for (a = 0; a < 20; a++) {
        printf ("Soma da %dª posição: %d\n", a+1, soma[a] = numeros[a] + valor[a]); }

    printf ("\n");

    for (a = 0; a < 20; a++) {
        printf ("Multiplicação da %dª posição: %d\n", a+1, multiplicacao[a] = numeros[a] * valor[a]); }

    return 0;
}