#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declaração de struct

struct livraria {
    float preco;
    char nome[250], autor[250], categoria[250];
};

int main ( ) {
    setlocale (LC_ALL, "");

// Declaração de variáveis

    int a;
    struct livraria livros[3];

// Solicitando dados

    for (a = 0; a < 3; a++) {
        printf ("Informe o nome do %dº livro: ", a+1);
        gets (livros[a].nome);
        printf ("Informe o autor: ");
        gets (livros[a].autor);
        printf ("Informe a categoria: ");
        gets (livros[a].categoria);
        printf ("Informe o preço: ");
        scanf ("%f", &livros[a].preco);
        
        printf ("\n");
        fflush (stdin);
    }

// Tela de resultado

system ("cls || clear");

    for (a = 0; a < 3; a++) {
        printf ("Nome do %dº livro: %s\n", a+1, livros[a].nome);
        printf ("Autor do livro: %s\n", livros[a].autor);
        printf ("Categoria do livro: %s\n", livros[a].categoria);
        printf ("Preço do exemplar: R$ %.2f\n", livros[a].preco);
        printf ("\n");
    }

    return 0;
}
