/* 
Descr��o   : Ler um vetor de 30 posi��es e imprimir os n�meros pares, os que s�o maiores que a m�dia geral
e o maior e menor valor! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 22/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int a;
    int soma = 0;
    int numero[30];
    int maior = __WINT_MIN__;
    int menor = __INT_MAX__;
    float media;

// Solicitando dados

    printf ("MATHEM�TIKUS! LEITOR E ANALISADOR DE N�MEROS INTEIROS\n\n");
    for (a = 0; a < 30; a++) {
        printf ("Informe o %d� n�mero: ", a+1);
        scanf ("%d", &numero[a]);

// Somando os valores e verificando o maior e menor n�mero

        maior = numero[a] > maior ? numero[a] : maior;
        menor = numero[a] < menor ? numero[a] : menor;

        soma += numero[a]; }

// Calculando a m�dia dos n�meros

    media = soma / 30;

// Tela de resultado

system ("cls || clear");

    printf ("MATHEM�TIKUS!\n\n");
    printf ("Valores maiores que a m�dia dos n�meros: ");
    
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
    printf ("Valor m�ximo e m�nimo\n\n");
    printf ("Maior n�mero: %d\n", maior);
    printf ("Menor n�mero: %d\n", menor);

    return 0;
}