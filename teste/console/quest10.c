/* 
Descrição  : Solicitar 2 números e realizar  e imprimir a operação (+,-,*,/) desejada pelo usuário! (função)
Professor  : Carlos Anderson Santos de Jesus 
Autor(a)   : Gabriel S. Olavo
Data atual : 07/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "");

// Declaração de variáveis

    int opcao;
    float Primeiro_numero, Segundo_numero, expressao_Matematica;
    char operacao [250];

// Solicitando dados

    printf ("VODEX GREEN - CALCULADORA MATEMÁTICA\n\n");
    printf ("Informe o 1º número: ");
    scanf ("%f", &Primeiro_numero);
    printf ("Informe o 2º número: ");
    scanf ("%f", &Segundo_numero);

do {
    printf ("\nESCOLHA OPERAÇÃO MATEMÁTICA\n");
    printf ("Código | \tDescrição\n");
    printf ("   1   | Operação de adição\n");
    printf ("   2   | Operação de subtração\n");
    printf ("   3   | Operação de multiplicação\n");
    printf ("   4   | Operação de divisão\n\n");
    printf ("Selecione a operação desejada: ");
    scanf ("%d", &opcao);

switch (opcao) {
    
    case 1:
    expressao_Matematica = Primeiro_numero + Segundo_numero;
    strcpy (operacao, "Adição");
    break;

    case 2:
    expressao_Matematica = Primeiro_numero - Segundo_numero;
    strcpy (operacao, "Subtração");
    break;

    case 3:
    expressao_Matematica = Primeiro_numero * Segundo_numero;
    strcpy (operacao, "Multiplicação");
    break;

    case 4:
    expressao_Matematica = Primeiro_numero / Segundo_numero;
    strcpy (operacao, "Divisão");
    break;

default:
    system ("cls || clear");
    printf ("Operação inválida! Selecione novamente...\n\n");
    break; }

} while (opcao < 1 || opcao > 4);

// Tela de resultado

system ("cls || clear");

    printf ("VODEX GREEN - CALCULADORA MATEMÁTICA\n\n");
    printf ("1º número informado: %.2f\n", Primeiro_numero);
    printf ("2º número informado: %.2f\n\n", Segundo_numero);
    printf ("Operação matemática: %s\n", operacao);
    printf ("Resultado final: %.2f", expressao_Matematica);

    return 0;
}