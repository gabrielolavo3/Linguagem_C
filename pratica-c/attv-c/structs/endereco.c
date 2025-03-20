#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declaração de struct

struct dados_pessoais {
    
    int idade;
    char nome[250], endereco[250];
};

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variável de acesso

    struct dados_pessoais Dados;

// Solicitando dados

    printf ("Informe o seu nome: ");
    gets (Dados.nome);
    printf ("Informe a sua idade: ");
    scanf ("%d", &Dados.idade);
    fflush (stdin);
    printf ("Informe o seu endereço: ");
    gets (Dados.endereco);

// Tela de resultado

system ("cls || clear");

    printf ("Nome: %s\n", Dados.nome);
    printf ("Idade: %d\n", Dados.idade);
    printf ("Endereço: %s\n", Dados.endereco);

    return 0;
}
