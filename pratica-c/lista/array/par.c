/* 
Descrção   : Ler um vetor de 10 posições inteiras e imprimir os números pares! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 19/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a;
    int numeros[10];

// Solicitando dados

    printf ("IDENTIFICADOR DE NÚMERO PAR\n\n");

    for (a = 0; a < 10; a++) {
        printf ("Digite o %dº valor: ", a+1);
        scanf ("%d", &numeros[a]); }

// Tela de resultado

system ("cls || clear");

    printf ("IDENTIFICADOR DE NÚMERO PAR! Resultado Final\n\n");

    for (a = 0; a < 10; a++) {
        if (numeros[a] % 2 == 0) {
            printf ("Valor par do vetor: %d\n", numeros[a]); }
    }

    return 0;
}