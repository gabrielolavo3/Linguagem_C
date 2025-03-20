/* 
Descrição  : Programar um conversor de medidas - temperatura e comprimento - que solicita um valor e a
escala de conversão. Imprima o resultado da conversão. O programa encerrar ao digitar 0! (função)
Professor  : Carlos Anderson Santos de Jesus 
Autor(a)   : Gabriel S. Olavo
Data atual : 07/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int menu;
    float resultado, valor;

// Solicitando dados

do {
    printf ("CONVERSOR ZHAO LI\n");
    printf ("Selecione a conversão\n\n");
    printf ("Código | \t\tDescrição\n");
    printf ("   1   | Converter de Celsius (Cº) para Fahrenheit (Fº)\n   2   | Converter de Fahrenheit (Fº) para Celsius (Cº)\n");
    printf ("   3   | Converter de Kilometro (Km) para Milhas (Mi)\n   4   | Converter de Milhas (Mi) para Kilometro (Km)\n\n");
    printf ("Digite a apção desejada (Insira '0' para interromper o programa!): ");
    scanf ("%d", &menu);

switch (menu) {

// Tela de conversão I

case 1:
    printf ("\nTransformador de Temperatura\n\n");
    printf ("Informe o valor da temperatura: ");
    scanf ("%f", &valor);

    system ("cls");
    printf ("CONVERSOR ZHAO LI -  Resultado!\n\n");
    printf ("Valor informado: %.2f Celsius\n", valor);
    printf ("Resultado da conversão: %.2f Fahrenheits\n\n", resultado = (valor * 9/5) + 32);
    break;

// Tela de conversão II

case 2:
    printf ("\nTransformador de Temperatura\n\n");
    printf ("Informe o valor da temperatura: ");
    scanf ("%f", &valor);

    system ("cls");
    printf ("CONVERSOR ZHAO LI -  Resultado!\n\n");
    printf ("Valor informado: %.2f Fahrenheits\n", valor);
    printf ("Resultado da conversão: %.2f Celsius\n\n", resultado  = (valor - 32) * 5/9);
    break;

// Tela de conversão III

case 3:
    printf ("\nTransformador de Comprimento\n\n");
    printf ("Informe o valor da unidade: ");
    scanf ("%f", &valor);

    system ("cls");
    printf ("CONVERSOR ZHAO LI - Resultado!\n\n");
    printf ("Valor informado: %.2f Kilometro\n", valor);
    printf ("Resultado da conversão: %.2f Milhas\n\n", resultado  = valor / 1.609);
    break;

// Tela de conversão IV

case 4:
    printf ("\nTransformador de Comprimento\n\n");
    printf ("Informe o valor da unidade: ");
    scanf ("%f", &valor);

    system ("cls");
    printf ("CONVERSOR ZHAO LI - Resultado!\n\n");
    printf ("Valor informado: %.2f Milhas\n", valor);
    printf ("Resultado da conversão: %.2f Kilometro\n\n", resultado  = valor * 1.609);;
    break;

default:
    if (menu < 0 || menu > 4) {
    printf ("\nOpção Inválida! Selecione novamente...\n\n"); }
    break; }

} while (menu != 0);

// Mensagem de saída do programa

if (menu == 0) {
    system ("cls");
    printf ("OBRIGADO POR UTILIZAR O CONVERSOR ZHAO LI!"); }

    return 0;
}
