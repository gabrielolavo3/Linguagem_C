#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");
    
// Declaração de variáveis
    float distancia, combustivel, media;

// Solicitando dados
    printf ("Informe a distância percorrida (em KM): ");
    scanf ("%f", &distancia);
    printf ("Informe a quantidade de combustível utilizado (em L): ");
    scanf ("%f", &combustivel);

system ("cls || clear");

// Calculando o consumo médio de combustível
    media = distancia / combustivel;
    
// Tela de resultado
    printf ("KMs percorridos: %.2f Kms \n", distancia);
    printf ("Litros de combustível: %.2f L \n", combustivel);
    printf ("Consumo médio de combustível: %.2f L \n", media);

    return 0;
}
