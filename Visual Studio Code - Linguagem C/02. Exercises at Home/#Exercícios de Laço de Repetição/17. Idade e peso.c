/* 
Descr��o  : Ler a idade e peso de 7 pessoas e imprimir a m�dia das idades e quantas
pessoas est�o acima de 90Kg! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 11/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int a = 0;
    int idade;
    int soma_Idade = 0, soma_Peso = 0;
    float peso, media_Idade;;

// Solicitando dados

    printf ("INSTITURO DE PESQUISA HOLMES\nInsira os dados da pesquisa familiar\n\n");
    for (a = 1; a <= 7; a++) {
        printf ("Informe a idade do %d� componente familiar: ", a);
        scanf ("%d", &idade);
        printf ("Informe o peso do %d� componente familiar: ", a);
        scanf ("%f", &peso);
        printf ("\n");

        if (peso > 90) {
            soma_Peso++; }

// Calculando a m�dia de idade

    soma_Idade += idade;
    media_Idade = soma_Idade / a; }

// Tela de resultado

    system ("cls");
    printf ("INSTITURO DE PESQUISA HOLMES\nResumo dos dados da pesquisa familiar\n\n");
    printf ("M�dia de idades: %.2f\n", media_Idade);
    printf ("Quantidades de componentes com peso acima de 90Kg: %d", soma_Peso);

    return 0;
}