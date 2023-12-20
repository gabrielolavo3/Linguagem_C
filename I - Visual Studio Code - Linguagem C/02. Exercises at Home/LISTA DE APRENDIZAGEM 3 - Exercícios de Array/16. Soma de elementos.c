/* 
Descrção   : Ler um vetor com 20 números e imprimir a soma dos 10 primeiros elementos digitados! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 23/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a;
    float soma = 0;
    float numeros[20];

// Solicitando dados

    printf ("SIGMA PLUS! SOMATÓRIO DE NÚMEROS\n\n");
    for (a = 0; a < 20; a++) {
        printf ("Informe o %dº valor: ", a+1);
        scanf ("%f", &numeros[a]); }

// Somando os 10 primeiros números

    for (a = 0; a < 10; a++) {
        soma += numeros[a]; }

// Tela de resultado

system ("cls || clear");

    printf ("SIGMA PLUS! SOMATÓRIO DE NÚMEROS\n\n");
    printf ("Resultado da soma dos 10 primeiros elementos: %.2f", soma);

    return 0;
}