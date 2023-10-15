/* 
Descrição  : Ler um número e imprimir o número sucessor e antecessor a ele! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 16/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    float numero, antecessor, sucessor;

// Solicitando dados

    printf ("INDICADOR DE ANTECESSOR E SUCESSOR DE NÚMEROS!\n\n");
    printf ("Digite um número: ");
    scanf ("%f", &numero);

// Definindo o sucessor, o antecessor e limpando o terminal

sucessor = numero + 1;
antecessor = numero - 1;
system ("cls || clear");

// Tela de resultado

    printf ("INDICADOR DE ANTECESSOR E SUCESSOR DE NÚMEROS!\n\n");
    printf ("Valor informado: %.0f\n", numero);
    printf ("Sucessor do número: %.0f\n", sucessor);
    printf ("Antecessor do número: %.0f", antecessor);

    return 0;
}
