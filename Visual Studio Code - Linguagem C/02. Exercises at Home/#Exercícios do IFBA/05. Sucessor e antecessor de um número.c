/* 
Descri��o  : Ler um n�mero e imprimir o n�mero sucessor e antecessor a ele! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 16/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    float numero, antecessor, sucessor;

// Solicitando dados

    printf ("INDICADOR DE ANTECESSOR E SUCESSOR DE N�MEROS!\n\n");
    printf ("Digite um n�mero: ");
    scanf ("%f", &numero);

// Definindo o sucessor, o antecessor e limpando o terminal

sucessor = numero + 1;
antecessor = numero - 1;
system ("cls || clear");

// Tela de resultado

    printf ("INDICADOR DE ANTECESSOR E SUCESSOR DE N�MEROS!\n\n");
    printf ("Valor informado: %.0f\n", numero);
    printf ("Sucessor do n�mero: %.0f\n", sucessor);
    printf ("Antecessor do n�mero: %.0f", antecessor);

    return 0;
}
