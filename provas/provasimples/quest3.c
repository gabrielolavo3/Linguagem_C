/* 
Descri��o  : Ler 6 n�meros inteiros e imprimir a quantidade de pares e �mpares! (fun��o)
Professor  : Carlos Anderson Santos de Jesus
Autor(a)   : Gabriel S. Olavo
Data atual : 02/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int a = 0;
    int numeros;
    int par = 0;
    int impar = 0;

// Solicitando dados

    printf ("IDENTIFICADOR DE PARES E �MPARES\n\n");

for (a = 1; a <= 6; a++) {

    printf ("Digite o %d� n�mero: ", a);
    scanf ("%d", &numeros); 

// Calculando e acumulando os pares e �mpares

    if (numeros % 2 == 0) {
        par++;
        
    } else {
        impar++; } 
}

// Tela de resultado

system ("cls");

    printf ("IDENTIFICADOR DE PARES E �MPARES - Resultado\n\n");
    printf ("Quantidade de pares: %d\n", par);
    printf ("Quantidade de �mpares: %d\n", impar);

    return 0;
}