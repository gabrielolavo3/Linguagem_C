/* 
Descri��o  : Criar uma fun��o que recebe, por par�metro, um valor inteiro e positivo e retorna o somat�rio desse valor! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 10/12/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declara��o de fun��es

int somatorio (int numero) {
    return numero + numero;
}

void titulo ( ) {
    system ("cls || clear");
    printf ("SOMME COMPACTE! Leitor e Somador de 1 Algarismo\n\n");
}

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis de par�metro

    int valor, soma;

// Solicitando dados

    titulo ( );
    do {
        printf ("Digite um n�mero: ");
        scanf ("%d", &valor);

        if (valor <= 0) {
            printf ("\nALGARISMO INV�LIDO! Por favro, informe um n�mero positivo e inteiro\n\n"); }

    } while (valor <= 0);

// Tela de resultado

    titulo ( );
    printf ("Valor digitado: %d\n", valor);
    printf ("Soma do valor: %d", soma = somatorio(valor));

    return 0 ;
}