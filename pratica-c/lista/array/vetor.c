/* 
Descrção   : Ler 8 números inteiros e positivos no vetor A e atribuir ao vetor B, de mesmo tamanho, o valor de cada 
posição de A multiplicado por 3. No final, imprimir os novos valores de B! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 23/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a, b[8];
    int numeros[8];

// Solicitando dados

    printf ("STREAMING! ALOCADOR DE VALORES\n\n");
    for (a = 0; a < 8; a++) {
        do {
            printf ("Digite o %dº número da posição A: ", a+1);
            scanf ("%d", &numeros[a]);

            if (numeros[a] < 0) {
                printf ("\nValor inválido! Informe um número positivo para prosseguir\n\n"); }

        } while (numeros[a] < 0);

    b[a] = numeros[a] * 3; }

    printf ("\nMultiplicando e transferindo valores para a posição B");
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
        printf ("%dº valor da posição B: %d\n",a+1, b[a]); }

    return 0;
}