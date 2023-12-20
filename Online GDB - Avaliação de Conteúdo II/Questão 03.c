/* 
Descrição  : Em uma struct, armazenar variáveis para ler os dados de um livro: nome, autor, categoria e preço. 
Com uma função, aplicar 10% de desconto no valor. No final, imprimir as informações, juntamente com o preço novo! (função)
Professor  : Carlos Anderson Santos de Jesus
Autor(a)   : Gabriel S. Olavo
Data atual : 14/12/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declaração de constante, struct e funções

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

// Declaração de variáveis comuns e de acesso

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
    printf ("Digite o preço: ");
    scanf ("%f", &livro.preco);

// Tela de resultado

    titulo ( );
    printf ("Nome do livro: %s\n", livro.nome);
    printf ("Autor: %s\n", livro.autor);
    printf ("Categoria: %s\n", livro.categoria);
    printf ("Preço do livro: R$ %.2f\n\n", livro.preco);

    valorAtualizado = novoPreco(livro.preco);

    printf ("Novo valor do livro: R$ %.2f\n", valorAtualizado);

    return 0;
}