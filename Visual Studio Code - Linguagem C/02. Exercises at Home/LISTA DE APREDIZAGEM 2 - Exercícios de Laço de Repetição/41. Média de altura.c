/* 
Descri��o   : Criar um algoritmo que receba N idades e alturas. No final, calcular e imprimir a m�dia de altura das pessoas que
tem acima de 50 anos! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 27/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int a = 0;
    int idade;
    int contador = 0;
    float altura, somaAltura = 0, media;

// Solicitando dados

    printf ("DATA COUNTER! Avaliando dados\n\n");
    do { 
        printf ("Informe a idade da %d� pessoa: ", a+1);
        scanf ("%d", &idade);
        printf ("Informe a altura: ");
        scanf ("%f", &altura);
        
        a++;

// Contabilizando a quantidade de itera��es e somando os valores da altura

        if (idade > 0) {
            contador++; }

        if (idade > 50) {
            somaAltura+=altura; }

    } while (idade < 0 || altura > 0);

// Calculando a m�dia de altura das pessoas que t�m mais de 50 anos

    media = somaAltura / contador;

// Tela de resultado

system ("cls || clear");

    printf ("DATA COUNTER!\n\n");
    if (media > 0) {
        printf ("M�dia de altura de pessoas com mais de 50 anos: %.2f", media);

    } else {
        printf ("Ops! N�o h� pessoas com idade a partir de 50 anos"); }

    return 0;
}