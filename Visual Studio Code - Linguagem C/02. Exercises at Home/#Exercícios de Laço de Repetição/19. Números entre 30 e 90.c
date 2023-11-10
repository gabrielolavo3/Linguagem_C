/* 
Descrção  : Ler 10 números e imprimir quantos números, dentre os que
foram digitados, estão entre 30 e 90! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 10/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a = 0;
    float numero;
    int soma_Numero = 0;

// Solicitando dados

    printf ("CONTADOR ENTRE NÚMEROS\nDescubra quais números estão entre 30 e 90\n\n");

for (a = 1; a <= 10; a++) {

        printf ("Digite o %dº número: ", a);
        scanf ("%f", &numero);

        if (numero > 30 && numero < 90) {
            soma_Numero++; } 

    while (numero < 0) {

        printf ("Número inváido! Informe um valor positivo...\n\n");
        printf ("Digite o %dº número: ", a);
        scanf ("%f", &numero); 
        
        if (numero > 30 && numero < 90) {
        soma_Numero++; }            
    } 
} 

// Tela de resultado

    system ("cls");
    printf ("CONTADOR ENTRE NÚMEROS\n\n");
    printf ("Quantidade de números entre 30 e 90: %d", soma_Numero);

    return 0;
}