#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    float velocidade;
    float resultado;
    int menu;
    char medidaFinal [250];

// Solicitando dados

do {
    printf ("CONVERSOR DE ESCALA DE VELOCIDADE\n\n");
    printf ("Insira o valor da velocidade: ");
    scanf ("%f", &velocidade);
    printf ("\nSELECIONE A CONVERSÃO DE MEDIDA \n\n");
    printf ("Código | \tDescrição\n");
    printf ("   1   | Converter de Km/h para M/s\n");
    printf ("   2   | Converter de M/s para Km/h\n\n");
    printf ("Selecione a apção desejada: ");
    scanf ("%d", &menu);

// Aplicando e calculando a conversão 

switch (menu) {
case 1:
    resultado = velocidade / 3.6;
    strcpy (medidaFinal, "Metros por Segundo (m/s)");
    break;

case 2:
    resultado = velocidade * 3.6;
    strcpy (medidaFinal, "Kilometro por horas (km/h)");
    break;

default:
system ("cls || clear");
    printf ("Opção selecionada é INVÁLIDA!\n\n");
    break; }

} while (menu != 1 && menu != 2);

// Tela de resultado

system ("cls || clear");

    printf ("CONVERSOR DE ESCALA DE VELOCIDADE\n\n");
    printf ("Valor informado: %.2f\n", velocidade);
    printf ("Resultado da conversão: %.2f %s\n", resultado, medidaFinal);

  return 0;
}