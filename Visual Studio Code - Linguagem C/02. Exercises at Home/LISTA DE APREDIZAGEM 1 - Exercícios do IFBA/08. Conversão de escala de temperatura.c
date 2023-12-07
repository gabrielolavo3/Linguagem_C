/* 
Descrição  : Ler um valor, a escala de conversão e imprimir a conversão de temperatura de Celsius para Fahrenheit, ou vice-versa! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 16/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    float temperatura, resultado;
    int conversao;
    char escalaFinal [250], escalaPrimaria [250];

// Solicitando dados

    printf ("TEMPERATURE SCALE CONVERTER \n\n");
    printf ("Informe o valor (em Graus) de uma temperatura: ");
    scanf ("%f", &temperatura);
    printf ("\nINSIRA A ESCALA DE GRAUS PARA CONVERSÃO \n\n");
    printf ("Digite '1' para converter de Celsius para Fahrenheit \n");
    printf ("Digite '2' para converter de Fahrenheit para Celsius \n\n");
    
// Definindo e aplicando a escala, e limpando o terminal

do {
    printf ("Informe a escala de temperatura: ");
    scanf ("%d", &conversao);

switch (conversao) {    
case 1:
    resultado = (temperatura * 9/5) + 32;
    strcpy (escalaFinal, "Fahrenheits");
    strcpy (escalaPrimaria, "Celsius");
    break;

case 2:
    resultado = (temperatura - 32) * 5/9;
    strcpy (escalaFinal, "Celsius");
    strcpy (escalaPrimaria, "Fahrenheits"); 
    break;

default:
    printf ("\nA escala informada é INVÁLIDA! Insira a opção novamente...\n");
    break; }

} while (conversao < 1 || conversao > 2);

system ("cls || clear");

// Tela de resultado

    printf ("TEMPERATURE SCALE CONVERTER \n\n");
    printf ("Valor inserido: %.2f %s \n", temperatura, escalaPrimaria);
    printf ("Resultado da Conversão: %.2f %s \n", resultado, escalaFinal);

    return 0;
}