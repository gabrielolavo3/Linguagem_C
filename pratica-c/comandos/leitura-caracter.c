#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    char caracter[2];
    char valor;

// Solicitando dados

    printf ("Digite uma letra do alfabeto: ");
    caracter[0] = getchar(); 
    fflush (stdin);
    printf ("Digite um n�mero entre 0 e 9: ");
    valor = getc (stdin); 
    fflush (stdin);
    printf ("Digite uma letra em mai�sculo: ");
    caracter[1] = fgetc (stdin);

/*
Getchar - Ler um caracter e retorna  o dado digitado para a vari�vel
Getc - retorna o dado, mas permitir a invas�o no espa�o de mem�ria
Fgetc - retorna o dado e n�o permiti a invas�o no espa�o de mem�ria

O stdin informa por onde a informa��o vai ser inserida: teclado */
    
// Tela de resultado

    printf ("\nLetra inserida: %c\n", caracter[0]);
    printf ("N�mero inserido: %c\n", valor);
    printf ("Letra mai�scula: %c\n", caracter[1]);

    return 0;
}