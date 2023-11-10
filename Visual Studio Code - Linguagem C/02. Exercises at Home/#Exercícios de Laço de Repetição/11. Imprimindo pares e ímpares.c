/* 
Descr��o  : Ler 1 n�mero e imprimir todos os n�meros pares e �mpares, em ordem crescente,
at� o n�mero digitado pelo usu�rio! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 10/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "");

// Declara��o de vari�veis

    int i = 0, numero;

// Solicitando dados

    printf ("CONTADOR DE N�MEROS PARES E �MPARES\n\n");
    printf ("Digite um n�mero: ");
    scanf ("%d", &numero);

// Imprimindo n�meros pares  

    printf ("\nN�meros pares at� %d: ", numero);
    for (i = 0; i <= numero; i+= 2) {
    printf ("%d, ", i); } 

// Imprimindo n�meros �mpares  

    printf ("\nN�meros �mpar at� %d: ", numero);
    for (i = 1; i <= numero; i+= 2) {
    printf ("%d, ", i); } 
    printf ("\n"); 

    return 0;
}