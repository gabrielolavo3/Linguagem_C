/* 
Descr��o   : Ler um vetor de 10 posi��es inteiras e imprimir os n�meros pares! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 19/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int a;
    int numeros[10];

// Solicitando dados

    printf ("IDENTIFICADOR DE N�MERO PAR\n\n");

    for (a = 0; a < 10; a++) {
        printf ("Digite o %d� valor: ", a+1);
        scanf ("%d", &numeros[a]); }

// Tela de resultado

system ("cls || clear");

    printf ("IDENTIFICADOR DE N�MERO PAR! Resultado Final\n\n");

    for (a = 0; a < 10; a++) {
        if (numeros[a] % 2 == 0) {
            printf ("Valor par do vetor: %d\n", numeros[a]); }
    }

    return 0;
}