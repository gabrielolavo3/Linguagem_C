/* 
Descrição  : Solicitar ao usuário a quantidade de notas que deseja adicionar e perguntar a nota
até atingir o limite determinado. No fim, imprimir a média das notas! (função)
Professor  : Carlos Anderson Santos de Jesus 
Autor(a)   : Gabriel S. Olavo
Data atual : 07/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a = 0, quantidade_de_Notas;
    float notas, soma_Nota, media;

// Solicitando dados

    printf ("COLÉGIO VINCENT BELMONT\n\n");
    printf ("Informe a quantidade de notas que deseja inserir: ");
    scanf ("%d", &quantidade_de_Notas);
    printf ("\nInsira os dados\n\n");

// Coletando, acumulando as notas e calculando a média

    for (a = 1; a <= quantidade_de_Notas; a++) {

    do {
        printf ("Digite a %dº nota: ", a);
        scanf ("%f", &notas);

        if (notas < 0 || notas > 10) {
        printf ("\nNota inválida! Informe outro valor\n\n"); }
        
    } while (notas < 0  || notas > 10);
        
    soma_Nota += notas; }

    media = soma_Nota / quantidade_de_Notas;

// Tela de resultado

system ("cls || clear");

    printf ("COLÉGIO VINCENT BELMONT\n\n");
    printf ("Média final: %.2f", media);

    return 0;
}
