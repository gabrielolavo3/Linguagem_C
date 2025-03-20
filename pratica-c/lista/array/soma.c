/* 
Descrção   : Ler um vetor com 5 números e imprimir a soma total dos valores e os valores digitados pelo usuário, linha por linha! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 26/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a;
    float numero[5];
    float soma;

// Solicitando dados

    printf ("AMOUNT! Somando Valores\n\n");
    for (a = 0; a < 5; a++) {
        printf ("Informe o %dº número: ", a+1);
        scanf ("%f", &numero[a]);

        soma += numero[a]; }

// Tela de resultado

system ("cls || clear");

    printf ("AMOUNT! Conclusão dos Dados\n\n");
    for (a = 0; a < 5; a++) {
        printf ("%dº número digitado: %.2f\n", a+1, numero[a]); }
    
    printf ("\nResultado da soma dos valores: %.2f\n", soma);

    return 0;
}