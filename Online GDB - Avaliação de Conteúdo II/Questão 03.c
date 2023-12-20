/* 
Descri��o  : Em uma struct, armazenar vari�veis para ler os dados de um livro: nome, autor, categoria e pre�o. 
Com uma fun��o, aplicar 10% de desconto no valor. No final, imprimir as informa��es, juntamente com o pre�o novo! (fun��o)
Professor  : Carlos Anderson Santos de Jesus
Autor(a)   : Gabriel S. Olavo
Data atual : 14/12/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declara��o de constante, struct e fun��es

#define A 250

struct livro {
    char nome[A];
    char autor[A];
    char categoria[A];
    float preco;
};

void titulo () {
    system ("cls || clear");
    printf ("BIBLIOTECA IN BOX\n\n");
}

float novoPreco (float valor) {
    float newpreco;
    return newpreco = valor - (valor * 0.10);
}

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis comuns e de acesso

    float valorAtualizado;
    struct livro livro;

// Solicitando dados

    titulo ( );
    printf ("Digite o nome do livro: ");
    gets (livro.nome);
    printf ("Digite o nome do autor: ");
    gets (livro.autor);
    printf ("Digite a categoria: ");
    gets (livro.categoria);
    printf ("Digite o pre�o: ");
    scanf ("%f", &livro.preco);

// Tela de resultado

    titulo ( );
    printf ("Nome do livro: %s\n", livro.nome);
    printf ("Autor: %s\n", livro.autor);
    printf ("Categoria: %s\n", livro.categoria);
    printf ("Pre�o do livro: R$ %.2f\n\n", livro.preco);

    valorAtualizado = novoPreco(livro.preco);

    printf ("Novo valor do livro: R$ %.2f\n", valorAtualizado);

    return 0;
}