/* 
Descri��o  : Calcular o per�metro do tri�ngulo a partir do tamanho dos 3 lados da figura! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 16/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    float primeiroLado, segundoLado, terceiroLado, perimetro;

// Solicitando dados
    
    printf ("CALCULADORA DO PER�METRO DO TRI�NGULO!\n\n");
    printf ("Informe o valor do 1� lado do tri�ngulo: ");
    scanf ("%f", &primeiroLado);
    printf ("Informe o valor do 2� lado do tri�ngulo: ");
    scanf ("%f", &segundoLado);
    printf ("Informe o valor do 3� lado do tri�ngulo: ");
    scanf ("%f", &terceiroLado);

system ("cls || clear");

// Tela de resultado e calculando o valor do per�metro

    printf ("CALCULADORA DO PER�METRO DO TRI�NGULO!\n");
    printf ("Resumo das informa��es\n\n");
    printf ("Valor da 1� lateral do tri�nngulo: %.2f\n", primeiroLado);
    printf ("Valor da 2� lateral do tri�nngulo: %.2f\n", segundoLado);
    printf ("Valor da 3� lateral do tri�nngulo: %.2f\n\n", terceiroLado);
    printf ("Per�metro do tri�nngulo: %.2f", perimetro = primeiroLado + segundoLado + terceiroLado);

    return 0;
}