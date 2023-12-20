/* 
Descri��o  : Criar uma fun��o que l� 1 valor inteiro e e verifica se o valor � positivo, negativo ou neutro! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 10/12/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Declara��o de fun��o

void titulo ( ) {
    system ("cls || clear");
    printf ("TIPAGEM N�MERICA!\n\n");
}

void tipagem (int valor, char* resultado) {

    if (valor > 0) {
        strcpy (resultado, "Positivo!"); 
    
    } else if (valor < 0) {
        strcpy (resultado, "Negativo!"); 
    
    } else {
        strcpy (resultado, "Neutro!"); }
}

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int numero;
    char conclusao[250];

// Solicitando dados

    titulo ( );
    printf ("Digite um n�mero: ");
    scanf ("%d", &numero);

    tipagem(numero, conclusao);

// Tela de resultado

    titulo ( );
    printf ("N�mero: %d\n", numero);
    printf ("Resultado: %s", conclusao);

    return 0;
}