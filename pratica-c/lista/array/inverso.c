/* 
Descrção   : Ler um vetor de 10 posições e imprimir os números na ordem inversa! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 19/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a;
    float elemento[10];

// Solicitando dados

    printf ("INVERSOR REVERSE!\nInforme os números para inverter a ordem\n\n");

    for (a = 0; a < 10; a++) {
        printf ("Digite o %dº número: ", a+1);
        scanf ("%f", &elemento[a]); }

// Tela de resultado

system ("cls || clear");

    printf ("INVERSOR REVERSE!\n\nResultado Final: ");

    for (a = 9; a >= 0; --a) {
        printf ("%.2f ", elemento[a]); }

    return 0;
}