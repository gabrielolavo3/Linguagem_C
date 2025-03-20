/* 
Descri��o  : Solicitar 2 n�meros e realizar  e imprimir a opera��o (+,-,*,/) desejada pelo usu�rio! (fun��o)
Professor  : Carlos Anderson Santos de Jesus 
Autor(a)   : Gabriel S. Olavo
Data atual : 07/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "");

// Declara��o de vari�veis

    int opcao;
    float Primeiro_numero, Segundo_numero, expressao_Matematica;
    char operacao [250];

// Solicitando dados

    printf ("VODEX GREEN - CALCULADORA MATEM�TICA\n\n");
    printf ("Informe o 1� n�mero: ");
    scanf ("%f", &Primeiro_numero);
    printf ("Informe o 2� n�mero: ");
    scanf ("%f", &Segundo_numero);

do {
    printf ("\nESCOLHA OPERA��O MATEM�TICA\n");
    printf ("C�digo | \tDescri��o\n");
    printf ("   1   | Opera��o de adi��o\n");
    printf ("   2   | Opera��o de subtra��o\n");
    printf ("   3   | Opera��o de multiplica��o\n");
    printf ("   4   | Opera��o de divis�o\n\n");
    printf ("Selecione a opera��o desejada: ");
    scanf ("%d", &opcao);

switch (opcao) {
    
    case 1:
    expressao_Matematica = Primeiro_numero + Segundo_numero;
    strcpy (operacao, "Adi��o");
    break;

    case 2:
    expressao_Matematica = Primeiro_numero - Segundo_numero;
    strcpy (operacao, "Subtra��o");
    break;

    case 3:
    expressao_Matematica = Primeiro_numero * Segundo_numero;
    strcpy (operacao, "Multiplica��o");
    break;

    case 4:
    expressao_Matematica = Primeiro_numero / Segundo_numero;
    strcpy (operacao, "Divis�o");
    break;

default:
    system ("cls || clear");
    printf ("Opera��o inv�lida! Selecione novamente...\n\n");
    break; }

} while (opcao < 1 || opcao > 4);

// Tela de resultado

system ("cls || clear");

    printf ("VODEX GREEN - CALCULADORA MATEM�TICA\n\n");
    printf ("1� n�mero informado: %.2f\n", Primeiro_numero);
    printf ("2� n�mero informado: %.2f\n\n", Segundo_numero);
    printf ("Opera��o matem�tica: %s\n", operacao);
    printf ("Resultado final: %.2f", expressao_Matematica);

    return 0;
}