/* 
Descrição  : Criar uma função que recebe, por parâmetro, um valor inteiro e positivo e retorna o somatório desse valor! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 10/12/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declaração de funções

int somatorio (int numero) {
    return numero + numero;
}

void titulo ( ) {
    system ("cls || clear");
    printf ("SOMME COMPACTE! Leitor e Somador de 1 Algarismo\n\n");
}

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis de parâmetro

    int valor, soma;

// Solicitando dados

    titulo ( );
    do {
        printf ("Digite um número: ");
        scanf ("%d", &valor);

        if (valor <= 0) {
            printf ("\nALGARISMO INVÁLIDO! Por favro, informe um número positivo e inteiro\n\n"); }

    } while (valor <= 0);

// Tela de resultado

    titulo ( );
    printf ("Valor digitado: %d\n", valor);
    printf ("Soma do valor: %d", soma = somatorio(valor));

    return 0 ;
}