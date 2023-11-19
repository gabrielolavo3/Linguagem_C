/* 
Descrção  : Ler 15 idades e pesos. Calcular e mostrar as médias dos pesos das pessoas da mesma faixa etária:
1ª faixa - 1 e 10 anos; 2ª faixa - 11 e 20 anos; 3ª faixa - 21 e 30 anos; 4ª faixa - a partir de 30 anos! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 19/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a = 0;
    int idade;
    int faixaEtaria_1e10 = 0, faixaEtaria_11e20 = 0, faixaEtaria_21e30 = 0, faixaEtaria_31mais = 0;
    float peso;
    float media_1e10, media_11e20, media_21e30, media_31mais;
    float somaPeso_1e10 = 0, somaPeso_11e20 = 0, somaPeso_21e30 = 0, somaPeso_31mais = 0;

// Solicitando dados

    printf ("INSTITUTO HOLMES!\nQuestionário de coleta de dados do Distrito Locus\n\n");

    for (a = 1; a <= 15; a++) {
        printf("Informe idade do %dº entrevistado: ", a);
        scanf ("%d", &idade);
        printf ("Informe o peso do entrevistado: ");
        scanf ("%f", &peso);
        printf ("\n");

// Somando o peso da faixa etária de 1 a 10 anos e acumulando a quantidade de pessoas

        if (idade >= 1 && idade <= 10) {
            somaPeso_1e10+=peso; 
            faixaEtaria_1e10++; } 

// Somando o peso da faixa etária de 11 a 20 anos e acumulando a quantidade de pessoas            
        
        if (idade >= 11 && idade <= 20) {
            somaPeso_11e20+=peso; 
            faixaEtaria_11e20++; } 

// Somando o peso da faixa etária de 21 a 30 anos e acumulando a quantidade de pessoas

        if (idade >= 21 && idade <= 30) {
            somaPeso_21e30+=peso; 
            faixaEtaria_21e30++; } 

// Somando o peso da faixa etária a partir de 31 anos e acumulando a quantidade de pessoas

        if (idade >= 31) {
            somaPeso_31mais+=peso; 
            faixaEtaria_31mais++; }
    }

// Calculando a média de peso de cada faixa etária

    media_1e10 = somaPeso_1e10 / (float)faixaEtaria_1e10;
    media_11e20 = somaPeso_11e20 / (float)faixaEtaria_11e20;
    media_21e30 = somaPeso_21e30 / (float)faixaEtaria_21e30;
    media_31mais = somaPeso_31mais / (float)faixaEtaria_31mais; 

// Tela de resultado

system ("cls || clear");

    printf ("INSTITUTO HOLMES!\n\n");
    printf ("Média de peso da faixa etária de 1 a 10 anos: %.2f\n", media_1e10);
    printf ("Média de peso da faixa etária de 11 a 20 anos: %.2f\n", media_11e20);
    printf ("Média de peso da faixa etária de 21 a 30 anos: %.2f\n", media_21e30);
    printf ("Média de peso da faixa etária a partir de 31 anos: %.2f\n", media_31mais);
    
    return 0;
}