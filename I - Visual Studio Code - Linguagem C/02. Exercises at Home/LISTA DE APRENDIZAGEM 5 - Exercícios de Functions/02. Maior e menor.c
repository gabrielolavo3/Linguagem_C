/* 
Descri��o  : Criar uma fun��o que l� 50 valores inteiros e retorna o maior e o menor deles! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 10/12/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declara��o de fun��es e constante

#define G 50

void titulo ( ) {
    system ("cls || clear");
    printf ("ANALYSEUR! Leitor e Verificador de N�meros\n\n");
}

void MAX_MIN (int numero[]) {
    int a;
    int maior = INT_MIN, menor = INT_MAX;
    
    for (a = 0; a < G; a++) {
        maior = numero[a] > maior ? numero[a] : maior;
        menor = numero[a] < menor ? numero[a] : menor;
    }
    printf ("\nMaior n�mero: %d\n", maior);
    printf ("Menor n�mero: %d\n", menor);
}

int main ( ) {
    setlocale (LC_ALL, "");

// Declara��o de vari�veis

    int a, valor[G];

// Solicitando dados

    titulo ( );
    for (a = 0; a < G; a++) {
        printf ("Digite o %d� n�mero: ", a+1);
        scanf ("%d", &valor[a]);
    }

// Tela de resultado
    
    titulo ( );
    for (a = 0; a < G; a++) {
        printf ("%d� n�mero: %d\n", a+1, valor[a]);
    }
    MAX_MIN(valor);

    return 0;
}