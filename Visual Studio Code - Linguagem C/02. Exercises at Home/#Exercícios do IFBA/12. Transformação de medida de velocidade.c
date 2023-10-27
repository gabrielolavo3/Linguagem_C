#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    float velocidade;
    float resultado;
    int menu;
    char medidaFinal [250];

// Solicitando dados

do {
    printf ("CONVERSOR DE ESCALA DE VELOCIDADE\n\n");
    printf ("Insira o valor da velocidade: ");
    scanf ("%f", &velocidade);
    printf ("\nSELECIONE A CONVERS�O DE MEDIDA \n\n");
    printf ("C�digo | \tDescri��o\n");
    printf ("   1   | Converter de Km/h para M/s\n");
    printf ("   2   | Converter de M/s para Km/h\n\n");
    printf ("Selecione a ap��o desejada: ");
    scanf ("%d", &menu);

// Aplicando e calculando a convers�o 

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
    printf ("Op��o selecionada � INV�LIDA!\n\n");
    break; }

} while (menu != 1 && menu != 2);

// Tela de resultado

system ("cls || clear");

    printf ("CONVERSOR DE ESCALA DE VELOCIDADE\n\n");
    printf ("Valor informado: %.2f\n", velocidade);
    printf ("Resultado da convers�o: %.2f %s\n", resultado, medidaFinal);

  return 0;
}