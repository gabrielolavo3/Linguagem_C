/* 
Descr��o   : Ler um vetor com 10 n�meros inteiros e um valor para as vari�veis A, B e C. 
No final, imprimir a quantidade de vezes que os valores de A, B e C apareceram no vetor! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 22/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int x;
    int A, B, C;
    int numeros[10];
    int contador_de_A = 0, contador_de_B = 0, contador_de_C = 0;

// Solicitando dados

    printf ("LOGISTIKOS! COMPARADOR DE N�MEROS\n\n");

    for (x = 0; x < 10; x++) {
        printf ("Informe o %d� n�mero do conjunto: ", x+1);
        scanf ("%d", &numeros[x]);
    }

    printf ("\nDigite o valor da posi��o A: ");
    scanf ("%d", &A);
    printf ("Digite o valor da posi��o B: ");
    scanf ("%d", &B);
    printf ("Digite o valor da posi��o C: ");
    scanf ("%d", &C);

// Acumulando a quantidade de vezes que o vetor foi igual a algum valor da vari�vel A, B e C

    for (x = 0; x < 10; x++) {
        if (numeros[x] == A) {
            contador_de_A++; } }

    for (x = 0; x < 10; x++) {
        if (numeros[x] == B) {
            contador_de_B++; } }

    for (x = 0; x < 10; x++) {
        if (numeros[x] == C) {
            contador_de_C++; } }

// Tela de resultado

system ("cls || clear");

    printf ("LOGISTIKOS!\nResultado Final\n\n");
    printf ("Quantidade de vezes que A apareceu no vetor: %d\n", contador_de_A);
    printf ("Quantidade de vezes que B apareceu no vetor: %d\n", contador_de_B);
    printf ("Quantidade de vezes que C apareceu no vetor: %d\n", contador_de_C);

    return 0;
}