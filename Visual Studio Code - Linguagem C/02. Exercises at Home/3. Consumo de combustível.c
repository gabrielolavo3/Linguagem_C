#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");
    
// Declara��o de vari�veis
    float distancia, combustivel, media;

// Solicitando dados
    printf ("Informe a dist�ncia percorrida (em KM): ");
    scanf ("%f", &distancia);
    printf ("Informe a quantidade de combust�vel utilizado (em L): ");
    scanf ("%f", &combustivel);

system ("cls || clear");

// Calculando o consumo m�dio de combust�vel
    media = distancia / combustivel;
    
// Tela de resultado
    printf ("KMs percorridos: %.2f Kms \n", distancia);
    printf ("Litros de combust�vel: %.2f L \n", combustivel);
    printf ("Consumo m�dio de combust�vel: %.2f L \n", media);

    return 0;
}