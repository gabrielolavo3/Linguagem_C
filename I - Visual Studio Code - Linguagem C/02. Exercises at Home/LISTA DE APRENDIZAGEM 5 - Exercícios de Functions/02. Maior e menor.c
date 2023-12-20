/* 
Descrição  : Criar uma função que lê 50 valores inteiros e retorna o maior e o menor deles! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 10/12/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declaração de funções e constante

#define G 50

void titulo ( ) {
    system ("cls || clear");
    printf ("ANALYSEUR! Leitor e Verificador de Números\n\n");
}

void MAX_MIN (int numero[]) {
    int a;
    int maior = INT_MIN, menor = INT_MAX;
    
    for (a = 0; a < G; a++) {
        maior = numero[a] > maior ? numero[a] : maior;
        menor = numero[a] < menor ? numero[a] : menor;
    }
    printf ("\nMaior número: %d\n", maior);
    printf ("Menor número: %d\n", menor);
}

int main ( ) {
    setlocale (LC_ALL, "");

// Declaração de variáveis

    int a, valor[G];

// Solicitando dados

    titulo ( );
    for (a = 0; a < G; a++) {
        printf ("Digite o %dº número: ", a+1);
        scanf ("%d", &valor[a]);
    }

// Tela de resultado
    
    titulo ( );
    for (a = 0; a < G; a++) {
        printf ("%dº número: %d\n", a+1, valor[a]);
    }
    MAX_MIN(valor);

    return 0;
}