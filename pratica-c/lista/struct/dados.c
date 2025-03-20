/* 
Descrição  : Ler e imprimir o nome, a idade e o endereço de uma pessoa e armazenar esses dados em uma estrutura! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 08/12/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declaração de struct e função

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

// Declaração de variável de acesso

    struct dados pessoa;

// Solicitando dados

    titulo ( );
    printf ("Informe o seu nome: ");
    gets (pessoa.nome);
    printf ("Informe a sua idade: ");
    scanf ("%d", &pessoa.idade);
    fflush (stdin);
    printf ("Informe o seu endereço: ");
    gets (pessoa.endereco);

// Tela de resultado

    titulo ( );
    printf ("Nome: %s\n", pessoa.nome);
    printf ("Idade: %d\n", pessoa.idade);
    printf ("Endereço: %s\n", pessoa.endereco);

    return 0;
}