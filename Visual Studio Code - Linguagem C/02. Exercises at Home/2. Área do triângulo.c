#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");
    
// Declara��o de vari�veis

float base, altura, area;

// Coletando dados

    printf ("Informe o comprimento da base do tri�ngulo: ");
    scanf ("%f", &base);
    printf ("Informe o comprimento da altura do tri�ngulo: ");
    scanf ("%f", &altura);

// C�lculo da �rea do tri�ngulo

area = (base * altura) / 2;
system ("cls || clear");

// Tela de resultado

    printf ("C�lculo da �rea \n\n");
    printf ("Base do tri�ngulo: %.2f \n", base);
    printf ("Altura do tri�ngulo: %.2f \n\n", altura);
    printf ("F�rmula do C�lculo da �rea: �rea = (base * altura) / 2 \n");
    printf ("Resultado final: %.2f", area);
    
    return 0;
}