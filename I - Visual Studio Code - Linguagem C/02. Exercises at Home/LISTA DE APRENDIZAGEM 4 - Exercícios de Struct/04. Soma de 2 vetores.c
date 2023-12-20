/* 
Descri��o  : Crie um algoritmo para ler e imprimir a soma de 2 vetores, e usando estrutura para armazenar as vari�veis! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 08/12/2023 */ 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declara��o de struct, constante e fun��o

#define G 2

void titulo ( ) {
    system ("cls || clear");
    printf ("SIGMA UNDERLINE! Leitor e Somador de N�meros\n\n");
}

struct somar {
    float soma;
    float valor[G];
}; 

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�vel comuns e de acesso

    int a;
    struct somar operacao;

// Solicitando dados

    titulo ( );
    for (a = 0; a < G; a++) {
        printf ("Informe o %d� valor: " , a+1);
        scanf ("%f", &operacao.valor[a]);

        operacao.soma += operacao.valor[a];
    }

// Tela de resultado

    titulo ( );
    for (a = 0; a < G; a++) {
        printf ("%d� valor: %.2f\n", a+1, operacao.valor[a]);
    }

    printf ("Soma dos algarismos: %.2f\n", operacao.soma);

    return 0;
}