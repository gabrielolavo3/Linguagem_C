/* 
Descri��o  : Ler e imprimir o nome, a idade e o endere�o de uma pessoa e armazenar esses dados em uma estrutura! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 08/12/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declara��o de struct e fun��o

void titulo ( ) {
    system ("cls || claer");
    printf ("LUMINOUS BRAS! Centro de Armazenamento de Dados\n\n");
}

struct dados {
    int idade;
    char nome[250];
    char endereco[250];
};

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�vel de acesso

    struct dados pessoa;

// Solicitando dados

    titulo ( );
    printf ("Informe o seu nome: ");
    gets (pessoa.nome);
    printf ("Informe a sua idade: ");
    scanf ("%d", &pessoa.idade);
    fflush (stdin);
    printf ("Informe o seu endere�o: ");
    gets (pessoa.endereco);

// Tela de resultado

    titulo ( );
    printf ("Nome: %s\n", pessoa.nome);
    printf ("Idade: %d\n", pessoa.idade);
    printf ("Endere�o: %s\n", pessoa.endereco);

    return 0;
}