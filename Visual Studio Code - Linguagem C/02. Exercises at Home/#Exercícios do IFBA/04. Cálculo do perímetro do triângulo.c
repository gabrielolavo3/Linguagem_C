/* 
Descrição  : Calcular o perí­metro do triângulo a partir do tamanho dos 3 lados da figura! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 16/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    float primeiroLado, segundoLado, terceiroLado, perimetro;

// Solicitando dados
    
    printf ("CALCULADORA DO PERÍMETRO DO TRIÂNGULO!\n\n");
    printf ("Informe o valor do 1º lado do triângulo: ");
    scanf ("%f", &primeiroLado);
    printf ("Informe o valor do 2º lado do triângulo: ");
    scanf ("%f", &segundoLado);
    printf ("Informe o valor do 3º lado do triãngulo: ");
    scanf ("%f", &terceiroLado);

system ("cls || clear");

// Tela de resultado e calculando o valor do perímetro

    printf ("CALCULADORA DO PERÍMETRO DO TRIÂNGULO!\n");
    printf ("Resumo das informações\n\n");
    printf ("Valor da 1ª lateral do triânngulo: %.2f\n", primeiroLado);
    printf ("Valor da 2ª lateral do triânngulo: %.2f\n", segundoLado);
    printf ("Valor da 3ª lateral do triânngulo: %.2f\n\n", terceiroLado);
    printf ("Perímetro do triânngulo: %.2f", perimetro = primeiroLado + segundoLado + terceiroLado);

    return 0;
}