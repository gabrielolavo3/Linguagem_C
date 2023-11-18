/* 
Descrção  : Ler 10 idades, pesos e alturas, calcular e mostrar: 1 - média total das idades; 2 - a quantidade de pessoas com mais 
de 90Kg e altura menor a 1,50; 3 - a porcentagem de pessoas com idade entre 10 e 30 anos que medem mais de 1,90! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 18/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a = 0;
    int b = 6;
    int idade;
    int somaIdade = 0;
    int somaPessoas = 0;
    int somaPeso_Altura = 0;
    float peso;
    float altura;
    float media;
    float percentual;

// Solicitando dados

    printf ("INSTITUTO DE PESQUISA 'JOHN BROWN'!\nQuestionário no Distrito de Azure\n\n");

    for (a = 1; a <= b; a++) {

// Lendo e validando a idade

        do {
            printf ("Digite a idade (em Anos) do %dª entrevistado: ", a);
            scanf ("%d", &idade);

            if (idade <= 0 || idade > 160) {
                printf ("\nIdade inválida! Informe a idade entre 1 e 160 anos\n\n"); }

        } while (idade <= 0 || idade >= 160);

// Lendo e validando o peso

        do {
            printf ("Informe o peso (em Kg): ");
            scanf ("%f", &peso);

            if (peso < 10 || peso > 250) {
                printf ("\nPeso inválido! Informe o peso entre 10Kg e 250Kg\n\n"); }

        } while (peso < 10 || peso > 250);

// Lendo e validando a altura

        do {
            printf ("Informe a altura (em M): ");  
            scanf ("%f", &altura);

            if (altura < 0.80 || altura > 2.20) {
                printf ("\nAltura inválida! Informe a altura entre 80cm e 2,20m\n\n"); }

        } while (altura < 0.80 || altura > 2.20);

        printf ("\n");

// Somando todas as idades

        somaIdade+=idade;

// Acumulando a quantidade de pessoas com mais de 90Kg e menos de 1,50 de altura

        if (peso > 90 && altura < 1.50) {
            somaPessoas++; }

// Acumulando a quantidade de pessoas e calculando 

        if (idade >= 10 && idade <= 30 && altura > 1.90) {
            somaPeso_Altura++; }
    }

// Calculando a média de todas as idades e o percentual com idade entre 10 e 30 e que tem a partir de 1,90 de altura

    media = (float)somaIdade / b;
        
    if (somaPeso_Altura > 0) {
        percentual = ((float)somaPeso_Altura / (float)b) * 100;

    } else {
        percentual = 0; }

// Tela de resultado

system ("cls || clear");

    printf ("INSTITUTO 'JOHN BROWN' DE PESQUISAS\nResultados da Pesquisa\n\n");
    printf ("Média de idades: %.0f\n", media);
    printf ("Quantidade de entrevistados com mais de 90 Kgs e altura abaixo de 1,50: %d\n", somaPessoas);
    printf ("Porcentagem de entrevistados com idade de 10 à 30 anos que medem mais de 1,90: %.2f%%\n", percentual);

    return 0;
}
