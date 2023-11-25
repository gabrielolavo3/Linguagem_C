/* 
Descr��o   : Ler um vetor com 10 nomes de pessoas e pedir  e ler do usu�rio digite um nome qualquer de pessoa. 
Escrever a mensagem ?ACHEI?, se o nome estiver armazenado no vetor ou ?N�O ACHEI? caso contr�rio! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 25/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int i;
    char nomes[10][250] = {"Gabriel Olavo", "Lu�s Ot�vio", "Maria Nazar�", "Lene de Jesus", "Renato Barreto", "Camile Oliveira", "Ana Souza", "Paula Gomes", "Rafael Silva", "Andrei Vieira"};
    char nome_de_pessoa[250];
    char resultado[250];

// Solicitando dados

    printf ("MOUNTAIN OF DATA! BUSCA POR DESAPARECIDO\n\n");
    printf ("Informe o 1� nome e o sobrenome da pessoa que procura: ");
    gets (nome_de_pessoa);

    printf ("\nBuscando informa��es");
    for (i = 0; i < 3; i++) {
        printf (".");
        sleep (1); }

// Validando se o nome digitado consta no vetor

    if (strcmp(nome_de_pessoa, nomes) == 0) {
        strcpy (resultado, "Nome localizado!");
    
    } else {
        strcpy (resultado, "Nome n�o localizado no banco de dados!"); }

// Tela de resultado

system ("cls || clear");

    printf ("MOUNTAIN OF DATA!\nConclus�o da Busca\n\n");
    printf ("Resultado final: %s", resultado);

    return 0;
}