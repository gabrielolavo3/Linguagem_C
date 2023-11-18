/* 
Descrção  : Ler 10 idades, pesos e alturas, calcular e mostrar: 1 - média total das idades;
2 - a quantidade de pessoas com mais de 90 quilos e altura menor a 1,50;
3 - a porcentagem de pessoas com idade entre 10 e 30 anos que medem mais de 1,90! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 18/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a = 0;
    int b = 10;
    int idade;
    int somaIdade = 0;
    int somaPessoas = 0;
    int somaPeso_Altura = 0;
    float peso;
    float altura;
    float media;
    float percentual;

// Solicitando dados

    printf ("INSTITUTO 'JOHN BROWN' DE PESQUISAS\nQuestionário na Praia de Cube\n\n");
    for (a = 1; a <= b; a++) {
        printf ("Digite a idade da %dª entrevistado: ", a);
        scanf ("%d", &idade);
        printf ("Informe o peso: ");
        scanf ("%f", &peso);
        printf ("Informe a altura: ");
        scanf ("%f", &altura);
        printf ("\n");

// Somando todas as idades

        somaIdade+=idade;

// Acumulando a quantidade de pessoas com mais de 90Kg e menos de 1,50 de altura

        if (peso > 90 && altura < 1.50) {
            somaPessoas++; }

// Acumulando a quantidade de pessoas e calculando o percentual com idade entre 10 e 30 e que tem a partir de 1,90 de altura

        if (idade >= 10 && idade <= 30 && altura > 1.90) {
            somaPeso_Altura++; }
        
        if (somaPeso_Altura > 0) {
            percentual = ((float)somaPeso_Altura / (float)b) * 100;

        } else {
            percentual = 0; }
    }

// Calculando a média das idades e o percentual de pessoa com mais de 1,90 de altura e idade entre 10 e 30

    media = (float)somaIdade / b;

// Tela de resultado

system ("cls || clear");

    printf ("INSTITUTO 'JOHN BROWN' DE PESQUISAS\nResultado da Pesquisa\n\n");
    printf ("Média de idades: %.0f\n", media);
    printf ("Quantidade de entrevistados com mais de 90 Kgs e altura abaixo de 1,50: %d\n", somaPessoas);
    printf ("Porcentagem de entrevistados com idade de 10 à 30 anos que medem mais de 1,90: %.2f%%\n", percentual);

    return 0;
}
