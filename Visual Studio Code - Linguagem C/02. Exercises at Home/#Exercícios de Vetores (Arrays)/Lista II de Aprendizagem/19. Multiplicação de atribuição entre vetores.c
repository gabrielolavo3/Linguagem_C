/* 
Descrção   : Ler um vetor com 10 números e criar o 2º vetor que armazena os valores o 1º vetor mutiplicado por 5. No final, 
imprimir todos os valores em coluna, linha por linha! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 26/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a; 
    float b[10];
    float numeros[10];

// Solicitando dados

    printf ("MULTIPLICADOR NUMBER!\n\n");
    for (a = 0; a < 10; a++) {
        printf ("Informe o %dº número do conjunto: ", a+1);
        scanf ("%f", &numeros[a]); }

// Calculando e atribuindo valores ao 2º vetor
 
    for (a = 0; a < 10; a++) {
        b[a] = numeros[a] * 5; }

// Tela de resultado

system ("cls || clear");

    printf ("MULTIPLICADOR NUMBER! Conclusão das Operações\n\n");
    for (a = 0; a < 10; a++) {
        printf ("%dº valor inserido: %.2f \tResultado da multiplicação: %.2f\n", a+1, numeros[a], b[a]); }

    return 0;
}