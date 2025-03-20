/* 
Descr��o   : Ler um vetor de 10 posi��es e imprimir os n�meros na ordem inversa! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 19/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int a;
    float elemento[10];

// Solicitando dados

    printf ("INVERSOR REVERSE!\nInforme os n�meros para inverter a ordem\n\n");

    for (a = 0; a < 10; a++) {
        printf ("Digite o %d� n�mero: ", a+1);
        scanf ("%f", &elemento[a]); }

// Tela de resultado

system ("cls || clear");

    printf ("INVERSOR REVERSE!\n\nResultado Final: ");

    for (a = 9; a >= 0; --a) {
        printf ("%.2f ", elemento[a]); }

    return 0;
}