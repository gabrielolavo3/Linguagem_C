/* 
Descr��o   : Ler 8 n�meros inteiros e positivos no vetor A e atribuir ao vetor B, de mesmo tamanho, o valor de cada 
posi��o de A multiplicado por 3. No final, imprimir os novos valores de B! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 23/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int a, b[8];
    int numeros[8];

// Solicitando dados

    printf ("STREAMING! ALOCADOR DE VALORES\n\n");
    for (a = 0; a < 8; a++) {
        do {
            printf ("Digite o %d� n�mero da posi��o A: ", a+1);
            scanf ("%d", &numeros[a]);

            if (numeros[a] < 0) {
                printf ("\nValor inv�lido! Informe um n�mero positivo para prosseguir\n\n"); }

        } while (numeros[a] < 0);

    b[a] = numeros[a] * 3; }

    printf ("\nMultiplicando e transferindo valores para a posi��o B");
    sleep(2);
    printf (".");
    sleep(2);
    printf (".");
    sleep(2);
    printf (".");

// Tela de resultado

system ("cls || clear");

    printf ("STREAMING!\nResultado Final\n\n");
    for (a = 0; a < 8; a++) {
        printf ("%d� valor da posi��o B: %d\n",a+1, b[a]); }

    return 0;
}