/* 
Descrição  : Calcular a área e o perímetro da circunferência a partir do valor do raio! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 14/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");
    
// Declaração de variáveis

    float raio, area, perimetro;

// Solicitando dados

    printf ("CALCULADORA DE ÁREA E PERÍMETRO DA CIRCUNFERÊNCIA!\n\n");
    printf ("Informe o valor do raio da circunferência: ");
    scanf ("%f", &raio);

// Calculando a área, o perímetro e limpando o terminal

area = 2 * 3.14 * (raio * raio);
perimetro = 2 * 3.14 * raio;

system ("cls");

// Tela de resultado

    printf ("CALCULADORA DE ÁREA E PERÍMETRO DA CIRCUNFERÊNCIA!\n");
    printf ("Resumo dos calculos\n\n");
    printf ("Raio da circunferência: %.2f Cm\n\n", raio);
    printf ("Resultado da área e do perímetro\n\n");
    printf ("Área da circunferência: %.2f Cm\n", area);
    printf ("Perímetro da circunferência: %.2f Cm\n", perimetro);
    
    return 0;
}