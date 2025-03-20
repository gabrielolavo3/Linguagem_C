/* 
Descrção   : Ler um vetor de 30 posições e imprimir os números pares, os que são maiores que a média geral
e o maior e menor valor! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 22/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a;
    int soma = 0;
    int numero[30];
    int maior = __WINT_MIN__;
    int menor = __INT_MAX__;
    float media;

// Solicitando dados

    printf ("MATHEMÁTIKUS! LEITOR E ANALISADOR DE NÚMEROS INTEIROS\n\n");
    for (a = 0; a < 30; a++) {
        printf ("Informe o %dº número: ", a+1);
        scanf ("%d", &numero[a]);

// Somando os valores e verificando o maior e menor número

        maior = numero[a] > maior ? numero[a] : maior;
        menor = numero[a] < menor ? numero[a] : menor;

        soma += numero[a]; }

// Calculando a média dos números

    media = soma / 30;

// Tela de resultado

system ("cls || clear");

    printf ("MATHEMÁTIKUS!\n\n");
    printf ("Valores maiores que a média dos números: ");
    
    for (a = 0; a < 30; a++) {
        if (numero[a] > media) {
            printf ("%d ", numero[a]); }
    }

    printf ("\n\n");
    printf ("Valores pares: ");
    for (a = 0; a < 30; a++) {
        if (numero[a] % 2 == 0) {
            printf ("%d ",numero[a]); } 
    }

    printf ("\n\n");
    printf ("Valor máximo e mínimo\n\n");
    printf ("Maior número: %d\n", maior);
    printf ("Menor número: %d\n", menor);

    return 0;
}