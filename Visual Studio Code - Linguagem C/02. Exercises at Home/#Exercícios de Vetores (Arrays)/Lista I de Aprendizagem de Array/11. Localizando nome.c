/* 
Descrção   : Ler um vetor com 10 nomes de pessoas e pedir  e ler do usuário digite um nome qualquer de pessoa. Imprima a mensagem "Encontrado", se o nome estiver armazenado no vetor ou "Não encontrado" caso contrário! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 25/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int i;
    char nomes[10][250] = {"Gabriel Olavo", "Luís Otávio", "Maria Nazaré", "Lene de Jesus", "Renato Barreto", "Camile Oliveira", "Ana Souza", "Paula Gomes", "Rafael Silva", "Andrei Vieira"};
    char nome_de_pessoa[250];
    char resultado[250];

// Solicitando dados

    printf ("MOUNTAIN OF DATA! BUSCA POR DESAPARECIDO\n\n");
    printf ("Informe o 1º nome e o sobrenome da pessoa que procura: ");
    gets (nome_de_pessoa);

    printf ("\nBuscando informações");
    for (i = 0; i < 3; i++) {
        printf (".");
        sleep (1); }

// Validando se o nome digitado consta no vetor

    if (strcmp(nome_de_pessoa, nomes) == 0) {
        strcpy (resultado, "Nome localizado!");
    
    } else {
        strcpy (resultado, "Nome não localizado no banco de dados!"); }

// Tela de resultado

system ("cls || clear");

    printf ("MOUNTAIN OF DATA!\nConclusão da Busca\n\n");
    printf ("Resultado final: %s", resultado);

    return 0;
}