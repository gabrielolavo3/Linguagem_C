/* 
Descri��o  : Usar um vetor para ler a idade e nome de 5 pessoas. No final, imprimir os dados! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 11/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int a, b = 5;
    int idade [b];
    char nome [b] [250];

// Solicitando dados

    printf ("STEEL MOUNTAIN!\nColeta de dados de funcion�rios\n\n");
    for (a = 0; a < b; a++) {
        printf ("Informe o nome do %d� colaborador: ", a+1);
        gets (nome[a]);
        printf ("Informe a idade do %d� colaborador: ", a+1);
        scanf ("%d", &idade[a]); 
        fflush(stdin);
        printf ("\n"); }

// Tela de resultado

    printf ("Armazenando dados no Database..\n");
    sleep (3);

    system ("cls || clear");
    printf ("STEEL MOUNTAIN!\nResumo dos dados inseridos\n\n");
    for (a = 0; a < b; a++) {
        printf ("Nome e idade do %d� colaborador: %s - %d anos\n", a+1, nome[a], idade[a]); }

    return 0;
}