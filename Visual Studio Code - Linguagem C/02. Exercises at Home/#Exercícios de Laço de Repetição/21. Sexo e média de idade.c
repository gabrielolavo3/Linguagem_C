/* 
Descrição  : Ler o sexo e idade de 7 pessoas e imprimir a média geral das idades, a média das idades
de mulheres e dos homens! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 15/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main ( ) {
    setlocale(LC_ALL, "portuguese");

// Declaração de variáveis

    int a = 0;
    int idade;
    int quantMulheres = 0, quantHomens = 0;
    int IdadeGeral = 0, somaIdade_Mulheres = 0, somaIdade_Homens = 0;
    float mediaGeral, mediaMulheres, mediaHomens;
    char sexo;

// Solicitando dados

    printf ("ORGANIZAÇÃO HIGH CUBE! COLETANDO DADOS E DIVULGANDO PESQUISAS\nInforme dos dados requeridos\n\n");

    for (a = 1; a <= 7; a++) {
        do {
            fflush(stdin);
            printf("Insira o sexo ('M' ou 'F') do %dº entrevistado: ", a);
            scanf("%c", &sexo);
            sexo = toupper(sexo);

            printf("Insira a idade: ");
            scanf("%d", &idade);
            printf("\n");

            if (idade <= 0 || (sexo != 'F' && sexo != 'M')) {
            printf ("Há dados inválidos! Informe o sexo ou idade CORRETAMENTE...\n\n"); }

        } while (idade <= 0 || (sexo != 'F' && sexo != 'M'));

// Acumulando e calculando a média de todas as idades
 
        IdadeGeral += idade;
        mediaGeral = (float)IdadeGeral / (float) a;

// Acumulando a quantidade de mulheres e homens, suas idades e calculando a média de idades

        if (sexo == 'F') {
            somaIdade_Mulheres += idade;
            quantMulheres++;
            mediaMulheres = (float)somaIdade_Mulheres / (float)quantMulheres; 
        
        } else {
            somaIdade_Homens += idade;
            quantHomens++;
            mediaHomens = (float)somaIdade_Homens / (float)quantHomens; }
    }

// Tela de resultado

    system ("cls");

    printf ("ORGANIZAÇÃO HIGH CUBE! COLETANDO DADOS E DIVULGANDO PESQUISAS\nResumo dos dados estatísticos\n\n");
    printf("Média de idade das mulheres: %.0f\n", mediaMulheres);
    printf("Média de idade dos homens: %.0f\n", mediaHomens);
    printf("Média geral de idades: %.0f", mediaGeral);

    return 0;
}