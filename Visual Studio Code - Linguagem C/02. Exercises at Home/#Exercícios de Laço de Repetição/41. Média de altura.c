/* 
Descrição   : Criar um algoritmo que receba N idades e alturas. No final, calcular e imprimir a média de altura das pessoas que
tem acima de 50 anos! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 27/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a = 0;
    int idade;
    int contador = 0;
    float altura, somaAltura = 0, media;

// Solicitando dados

    printf ("DATA COUNTER! Avaliando dados\n\n");
    do { 
        printf ("Informe a idade da %dª pessoa: ", a+1);
        scanf ("%d", &idade);
        printf ("Informe a altura: ");
        scanf ("%f", &altura);
        
        a++;

// Contabilizando a quantidade de iterações e somando os valores da altura

        if (idade > 0) {
            contador++; }

        if (idade > 50) {
            somaAltura+=altura; }

    } while (idade < 0 || altura > 0);

// Calculando a média de altura das pessoas que têm mais de 50 anos

    media = somaAltura / contador;

// Tela de resultado

system ("cls || clear");

    printf ("DATA COUNTER!\n\n");
    if (media > 0) {
        printf ("Média de altura de pessoas com mais de 50 anos: %.2f", media);

    } else {
        printf ("Ops! Não há pessoas com idade a partir de 50 anos"); }

    return 0;
}