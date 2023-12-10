/* 
Descrição  : Criar uma função que lê 1 valor inteiro e e verifica se o valor é positivo, negativo ou neutro! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 10/12/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Declaração de função

void titulo ( ) {
    system ("cls || clear");
    printf ("TIPAGEM NÚMERICA!\n\n");
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

// Declaração de variáveis

    int numero;
    char conclusao[250];

// Solicitando dados

    titulo ( );
    printf ("Digite um número: ");
    scanf ("%d", &numero);

    tipagem(numero, conclusao);

// Tela de resultado

    titulo ( );
    printf ("Número: %d\n", numero);
    printf ("Resultado: %s", conclusao);

    return 0;
}