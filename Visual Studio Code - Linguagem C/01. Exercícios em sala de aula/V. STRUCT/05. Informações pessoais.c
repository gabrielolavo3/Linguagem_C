#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declaração de variáveis

#define b 2

// Declaração de struct

struct informaçoes {
  char nome[250], data_de_nascimento[250], RG[250], CPF[250];
};

int main ( ) {
    setlocale (LC_ALL, "");

// Declaração de variáveis
    
    int a;
    struct informaçoes pessoa[b];

// Solicitando dados

    for (a = 0; a < b; a++) {
        printf ("Informe o nome da %dª pessoa: ", a+1);
        gets (pessoa[a].nome);
        printf ("Informe a data de nascimento: ");
        gets (pessoa[a].data_de_nascimento);
        printf ("Informe os dígitos do RG: ");
        gets (pessoa[a].RG);
        printf ("Informe os dígitos do CPF: ");
        gets (pessoa[a].CPF);
        
        setbuf (stdin, 0);
        printf ("\n");
    }

// Tela de resultado

system ("cls || clear");

    for (a = 0; a < b; a++) {
        printf ("Nome da %dº pessoa: %s\n", a+1, pessoa[a].nome);
        printf ("Data de nascimento: %s\n", pessoa[a].data_de_nascimento);
        printf ("RG: %s\n", pessoa[a].RG);
        printf ("CPF: %s\n", pessoa[a].CPF);
    }
    
    return 0;
}
