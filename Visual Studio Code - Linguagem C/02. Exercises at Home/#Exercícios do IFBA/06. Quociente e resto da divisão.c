/* 
Descrição  : Ler 2 números inteiros e imprimir o quociente  e o resto da divisão ! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 16/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int primeiroNumero, segundoNumero;
    float quociente, restodaDivisao;

// Solicitando dados

    printf ("MINI CALCULADORA DE DIVISÃO!\n\n");
    printf ("Insira o 1º número: ");
    scanf ("%d", &primeiroNumero);
    printf ("Insira o 2º número: ");
    scanf ("%d", &segundoNumero);

// Calculando o quociente e o resto da divisão

quociente = primeiroNumero / segundoNumero;
restodaDivisao = primeiroNumero % segundoNumero;
system ("cls || clear");

// Tela de resultado

    printf ("MINI CALCULADORA DE DIVISÃO!\n\n");
    printf ("1º número: %.0d\n", primeiroNumero);
    printf ("2º número: %.0d\n", segundoNumero);
    printf ("Quociente da divisão: %.0f\n", quociente);
    printf ("Resto da divisão: %.0f\n", restodaDivisao);

    return 0;
}
