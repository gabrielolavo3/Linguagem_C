#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declaração de constante

struct dados_aluno {
    char nome[250];
    int idade;
};

int main ( ) {
    setlocale (LC_ALL, "");

// Declaração de variáveis

/*Struct dados_aluno -> tipo de dado | Aluno ->  variável para acesso do struct*/
   struct dados_aluno aluno;

// Solicitando dados

    printf ("Digite o nome do aluno: ");
    gets (aluno.nome);
    printf ("Digite a idade do aluno: ");
    scanf ("%d", &aluno.idade);

// Tela de resultado

system ("cls || clear");

    printf ("Nome: %s\n", aluno.nome);
    printf ("Idade: %d\n", aluno.idade);

    return 0;
}
