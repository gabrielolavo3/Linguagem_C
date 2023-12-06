#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

// Declaração de variáveis

    int idade;
    float peso;
    char sexo;
    char nome [250];
    char sobrenome [250];

// Solicitando dados

    printf ("Digite a sua idade: ");
    scanf ("%d", &idade); 
    printf ("Digite o seu peso: ");
    scanf ("%f", &peso);

// Limpando input do cache
fflush (stdin); 

    printf ("Informe o seu sexo: ");
    scanf ("%c", &sexo);

// Limpando input do cache
fflush (stdin); 

    printf ("Informe o seu nome: ");
    fgets (nome, 250, stdin); 
    nome [strcspn (nome, "\n")] = 0;

// Limpando input do cache
fflush (stdin); 

    printf ("Informe o seu sobrenome: ");
    gets (sobrenome);

// Limpando o terminal
system ("cls || clear");

// Tela de resultado

    printf ("Idade: %d \n", idade);
    printf ("Peso: %.2f \n", peso);
    printf ("Peso: %c \n", sexo);
    printf ("Nome: %s \n", nome);
    printf ("Sobrenome: %s \n", sobrenome);

    return 0;
    
}
