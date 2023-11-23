/* 
Descr��o   : Ler um vetor com 20 n�meros e imprimir a soma dos 10 primeiros elementos digitados! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 23/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int a;
    float soma = 0;
    float numeros[20];

// Solicitando dados

    printf ("SIGMA PLUS! SOMAT�RIO DE N�MEROS\n\n");
    for (a = 0; a < 20; a++) {
        printf ("Informe o %d� valor: ", a+1);
        scanf ("%f", &numeros[a]); }

// Somando os 10 primeiros n�meros

    for (a = 0; a < 10; a++) {
        soma += numeros[a]; }

// Tela de resultado

system ("cls || clear");

    printf ("SIGMA PLUS! SOMAT�RIO DE N�MEROS\n\n");
    printf ("Resultado da soma dos 10 primeiros elementos: %.2f", soma);

    return 0;
}