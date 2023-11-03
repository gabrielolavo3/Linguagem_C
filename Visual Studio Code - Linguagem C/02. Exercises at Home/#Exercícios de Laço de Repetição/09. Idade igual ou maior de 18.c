/* 
Descrição  : Ler 10 idades e imprimir a quantidade de pessoas com 18 ou + e a quantidade com menos de 18! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 02/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL,"portuguese");

// Declaração de variáveis

    int a = 0;
    int idade;
    int acimaDe18 = 0;
    int abaixoDe18 = 0;

// Solicitando dados
    
    printf ("PESQUISA DE MAIORIDADE\nInforme os dados solicitados\n\n");

for (a = 1; a <= 10; a++ ) {
    printf ("Insira a idade da %dº entrevistados: ", a);
    scanf ("%d", &idade);

    if (idade >= 18) {
        acimaDe18++;

    } else {
        abaixoDe18++; }
}

// Tela de resultado

system ("cls || clear");

    printf ("PESQUISA DE MAIORIDADE\n\n");
    printf ("Total de entrevistados com 18 anos ou mais: %d\n", acimaDe18);
    printf ("Total de entrevistados com menos de 18 anos: %d", abaixoDe18);

    return 0;
}