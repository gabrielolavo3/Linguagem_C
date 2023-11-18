/* 
Descrção  : Ler 20 idades, pesos e alturas, calcular e mostrar: 1 - Quantidade de pessoas acima de 50 anos e com peso abaixo de 60 Kg; 
2 - a quantidade de pessoas com mais de 90Kg e altura menor a 1,50; 3 - Média das idades das pessoas com altura abaixo de 1,50 M; 
4 - Porcentagem de pessoas com olhos azuis; 5 - Quantidade de pessoas ruivas que não possuem olhos azuis! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 18/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

// Declaração de constante

#define b 20

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a = 0;
    int idade;
    int soma_Idade = 0;
    int olhos_Azuis = 0, pessoasRuivas = 0;
    int pessoas_menos150M = 0, pessoas_50anos_menos60Kg = 0;
    float peso, altura;
    float media, percentual;
    char cor_do_Olho, cor_do_Cabelo;

// Solicitando dados

    printf ("INSTITUTO DE PESQUISA GEORGE MARTIN!\nQuestinário de coleta de dados do Distrito The World\n\n");
    
    for (a = 1; a <= b; a++ ) {

// Lendo e validando a idade

        do {
            printf ("Insira a idade do %dº entrevistado: ", a);
            scanf ("%d", &idade);
            
            if (idade <= 0 || idade > 160) {
                printf ("\nIdade inválida! Informe a idade entre 1 e 160 anos\n\n"); }

        } while (idade <= 0 || idade >= 160);

// Lendo e validando o peso

        do {
            printf ("Insira o peso: ");
            scanf ("%f", &peso);

            if (peso < 10 || peso > 250) {
                printf ("\nPeso inválido! Informe o peso entre 10Kg e 250Kg\n\n"); }

        } while (peso < 10 || peso > 250);

// Lendo e validando a altura

        do {
            printf ("Insira a altura: ");
            scanf ("%f", &altura);

            if (altura < 0.80 || altura > 2.20) {
                printf ("\nAltura inválida! Informe a altura entre 80cm e 2,20m\n\n"); }

        } while (altura < 0.80 || altura > 2.20);

// Convertendo letra, limpando cache de input, lendo e validando a cor dos olhos

        do {
        fflush (stdin);
            printf ("Informe a cor dos olhos (A - Azul, P - Preto, V - Verde e C - Castanho): ");
            scanf ("%c", &cor_do_Olho);
            cor_do_Olho = toupper(cor_do_Olho);

            switch (cor_do_Olho) {
            case 'A':
            case 'P':
            case 'V':
            case 'C':
                break;

            default:
                printf ("\nCor dos olhos inválida! Informe uma das opções de cores definidas\n\n");
                break; }

        } while (cor_do_Olho != 'A' && cor_do_Olho != 'P' && cor_do_Olho != 'V' && cor_do_Olho != 'C');

// Convertendo letra, limpando cache de input, lendo e validando a cor do cabelo

        do {
        fflush (stdin);
            printf ("Informe a cor do cabelo (P - Preto, C - Castanho, L - Louro e R - Ruivo): ");
            scanf ("%c", &cor_do_Cabelo);
            cor_do_Cabelo = toupper(cor_do_Cabelo);

            switch (cor_do_Cabelo) {
            case 'P':
            case 'C':
            case 'L':
            case 'R':
                break;

            default:
                printf ("\nCor do cabelo inválida! Informe uma das opções de cores definidas\n\n");
                break; }

        } while (cor_do_Cabelo != 'P' && cor_do_Cabelo != 'C' && cor_do_Cabelo != 'L' && cor_do_Cabelo != 'R');

    printf ("\n");

// Acumulando quantas pessoas têm idade acima de 50 anos e peso abaixo de 60Kg

        if (idade > 50 && peso < 60) {
            pessoas_50anos_menos60Kg++; }

// Acumulando quantas pessoas tem altura menor a 1,50 e somando suas idades

        if (altura < 1.50) {
            soma_Idade += idade;
            pessoas_menos150M++; }

// Acumulando a quantidade de pessoas com olhos azuis

        if (cor_do_Olho == 'A') {
            olhos_Azuis++; }

// Acumulando a quantidade de pessoas ruivas que não têm olhos azuis

        if (cor_do_Cabelo == 'R' && cor_do_Olho != 'A') {
            pessoasRuivas++; }
    }

// Calculando a média das idades das pessoas que medem menos de 1,50 | Calculando o percentual de pessoas com olhos azuis 

    media = (float)soma_Idade / pessoas_menos150M;
    percentual = ((float)olhos_Azuis / b) * 100;

// Tela de resultado

system ("cls || clear");

    printf ("INSTITUTO DE PESQUISA GEORGE MARTIN!\nDados do Distrito The World\n\n");
    printf ("Quantidade de pessoas acima de 50 anos e com peso abaixo de 60 Kg: %d\n", pessoas_50anos_menos60Kg);
    printf ("Média das idades das pessoas com altura abaixo de 1,50 M: %.0f\n", media);
    printf ("Porcentagem de pessoas com olhos azuis: %.2f\n", percentual);
    printf ("Quantidade de pessoas ruivas que não possuem olhos azuis: %d\n", pessoasRuivas);

    return 0;
}