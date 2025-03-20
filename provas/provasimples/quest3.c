/* 
Descrição  : Ler 6 números inteiros e imprimir a quantidade de pares e ímpares! (função)
Professor  : Carlos Anderson Santos de Jesus
Autor(a)   : Gabriel S. Olavo
Data atual : 02/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a = 0;
    int numeros;
    int par = 0;
    int impar = 0;

// Solicitando dados

    printf ("IDENTIFICADOR DE PARES E ÍMPARES\n\n");

for (a = 1; a <= 6; a++) {

    printf ("Digite o %dº número: ", a);
    scanf ("%d", &numeros); 

// Calculando e acumulando os pares e ímpares

    if (numeros % 2 == 0) {
        par++;
        
    } else {
        impar++; } 
}

// Tela de resultado

system ("cls");

    printf ("IDENTIFICADOR DE PARES E ÍMPARES - Resultado\n\n");
    printf ("Quantidade de pares: %d\n", par);
    printf ("Quantidade de ímpares: %d\n", impar);

    return 0;
}