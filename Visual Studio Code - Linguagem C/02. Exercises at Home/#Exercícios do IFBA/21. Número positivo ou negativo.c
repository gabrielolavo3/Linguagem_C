/* 
Descrição  : Ler 1 número inteiro e imprimir se ele é positivo ou negativo! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 27/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int numero;
    char resultado [250];

// Solicitando dados

    printf ("IDENTIFICADOR DE NÚMERO POSITIVO OU NEGATIVO\n\n");
    printf ("Informe um valor: ");
    scanf ("%d", &numero);

// Verificando se o número é positivo ou negativo

    if (numero >= 1 ) {
        strcpy (resultado, "O número é positivo");
    
    } else {
        strcpy (resultado, "O número é negativo"); }
    
// Tela de resultado

system ("cls || clear");

    printf ("IDENTIFICADOR DE NÚMERO POSITIVO OU NEGATIVO\n\n");
    printf ("Número inserido: %d\n", numero);
    printf ("Resultado: %s", resultado);

    return 0;
}
