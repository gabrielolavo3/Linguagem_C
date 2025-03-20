/* 
Descrição  : Ler 5 números inteiros e imprimir: 1- a quantidade de números ímpares; 2 - a quantidade de números negativos; 
3 - maior e o menor número; 4 - a média de números pares; 5 - a média de números inseridos! (função)
Professor  : Carlos Anderson Santos de Jesus 
Autor(a)   : Gabriel S. Olavo
Data atual : 28/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declaração de constante

#define b 5

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a;
    int somaPar = 0, somaGeral = 0;
    int maior = INT_MIN, menor = INT_MAX;
    int numero[b], negativo = 0, impar = 0, par = 0;
    float mediaPar, mediaGeral;

// Solcitando dados

    printf ("CHECK UP! Leitor e Tratador de Números\n\n");
    for (a = 0; a < b; a++) {
        printf ("Informe o %dº valor: ", a+1);
        scanf ("%d", &numero[a]);

        if (numero[a] < 0) {
            negativo++; }
        
        if (numero[a] % 2 != 0) {
            impar++;
        
        } else {
            par++;
            somaPar+=numero[a]; }

// Aplicando o maior e menor número e somando todos os valores

        somaGeral+=numero[a];
        maior = numero[a] > maior ? numero[a] : maior;
        menor = numero[a] < menor ? numero[a] : menor;
    }

// Calculando as médias

    mediaPar = (float)somaPar / par;
    mediaGeral = (float)somaGeral / b;

// Tela de resultado

system ("cls");

    printf ("CHECK UP!\nConclusão das Informações\n\n");
    printf ("Quantidade de números ímpares: %d\n", impar);
    printf ("Quantidade de números negativos: %d\n", negativo);
    printf ("Maior número: %d\n", maior);
    printf ("Menor número: %d\n", menor);
    printf ("Média de números pares: %.2f\n", mediaPar);
    printf ("Média total dos números: %.2f\n", mediaGeral);

    return 0;
}
