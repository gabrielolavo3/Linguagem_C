/* 
Descrição  : Ler 5 números ! (função)
Professor  : Carlos Anderson Santos de Jesus
Autor(a)   : Gabriel S. Olavo
Data atual : 16/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "");

// Declaração de variáveis

    int a, b = 5;
    int numero[b], pares = 0, impares = 0, maior = 0, menor = 99999;
    int somaPar = 0, somaImpar = 0, positivo = 0, negativo = 0;
    float mediaGeral, mediaPar, mediaImpar, soma_de_Numeros = 0;

// Solicitando dados

    printf ("HIGH CUBE - VERIFICADOR DE VALORES INTEIROS\n\n");
    for (a = 0; a < b; a++) {
        printf ("Informe o %d número: ", a+1);
        scanf ("%d", &numero[a]);

        soma_de_Numeros += numero[a];

// Verificando maior, menor, positivo e negativo

        numero [a] > 0 ? positivo++ : negativo++; 
        maior = numero[a] > maior ? numero[a] : maior;
        menor = numero[a] < menor ? numero[a] : menor;

// Acumulando e somando os pares e ímpares

        if (numero[a] % 2 == 0) {
            somaPar += numero[a]; 
            pares++;

        } else {
            somaImpar += numero[a];
            impares++; }
    }

// Calculando a média de pares, ímpares e a média de todos os valores

    mediaGeral = soma_de_Numeros / b;
    mediaPar = (float)somaPar / (float)pares;
    mediaImpar = (float)somaImpar / (float)impares;

// Tela de resultado

system ("cls");

    printf ("HIGH CUBE - VERIFICADOR DE VALORES INTEIROS\n\n");
    printf ("Quantidade de números pares: %d\n", pares);
    printf ("Quantidade de números ímpares: %d\n", impares);
    printf ("Quantidade de números positivos: %d\n", positivo);
    printf ("Quantidade de números negativos: %d\n\n", negativo);
    printf ("Quantidade de valores inseridos: %d\n", b);
    printf ("Maior número: %d\n", maior);
    printf ("Menor número: %d\n\nMédias dos Valores\n\n", menor);
    printf ("Média de pares: %.2f\n", mediaPar);
    printf ("Média de ímpares: %.2f\n", mediaImpar);
    printf ("Média total: %.2f\n\n", mediaGeral);
    
    printf ("Ordem Inversa dos Valores\n\n");
    for (a = --b; a >= 0; a--) {
        printf ("%dº valor: %d\n", a+1, numero[a]); }
    
    return 0;
}