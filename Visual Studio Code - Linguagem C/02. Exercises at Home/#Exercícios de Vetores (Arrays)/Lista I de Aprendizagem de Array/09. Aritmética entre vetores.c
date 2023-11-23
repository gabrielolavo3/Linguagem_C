/* 
Descr��o   : Ler 2 vetores - A e B -, cada um com 20 n�meros inteiros e imprimir a soma, subtra��o e multiplica��o entre cada 
posi��o dos 2 vetores! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 23/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int a, b;
    int numeros[20], valor[20];
    int subtracao[20], soma[20], multiplicacao[20];

// Solicitando dados

    printf ("ARITM�THIKUS! FA�A OPERA��ES ENTRE DIVERSOS N�MEROS\n\n");
    for (a = 0; a < 20; a++) {
        printf ("Digite o %d� n�mero da posi��o A: ", a+1);
        scanf ("%d", &numeros[a]); }
    
    printf ("\n");

    for (b = 0; b < 20; b++) {
        printf ("Digite o %d� n�mero da posi��o B: ", b+1);
        scanf ("%d", &valor[b]); }

// Tela de resultado e calculando a soma, multiplica��o e subtra��o dos vetores

system ("cls || clear");

    printf ("ARITM�THIKUS!\n\n");
    for (a = 0; a < 20; a++) {
        printf ("Subtra��o da %d� posi��o: %d\n", a+1, subtracao[a] = numeros[a] - valor[a]); }
    
    printf ("\n");

    for (a = 0; a < 20; a++) {
        printf ("Soma da %d� posi��o: %d\n", a+1, soma[a] = numeros[a] + valor[a]); }

    printf ("\n");

    for (a = 0; a < 20; a++) {
        printf ("Multiplica��o da %d� posi��o: %d\n", a+1, multiplicacao[a] = numeros[a] * valor[a]); }

    return 0;
}