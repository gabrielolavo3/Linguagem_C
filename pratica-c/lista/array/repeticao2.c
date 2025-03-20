/* 
Descrção   : Ler um vetor de 10 posições e verificar se existem valores iguais e os imprimir! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 02/12/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a, b, contador;
    float vetor[10];

// Solicitando dados

    printf ("ASSIMILATOR! Comparador e Analisador de Números\n\n");
    for (a = 0; a < 10; a++) {
        printf ("Informe o %dº número: ", a+1);
        scanf ("%f", &vetor[a]);
    }

// Tela de resultado de percorrendo o vetor duas vezes para efetuar a comparação

system ("cls || clear");

    printf ("ASSIMILATOR! Comparador e Analisador de Números\n\n");
    for (a = 0; a < 10; a++) {
        printf ("%dº valor: %.2f\n", a+1, vetor[a]);
    }

    printf ("\n");

    for (a = 0; a < 10; a++) {
        for (b = a + 1; b < 10; b++) {
            if (vetor[a] == vetor[b]) {
                printf ("Valor repetido: %.2f\n", vetor[b]); } 

/* Caso não haja valores iguais em cada iteração, a variável será atualizada +1 */            

            if (vetor[a] != vetor[b]) {
                contador++; }
        }
    }

/* Mensagem de exibição caso todo o vetor não haja valores repetidos */

    if (contador == 10) {
        printf ("Resultado: Não há valores repetidos"); }

    return 0;
}
