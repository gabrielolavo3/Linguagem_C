#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");
    
// Declaração de variáveis

float base, altura, area;

// Coletando dados

    printf ("Informe o comprimento da base do triângulo: ");
    scanf ("%f", &base);
    printf ("Informe o comprimento da altura do triângulo: ");
    scanf ("%f", &altura);

// Cálculo da área do triângulo

area = (base * altura) / 2;
system ("cls || clear");

// Tela de resultado

    printf ("Cálculo da área \n\n");
    printf ("Base do triângulo: %.2f \n", base);
    printf ("Altura do triângulo: %.2f \n\n", altura);
    printf ("Fórmula do Cálculo da Área: área = (base * altura) / 2 \n");
    printf ("Resultado final: %.2f", area);
    
    return 0;
}
