/* 
Descr��o  : Ler 10 n�meros e imprimir quantos n�meros, dentre os que
foram digitados, est�o entre 30 e 90! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 10/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int a = 0;
    float numero;
    int soma_Numero = 0;

// Solicitando dados

    printf ("CONTADOR ENTRE N�MEROS\nDescubra quais n�meros est�o entre 30 e 90\n\n");

for (a = 1; a <= 10; a++) {

        printf ("Digite o %d� n�mero: ", a);
        scanf ("%f", &numero);

        if (numero > 30 && numero < 90) {
            soma_Numero++; } 

    while (numero < 0) {

        printf ("N�mero inv�ido! Informe um valor positivo...\n\n");
        printf ("Digite o %d� n�mero: ", a);
        scanf ("%f", &numero); 
        
        if (numero > 30 && numero < 90) {
        soma_Numero++; }            
    } 
} 

// Tela de resultado

    system ("cls");
    printf ("CONTADOR ENTRE N�MEROS\n\n");
    printf ("Quantidade de n�meros entre 30 e 90: %d", soma_Numero);

    return 0;
}