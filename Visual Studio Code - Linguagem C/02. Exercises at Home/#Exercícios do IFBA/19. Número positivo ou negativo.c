/* 
Descri��o  : Ler 1 n�mero inteiro e imprimir se ele � positivo ou negativo! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 27/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int numero;
    char resultado [250];

// Solicitando dados

    printf ("IDENTIFICADOR DE N�MERO POSITIVO OU NEGATIVO\n\n");
    printf ("Informe um valor: ");
    scanf ("%d", &numero);

// Verificando se o n�mero � positivo ou negativo

    if (numero >= 1 ) {
        strcpy (resultado, "O n�mero � positivo");
    
    } else {
        strcpy (resultado, "O n�mero � negativo"); }
    
// Tela de resultado

system ("cls || clear");

    printf ("IDENTIFICADOR DE N�MERO POSITIVO OU NEGATIVO\n\n");
    printf ("N�mero inserido: %d\n", numero);
    printf ("Resultado: %s", resultado);

    return 0;
}