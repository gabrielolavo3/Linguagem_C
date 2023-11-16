/* 
Descri��o  : Ler 5 n�meros ! (fun��o)
Professor  : Carlos Anderson Santos de Jesus
Autor(a)   : Gabriel S. Olavo
Data atual : 16/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "");

// Declara��o de vari�veis

    int a, b = 5;
    int numero[b], pares = 0, impares = 0, maior = 0, menor = 99999;
    int somaPar = 0, somaImpar = 0, positivo = 0, negativo = 0;
    float mediaGeral, mediaPar, mediaImpar, soma_de_Numeros = 0;

// Solicitando dados

    printf ("HIGH CUBE - VERIFICADOR DE VALORES INTEIROS\n\n");
    for (a = 0; a < b; a++) {
        printf ("Informe o %d n�mero: ", a+1);
        scanf ("%d", &numero[a]);

        soma_de_Numeros += numero[a];

// Verificando maior, menor, positivo e negativo

        numero [a] > 0 ? positivo++ : negativo++; 
        maior = numero[a] > maior ? numero[a] : maior;
        menor = numero[a] < menor ? numero[a] : menor;

// Acumulando e somando os pares e �mpares

        if (numero[a] % 2 == 0) {
            somaPar += numero[a]; 
            pares++;

        } else {
            somaImpar += numero[a];
            impares++; }
    }

// Calculando a m�dia de pares, �mpares e a m�dia de todos os valores

    mediaGeral = soma_de_Numeros / b;
    mediaPar = (float)somaPar / (float)pares;
    mediaImpar = (float)somaImpar / (float)impares;

// Tela de resultado

system ("cls");

    printf ("HIGH CUBE - VERIFICADOR DE VALORES INTEIROS\n\n");
    printf ("Quantidade de n�meros pares: %d\n", pares);
    printf ("Quantidade de n�meros �mpares: %d\n", impares);
    printf ("Quantidade de n�meros positivos: %d\n", positivo);
    printf ("Quantidade de n�meros negativos: %d\n\n", negativo);
    printf ("Quantidade de valores inseridos: %d\n", b);
    printf ("Maior n�mero: %d\n", maior);
    printf ("Menor n�mero: %d\n\nM�dias dos Valores\n\n", menor);
    printf ("M�dia de pares: %.2f\n", mediaPar);
    printf ("M�dia de �mpares: %.2f\n", mediaImpar);
    printf ("M�dia total: %.2f\n\n", mediaGeral);
    
    printf ("Ordem Inversa dos Valores\n\n");
    for (a = --b; a >= 0; a--) {
        printf ("%d� valor: %d\n", a+1, numero[a]); }
    
    return 0;
}