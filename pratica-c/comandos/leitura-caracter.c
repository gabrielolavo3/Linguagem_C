#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    char caracter[2];
    char valor;

// Solicitando dados

    printf ("Digite uma letra do alfabeto: ");
    caracter[0] = getchar(); 
    fflush (stdin);
    printf ("Digite um número entre 0 e 9: ");
    valor = getc (stdin); 
    fflush (stdin);
    printf ("Digite uma letra em maiúsculo: ");
    caracter[1] = fgetc (stdin);

/*
Getchar - Ler um caracter e retorna  o dado digitado para a variável
Getc - retorna o dado, mas permitir a invasão no espaço de memória
Fgetc - retorna o dado e não permiti a invasão no espaço de memória

O stdin informa por onde a informação vai ser inserida: teclado */
    
// Tela de resultado

    printf ("\nLetra inserida: %c\n", caracter[0]);
    printf ("Número inserido: %c\n", valor);
    printf ("Letra maiúscula: %c\n", caracter[1]);

    return 0;
}