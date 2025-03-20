/* 
Descrção  : Ler a idade e peso de 7 pessoas e imprimir a média das idades e quantas
pessoas estão acima de 90Kg! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 11/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a = 0;
    int idade;
    int soma_Idade = 0, soma_Peso = 0;
    float peso, media_Idade;;

// Solicitando dados

    printf ("INSTITURO DE PESQUISA HOLMES\nInsira os dados da pesquisa familiar\n\n");
    
    for (a = 1; a <= 7; a++) {

        do {
            printf ("Informe a idade do %dº componente familiar: ", a);
            scanf ("%d", &idade);
            printf ("Informe o peso do %dº componente familiar: ", a);
            scanf ("%f", &peso);
            printf ("\n");

            if (peso <= 0 || idade <= 0) {
                printf ("Idade ou peso INVÁLIDOS! Informe novamente..\n\n"); }

        } while (peso <= 0 || idade <= 0);

        if (peso > 90) {
            soma_Peso++; }

// Calculando a média de idade

    soma_Idade += idade;
    media_Idade = soma_Idade / a; }

// Tela de resultado

    system ("cls");
    printf ("INSTITURO DE PESQUISA HOLMES\nResumo dos dados da pesquisa familiar\n\n");
    printf ("Média de idades: %.2f\n", media_Idade);
    printf ("Quantidades de componentes com peso acima de 90Kg: %d", soma_Peso);

    return 0;
}
