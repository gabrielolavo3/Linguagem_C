#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declaração de struct

struct dados_pessoais {
    int idade;
    float peso;
    float altura;
    char nome[250];
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
    printf ("Informe o seu peso: ");
    scanf ("%f", &Dados.peso);
    printf ("Informe a sua altura: ");
    scanf ("%f", &Dados.altura);

// Tela de resultado

system ("cls || clear");

    printf ("Nome: %s\n", Dados.nome);
    printf ("Idade: %d\n", Dados.idade);
    printf ("Peso: %.2f\n", Dados.peso);
    printf ("Altura: %.2f\n", Dados.altura);

    return 0;
}
