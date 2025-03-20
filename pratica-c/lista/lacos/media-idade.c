/* 
Descr��o  : Ler indeterminada quantidade de idades e imprimir a m�dia dos dados.
O programa se encerrar ao digitar 0! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 12/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int a = 0;
    int idade;
    int somaIdade = 0;
    int quantidadeDeIdade = 0;
    float media;

// Solicitando dados

    printf ("INSTITUTO DE PESQUISA GEORGE MARTIN\nInsira os dados solicitados (Insira '0' para encerrar o programa)\n\n");
    do {
        a++;
        printf ("Digite a idade da %d� pessoa: ", a);
        scanf ("%d", &idade);

        if (idade < 0 || idade >= 160) {
            printf ("\nIdade inv�lida! Informe uma idade entre 1 e 160 anos\n\n"); }

// Acumulando o valor total das idades e a quantidade de idades

        if (idade > 0) {
        somaIdade += idade; 
        quantidadeDeIdade++; }

    } while (idade != 0);

// Calculando a m�dia das idades

    media = (float) somaIdade / (float) quantidadeDeIdade;

// Tela de resultado

    system ("cls");
    printf ("INSTITUTO DE PESQUISA GEORGE MARTIN\n\n");
    printf ("M�dia das idades: %.2f\n", media);

    return 0;
}