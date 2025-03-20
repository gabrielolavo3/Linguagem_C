/* 
Descrição  : Ler uma temperatura e imprimir a condição climática. Caso seja maior que 25, ensolarado;
caso seja entre 15 e 25, é nublado; caso seja menor do que 15, é chuvoso! (função)
Professor  : Carlos Anderson Santos de Jesus 
Autor(a)   : Gabriel S. Olavo
Data atual : 07/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    float temperatura;
    char resultado [250];

// Solicitando dados

    printf ("ZHAO - A HISTÓRIA CHINESA NÃO CONTADA! THE GAME!\n");
    printf ("Teste de Condição Climática\n\n");
    printf ("Informe a temperatura atual (em Celsius) do jogo: ");
    scanf ("%f", &temperatura);

// Analisando a situação climática dentro do jogo

    if (temperatura > 25 ) {
    strcpy (resultado, "Clima ensolarado!");
    
    } else if (temperatura >= 15 && temperatura <= 25) {
    strcpy (resultado, "Clima nublado!");

    } else {
    strcpy (resultado, "Clima chuvoso!"); }

// Tela de resultado

system ("cls");
    printf ("ZHAO - A HISTÓRIA CHINESA NÃO CONTADA! THE GAME!\nConclusões do teste\n\n");
    printf ("Temperatura atual do jogo: %.2f Celsius\n", temperatura);
    printf ("Resultado da situção climática: %s\n", resultado);
    
    return 0;

}
