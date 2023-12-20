/* 
Descrição  : Criar um livro de receita struct para armazenar as variáveis vetorizadas. Com isso leia 5 receitas com nome, 
quantidade de ingredientes e o nome de cada ingrediente. No final, imprima os dados da receita que o usuário busca entre todas! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 09/12/2023 */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Declaração de constante, função e struct

#define MAX_RECEITA 5

void titulo ( ) {
    system ("cls || clear");
    printf ("BOOK IN BOX! LIVRO DE RECEITA ONLINE\n\n");
}

struct receita {
    char nome[25];
    char* nome_de_ingredientes[MAX_RECEITA][25];
    int quantidade_de_Ingredientes;
};

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis comuns e de acesso

    int a, b;
    int contador = 0, quantidade;
    char busca_de_receita[25];
    struct receita livro[MAX_RECEITA];

// Solicitando dados

    titulo ( );
    for (a = 0; a < MAX_RECEITA; a++) {
        printf ("Digite o nome da %dª receita: ", a+1);
        gets (livro[a].nome);
        printf ("Informe a quantidade de ingrediente: ");
        scanf ("%d", &livro[a].quantidade_de_Ingredientes);
        fflush (stdin);

        quantidade = livro[a].quantidade_de_Ingredientes;

        for (b = 0; b < quantidade; b++) {
            printf ("Informe o nome do %dº ingrediente: ", b+1);
            gets (livro[a].nome_de_ingredientes[b]);
        }
        fflush (stdin);
        printf ("\n");
    }

    printf ("Informe o nome da receita que deseja buscar: ");
    gets (busca_de_receita);

// Tela de resultado

    titulo ( );
    for (a = 0; a < MAX_RECEITA; a++) {
        if (strcmp (busca_de_receita, livro[a].nome) == 0) {
            printf ("Nome da receita: %s\n", livro[a].nome);
            printf ("Quantidade de ingredientes: %d\n\n", quantidade);

            for (b = 0; b < quantidade; b++) {
                printf ("Nome do %dº ingrediente: %s\n", b+1, livro[a].nome_de_ingredientes[b]); } 
            
        } else {
            contador++; }
    }

    if (contador == MAX_RECEITA) {
        titulo ( );
        printf ("A receita pesquisada não estar registrada na Book in Box!");
    }

    return 0;
}