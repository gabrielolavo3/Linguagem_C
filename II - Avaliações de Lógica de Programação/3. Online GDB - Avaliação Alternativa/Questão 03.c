#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct dados {
  char nome[250];
  int idade;
  float peso, altura;
};

int main ( ) {
    setlocale (LC_ALL, "");
    
    struct dados pessoa;
    
    printf ("Digite o seu nome: ");
    fgets (pessoa.nome, 250, stdin);
    printf ("Digite a sua idade: ");
    scanf ("%d", &pessoa.idade);
    printf ("Digite a sua altura: ");
    scanf ("%f", &pessoa.altura);
    printf ("Digite o seu peso: ");
    scanf ("%f", &pessoa.peso);
    
    system ("clear");
    
    printf ("Nome do usuário: %s", pessoa.nome);
    printf ("Idade do usuário: %d\n", pessoa.idade);
    printf ("Altura do usuário: %.2f\n", pessoa.altura);
    printf ("Peso do usuário: %.2f", pessoa.peso);
    
    return 0;
}
