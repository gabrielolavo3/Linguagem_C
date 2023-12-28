/* 
Descrição  : Ler a idade de um pessoa e informar se ela é obrigada a votar ou não! (função)
Professor  : Carlos Anderson Santos de Jesus
Autor(a)   : Gabriel S. Olavo
Data atual : 02/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int idade;

// Solicitando dados

    printf ("INDICADOR DE OBRIGATORIEDADE DO VOTO\n\n");
    printf ("Digite a sua idade: ");
    scanf ("%d", &idade);

    if (idade < 18 || idade > 65) {
        printf ("Resultado: Voto facultativo");

    } else {
        printf ("Resultado: Voto obrigatório"); } 

    return 0;
}