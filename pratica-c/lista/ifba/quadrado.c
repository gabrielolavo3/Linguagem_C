/* 
Descrição  : Calcular a área e o perímetro do quadrado ao inserir o tamanho de 2 lados! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 14/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    float primeiroLado, segundoLado, area, perimetro;

// Solicitando dados e validando os valores digitados

    printf ("CALCULADORA DE ÁREA E PERÍMETRO DO QUADRADO!\n");
    printf ("Informe valores iguais \n\n");

do {
    printf ("Informe o valor do 1º lado (em Cm) do quadrado: ");
    scanf ("%f", &primeiroLado);
    printf ("Informe o valro do 2º lado (em Cm) do quadrado: ");
    scanf ("%f", &segundoLado);

    if (primeiroLado != segundoLado) {
        printf ("\nOPS! Os valores informados são distintos. Insira os valores novamente...\n\n"); }
    
} while (primeiroLado != segundoLado);

// Calculando a área, o perímetro e limpando o terminal

area = primeiroLado * segundoLado;
perimetro = primeiroLado + segundoLado;
system ("cls || clear");

// Tela de resultado

    printf ("CALCULADORA DE ÁREA E PERÍMETRO DO QUADRADO!\n");
    printf ("Resumo dos calculos\n\n");
    printf ("Base do quadrado: %.2f Cm\n", primeiroLado);
    printf ("Altura do quadrado: %.2f Cm\n\n", segundoLado);
    printf ("Resultado da área e do perímetro\n");
    printf ("Área do quadrado: %.2f Cm\n", area);
    printf ("Perímetro do quadrado: %.2f Cm\n", perimetro);

    return 0;
}