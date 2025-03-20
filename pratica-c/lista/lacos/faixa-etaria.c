/* 
Descrição  : Ler 15 idades e imprimir a quantidade de idade em cada faixa etária e o percentual de idades da
1º e última faixa, com relação ao percentual total ! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 04/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a = 0;
    int idade;
    int ate15 = 0;
    int de16a30 = 0;
    int de31a45 = 0;
    int de46a60 = 0;
    int acima61 = 0;
    float percentual5anos = 0;
    float percentual_mais61 = 0;

// Solicitando dados

    printf ("PREFEITURA DE WOLLSTONECRAFT\nInsira os dados populacionais do bairro Saint Adam's\n\n");

    for (a = 1; a <= 15; a++) {
        printf ("Informe a idade da %dº pessoa: ", a);
        scanf ("%d", &idade);

// Acumulando as faixas etárias

    if (idade <= 15) {
    ate15++; }

    if (idade >= 16 && idade <= 30) {
    de16a30++; }

    if (idade >= 31 && idade <= 45) {
    de31a45++; }

    if (idade >= 46 && idade <= 60) {
    de46a60++; }

    if (idade >= 61) {
    acima61++; }

// Calculando percentuais
    
    percentual5anos = ((float) ate15 / (float) a) *100;
    percentual_mais61 = ((float) acima61 / (float) a) * 100; }

// Tela de resultado

system ("cls || clear");

    printf ("PREFEITURA DE WOLLSTONECRAFT\nDados do bairro Saint Adam's\n\n");
    printf ("Total de habitantes com idade até 15 anos: %d\n", ate15);
    printf ("Total de habitantes com idade entre 16 à 30 anos: %d\n", de16a30);
    printf ("Total de habitantes com idade entre 31 à 45 anos: %d\n", de31a45);
    printf ("Total de habitantes com idade entre 46 à 60 anos: %d\n", de46a60);
    printf ("Total de habitantes com idade a partir de 61 anos: %d\n\n", acima61);
    printf ("Equivalente percentual de idade de 15 anos: %.2f\n", percentual5anos);
    printf ("Equivalente percentual de idade a partir de 61 anos: %.2f", percentual_mais61);

    return 0;
}