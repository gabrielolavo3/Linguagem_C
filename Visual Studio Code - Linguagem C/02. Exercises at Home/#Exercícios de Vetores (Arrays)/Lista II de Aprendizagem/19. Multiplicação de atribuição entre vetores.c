/* 
Descr��o   : Ler um vetor com 10 n�meros e criar o 2� vetor que armazena os valores o 1� vetor mutiplicado por 5. No final, 
imprimir todos os valores em coluna, linha por linha! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 26/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int a; 
    float b[10];
    float numeros[10];

// Solicitando dados

    printf ("MULTIPLICADOR NUMBER!\n\n");
    for (a = 0; a < 10; a++) {
        printf ("Informe o %d� n�mero do conjunto: ", a+1);
        scanf ("%f", &numeros[a]); }

// Calculando e atribuindo valores ao 2� vetor
 
    for (a = 0; a < 10; a++) {
        b[a] = numeros[a] * 5; }

// Tela de resultado

system ("cls || clear");

    printf ("MULTIPLICADOR NUMBER! Conclus�o das Opera��es\n\n");
    for (a = 0; a < 10; a++) {
        printf ("%d� valor inserido: %.2f \tResultado da multiplica��o: %.2f\n", a+1, numeros[a], b[a]); }

    return 0;
}