/* 
Descrição  : Solicitar ao usuário um número inteiro positivo e fazer a 
contagem regressiva a partir desse número até zero! (função)
Professor  : Carlos Anderson Santos de Jesus 
Autor(a)   : Gabriel S. Olavo
Data atual : 07/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

int a = 0, numero;

// Solicitando dados

do {
    printf ("CONTADOR REGRESSIVO!\n\n");
    printf ("Informe um número: ");
    scanf ("%d", &numero);

// Imprimindo mensagem de possível erro

    if (numero <= 0) {
        system ("cls || clear");
        printf ("ERRO! Esse número não é positivo ou inviável para a contagem\n\n");
    } else {
        printf ("Contagem iniciada!\n\n");
        sleep (3); }

} while (numero <= 0);
    
// Tela de resultado

    printf ("Resultado da Contagem\n\n");
    for (a = numero; a >= 0; a--) {
        printf ("%d, ", a); 
        sleep (1); }

    return 0;
}
