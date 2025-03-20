/* 
Descr��o   : Ler um vetor com 5 n�meros e imprimir a soma total dos valores e os valores digitados pelo usu�rio, linha por linha! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 26/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int a;
    float numero[5];
    float soma;

// Solicitando dados

    printf ("AMOUNT! Somando Valores\n\n");
    for (a = 0; a < 5; a++) {
        printf ("Informe o %d� n�mero: ", a+1);
        scanf ("%f", &numero[a]);

        soma += numero[a]; }

// Tela de resultado

system ("cls || clear");

    printf ("AMOUNT! Conclus�o dos Dados\n\n");
    for (a = 0; a < 5; a++) {
        printf ("%d� n�mero digitado: %.2f\n", a+1, numero[a]); }
    
    printf ("\nResultado da soma dos valores: %.2f\n", soma);

    return 0;
}