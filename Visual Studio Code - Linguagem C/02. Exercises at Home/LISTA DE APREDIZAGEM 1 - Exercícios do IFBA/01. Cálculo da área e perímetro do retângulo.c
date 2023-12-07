/* 
Descrição  : Calcular a área e o perímetro do retângulo ao inserir o tamanho da base e a altura! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 14/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    float base, altura, area, perimetro;

// Solicitando dados

    printf ("CALCULADORA DE ÁREA E PERÍMETRO DO RETÂNGULO!\n\n");
    printf ("Informe o valor da base (em Cm) do retângulo: ");
    scanf ("%f", &base);
    printf ("Informe o valor da altura (em Cm) do retângulo: ");
    scanf ("%f", &altura);

// Calculando a área, o perímetro e limpando o terminal

area = base * altura;
perimetro = 2 * (base + altura);
system ("cls || clear");

// Tela de resultado

    printf ("CALCULADORA DE ÁREA E PERÍMETRO DO RETÂNGULO!\n");
    printf ("Resumo dos calculos\n\n");
    printf ("Base do retângulo: %.2f Cm\n", base);
    printf ("Altura do retângulo: %.2f Cm\n\n", altura);
    printf ("Resultado da área e do perímetro\n");
    printf ("Área do retângulo: %.2f Cm\n", area);
    printf ("Perímetro do retângulo: %.2f Cm\n", perimetro);

    return 0;
}